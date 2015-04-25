#include "Ratios.hxx"
#include "CEnterprise.hxx"

namespace Ilaria
{
    real CQuickRatio::GetValue()
    {
        return _Value;
    };
    
    real CCurrentLiquidityRatio::GetValue()
    {
        return _Value;
    };
    
    real CCoverageReservesRatio::GetValue()
    {
        return _Value;
    };
    
    real CFinancialDependenceRatio::GetValue()
    {
        return _Value;
    };
    
    real COwnFundsAutonomyRatio::GetValue()
    {
        return _Value;
    };
    
    real CStocksWorkingCapitalRatio::GetValue()
    {
        return _Value;
    };
    
    real CConstantAssetRatio::GetValue()
    {
        return _Value;
    };
    
    real CTurnoverAssetsRatio::GetValue()
    {
        return _Value;
    };
    
    real CTurnoverAccountsPayableRatio::GetValue()
    {
        return _Value;
    };
    
    real CTurnoverReceivablesRatio::GetValue()
    {
        return _Value;
    };
    
    real CTurnoverStocksRatio::GetValue()
    {
        return _Value;
    };
    
    real COverallProfitabilityRatio::GetValue()
    {
        return _Value;
    };
    
    real CReturnOnAssetsRatio::GetValue()
    {
        return _Value;
    };
    
    real CROERatio::GetValue()
    {
        return _Value;
    };
    
    real CReturnOnSalesRatio::GetValue()
    {
        return _Value;
    };
    
    E_RATIO_STATE CQuickRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.1, 0.5, 1, 1.8, 3);
    };
    
    E_RATIO_STATE CCurrentLiquidityRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.6, 1.27, 2.2, 4.07, 6);
    };
    
    E_RATIO_STATE CCoverageReservesRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.5, 0.7, 0.9, 1.3, 3);
    };
    
    E_RATIO_STATE CFinancialDependenceRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.5, 1.03, 1.5, 2.3, 4);
    };
    
    E_RATIO_STATE COwnFundsAutonomyRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.25, 0.48, 0.8, 0.9, 1);
    };
    
    E_RATIO_STATE CStocksWorkingCapitalRatio::GetState()
    {
        return Ilaria::GetState(_Value, -2, -0.67, 0, 0.7, 1.57, 4);
    };
    
    E_RATIO_STATE CConstantAssetRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.5, 0.77, 1.1, 1.43, 3);
    };
    
    E_RATIO_STATE CTurnoverAssetsRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.06, 0.13, 0.22, 0.27, 1);
    };
    
    E_RATIO_STATE CTurnoverAccountsPayableRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.4, 0.8, 1.4, 1.93, 10);
    };
    
    E_RATIO_STATE CTurnoverReceivablesRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 0.6, 1, 1.6, 2.13, 10);
    };
    
    E_RATIO_STATE CTurnoverStocksRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 1, 2, 3, 5, 10);
    };
    
    E_RATIO_STATE COverallProfitabilityRatio::GetState()
    {
        return Ilaria::GetState(_Value, 0, 2, 4, 12, 24, 70);
    };
    
    E_RATIO_STATE CReturnOnAssetsRatio::GetState()
    {
        return Ilaria::GetState(_Value, -3, -1, 0, 1, 3.67, 6);
    };
    
    E_RATIO_STATE CROERatio::GetState()
    {
        return Ilaria::GetState(_Value, -4, -1.33, 0, 2, 6.67, 20);
    };
    
    E_RATIO_STATE CReturnOnSalesRatio::GetState()
    {
        return Ilaria::GetState(_Value, -12, 0, 4, 12, 24, 50);
    };

    void CQuickRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _TurnaroundActives  = enterprise->GetTurnaroundActives();
            _Stocks             = enterprise->GetStocks();
            _ValueAddedTax      = enterprise->GetValueAddedTax();
            _MaxReceivables     = enterprise->GetMaxReceivables();
            _CurrentLiability   = enterprise->GetCurrentLiability();
            _DefferedIncome     = enterprise->GetDefferedIncome();
            
            
        };
    };
    
    void CCurrentLiquidityRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _TurnaroundActives  = enterprise->GetTurnaroundActives();
            _MaxReceivables     = enterprise->GetMaxReceivables();
            _CurrentLiability   = enterprise->GetCurrentLiability();
            _DefferedIncome     = enterprise->GetDefferedIncome();
            
            
        };
    };
    
    void CCoverageReservesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _TurnaroundActives  = enterprise->GetTurnaroundActives();
            _LongTermCommitment = enterprise->GetLongTermCommitment();
            _CurrentLiability   = enterprise->GetCurrentLiability();
            _DefferedIncome     = enterprise->GetDefferedIncome();
            _Loans              = enterprise->GetLoans();
            _Stocks             = enterprise->GetStocks();
            
            
        };
    };
    
    void CFinancialDependenceRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _LongTermCommitment         = enterprise->GetLongTermCommitment();
            _CurrentLiability           = enterprise->GetCurrentLiability();
            _DefferedIncome             = enterprise->GetDefferedIncome();
            _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            
            
        };
    };
    
    void COwnFundsAutonomyRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _DefferedIncome             = enterprise->GetDefferedIncome();
            _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            _TurnaroundActives          = enterprise->GetTurnaroundActives();
            
            
        };
    };
    
    void CStocksWorkingCapitalRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _DefferedIncome             = enterprise->GetDefferedIncome();
            _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            _Stocks                     = enterprise->GetStocks();
            
            
        };
    };
    
    void CConstantAssetRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _NonCurrentAssets           = enterprise->GetNonCurrentAssets();
            _MaxReceivables             = enterprise->GetMaxReceivables();
            _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            _DefferedIncome             = enterprise->GetDefferedIncome();
            
            
        };
    };
    
    void CTurnoverAssetsRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            _Assets                 = enterprise->GetAssets();
            
            
        };
    };
    
    void CTurnoverAccountsPayableRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            _BusinessExpenses       = enterprise->GetBusinessExpenses();
            _ManagementCosts        = enterprise->GetManagementCosts();
            _Payables               = enterprise->GetPayables();
            
            
        };
    };
    
    void CTurnoverReceivablesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            _MaxReceivables         = enterprise->GetMaxReceivables();
            _MinReceivables         = enterprise->GetMinReceivables();
            _DebtParticipants       = enterprise->GetDebtParticipants();
            
            
        };
    };
    
    void CTurnoverStocksRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _CostOfGoodSold = enterprise->GetCostOfGoodSold();
            _Stocks         = enterprise->GetStocks();
            
            
        };
    };
    
    void COverallProfitabilityRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _ProfitBeforeTax = enterprise->GetProfitBeforeTax();
            _IncomeTax = enterprise->GetIncomeTax();
            _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            _NonOperatingIncome = enterprise->GetNonOperatingIncome();
            
            
        };
    };
    
    void CReturnOnAssetsRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _NetProfit  = enterprise->GetNetProfit();
            _Assets     = enterprise->GetAssets();
            
            
        };
    };
    
    void CROERatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _NetProfit                  = enterprise->GetNetProfit();
            _CapitalAndReserves         = enterprise->GetCapitalAndReserves();
            _TargetFinancingAndReceipts = enterprise->GetTargetFinancingAndReceipts();
            _DefferedIncome             = enterprise->GetDefferedIncome();
            
            
        };
    };
    
    void CReturnOnSalesRatio::Update(CSubject* ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if(enterprise)
        {
            _ProfitOnSales          = enterprise->GetprofitOnSales();
            _RevenueFromSaleOfGoods = enterprise->GetRevenueFromSaleOfGoods();
            
            
        };
    };
};