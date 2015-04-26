#include "Ratios.hxx"
#include "CEnterprise.hxx"

namespace Ilaria
{
    E_RATIO_STATE CRatio::GetState(real ARatio, real AFirst, real ASecond, real AThird, real AFourth, real AFifth, real ASixth)
    {
        if (ARatio < ASecond)
            return ERS_VERY_LOW;
        else if (ARatio >= ASecond && ARatio < AThird)
            return ERS_LOW;
        else if (ARatio >= AThird && ARatio < AFourth)
            return ERS_MIDDLE;
        else if (ARatio >= AFourth && ARatio < AFifth)
            return ERS_HIGH;
        
        return ERS_VERY_HIGH;
    };
    
    real CRatio::GetValue() const
    {
        return _Value;
    };
    
    E_RATIO_STATE CQuickRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.1, 0.5, 1, 1.8, 3);
    };
    
    E_RATIO_STATE CCurrentLiquidityRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.6, 1.27, 2.2, 4.07, 6);
    };
    
    E_RATIO_STATE CCoverageReservesRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.5, 0.7, 0.9, 1.3, 3);
    };
    
    E_RATIO_STATE CFinancialDependenceRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.5, 1.03, 1.5, 2.3, 4);
    };
    
    E_RATIO_STATE COwnFundsAutonomyRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.25, 0.48, 0.8, 0.9, 1);
    };
    
    E_RATIO_STATE CStocksWorkingCapitalRatio::GetState()
    {
        return CRatio::GetState(_Value, -2, -0.67, 0, 0.7, 1.57, 4);
    };
    
    E_RATIO_STATE CConstantAssetRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.5, 0.77, 1.1, 1.43, 3);
    };
    
    E_RATIO_STATE CTurnoverAssetsRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.06, 0.13, 0.22, 0.27, 1);
    };
    
    E_RATIO_STATE CTurnoverAccountsPayableRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.4, 0.8, 1.4, 1.93, 10);
    };
    
    E_RATIO_STATE CTurnoverReceivablesRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 0.6, 1, 1.6, 2.13, 10);
    };
    
    E_RATIO_STATE CTurnoverStocksRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 1, 2, 3, 5, 10);
    };
    
    E_RATIO_STATE COverallProfitabilityRatio::GetState()
    {
        return CRatio::GetState(_Value, 0, 2, 4, 12, 24, 70);
    };
    
    E_RATIO_STATE CReturnOnAssetsRatio::GetState()
    {
        return CRatio::GetState(_Value, -3, -1, 0, 1, 3.67, 6);
    };
    
    E_RATIO_STATE CROERatio::GetState()
    {
        return CRatio::GetState(_Value, -4, -1.33, 0, 2, 6.67, 20);
    };
    
    E_RATIO_STATE CReturnOnSalesRatio::GetState()
    {
        return CRatio::GetState(_Value, -12, 0, 4, 12, 24, 50);
    };

    void CQuickRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _TurnaroundActives  = enterprise->GetTurnaroundActives();
            real _Stocks             = enterprise->GetStocks();
            real _ValueAddedTax      = enterprise->GetValueAddedTax();
            real _MaxReceivables     = enterprise->GetMaxReceivables();
            real _CurrentLiability   = enterprise->GetCurrentLiability();
            real _DefferedIncome     = enterprise->GetDefferedIncome();
            
            _Value = (_TurnaroundActives - _Stocks - _ValueAddedTax - _MaxReceivables) / (_CurrentLiability - _DefferedIncome);
        };
    };
    
    void CCurrentLiquidityRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _TurnaroundActives  = enterprise->GetTurnaroundActives();
            real _MaxReceivables     = enterprise->GetMaxReceivables();
            real _CurrentLiability   = enterprise->GetCurrentLiability();
            real _DefferedIncome     = enterprise->GetDefferedIncome();
            
            _Value = (_TurnaroundActives - _MaxReceivables) / (_CurrentLiability - _DefferedIncome);
        };
    };
    
    void CCoverageReservesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _TurnaroundActives  = enterprise->GetTurnaroundActives();
            real _LongTermCommitment = enterprise->GetLongTermCommitment();
            real _CurrentLiability   = enterprise->GetCurrentLiability();
            real _DefferedIncome     = enterprise->GetDefferedIncome();
            real _Loans              = enterprise->GetLoans();
            real _Stocks             = enterprise->GetStocks();
            
            _Value = ((_TurnaroundActives - _LongTermCommitment - _CurrentLiability + _DefferedIncome + _Loans) / _Stocks) * 100;
        };
    };
    
    void CFinancialDependenceRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _LongTermCommitment         = enterprise->GetLongTermCommitment();
            real _CurrentLiability           = enterprise->GetCurrentLiability();
            real _DefferedIncome             = enterprise->GetDefferedIncome();
            real _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            real _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            
            _Value = (_LongTermCommitment + _CurrentLiability - _DefferedIncome) / (_CapitalAndReserves - _TargetFinancingAndReceipts + _DefferedIncome);
        };
    };
    
    void COwnFundsAutonomyRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _DefferedIncome             = enterprise->GetDefferedIncome();
            real _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            real _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            real _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            real _TurnaroundActives          = enterprise->GetTurnaroundActives();
            
            _Value = (_CapitalAndReserves - _TargetFinancingAndReceipts + _DefferedIncome) / (_NonCurrentAssets + _TurnaroundActives);
        };
    };
    
    void CStocksWorkingCapitalRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _DefferedIncome             = enterprise->GetDefferedIncome();
            real _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            real _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            real _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            real _Stocks                     = enterprise->GetStocks();
            
            _Value = (_CapitalAndReserves - _TargetFinancingAndReceipts + _DefferedIncome  - _NonCurrentAssets) / _Stocks;
        };
    };
    
    void CConstantAssetRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            real _MaxReceivables             = enterprise->GetMaxReceivables();
            real _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            real _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            real _DefferedIncome             = enterprise->GetDefferedIncome();
            
            _Value = (_NonCurrentAssets + _MaxReceivables) / (_CapitalAndReserves - _TargetFinancingAndReceipts + _DefferedIncome);
        };
    };
    
    void CTurnoverAssetsRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            real _Assets                 = enterprise->GetAssets();
            
            _Value = _RevenueFromSaleOfGoods / _Assets;
        };
    };
    
    void CTurnoverAccountsPayableRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            real _BusinessExpenses       = enterprise->GetBusinessExpenses();
            real _ManagementCosts        = enterprise->GetManagementCosts();
            real _Payables               = enterprise->GetPayables();
            
            _Value = (_RevenueFromSaleOfGoods - _BusinessExpenses - _ManagementCosts) / _Payables;
        };
    };
    
    void CTurnoverReceivablesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            real _MaxReceivables         = enterprise->GetMaxReceivables();
            real _MinReceivables         = enterprise->GetMinReceivables();
            real _DebtParticipants       = enterprise->GetDebtParticipants();
            
            _Value = _RevenueFromSaleOfGoods / (_MaxReceivables + _MinReceivables - _DebtParticipants);
        };
    };
    
    void CTurnoverStocksRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _CostOfGoodSold = enterprise->GetCostOfGoodSold();
            real _Stocks         = enterprise->GetStocks();
            
            _Value = _CostOfGoodSold / _Stocks;
        };
    };
    
    void COverallProfitabilityRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _ProfitBeforeTax        = enterprise->GetProfitBeforeTax();
            real _IncomeTax              = enterprise->GetIncomeTax();
            real _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            real _NonOperatingIncome     = enterprise->GetNonOperatingIncome();
            
            _Value = (_ProfitBeforeTax - _IncomeTax) / (_RevenueFromSaleOfGoods + _NonOperatingIncome);
        };
    };
    
    void CReturnOnAssetsRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _NetProfit  = enterprise->GetNetProfit();
            real _Assets     = enterprise->GetAssets();
            
            _Value = _NetProfit / _Assets;
        };
    };
    
    void CROERatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _NetProfit                  = enterprise->GetNetProfit();
            real _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            real _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            real _DefferedIncome             = enterprise->GetDefferedIncome();
            
            _Value = _NetProfit / (_CapitalAndReserves - _TargetFinancingAndReceipts + _DefferedIncome);
        };
    };
    
    void CReturnOnSalesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            real _ProfitOnSales          = enterprise->GetprofitOnSales();
            real _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            
            _Value = _ProfitOnSales / _RevenueFromSaleOfGoods;
        };
    };
};