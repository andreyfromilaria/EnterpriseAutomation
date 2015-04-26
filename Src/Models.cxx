#include "Models.hxx"
#include "CEnterprise.hxx"

namespace Ilaria
{
    real CModel::GetValue() const
    {
        return _Value;
    };
    
    void CTFModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real TA  = enterprise->GetTurnaroundActives();
            real STL = enterprise->GetShortTermliabilities();
            real Bor = enterprise->GetBorrowings();
            real TL  = enterprise->GetTotalLiabilities();
            
            _Value = -0.3877 - 1.0736 * (TA / STL) + 0.579 * (Bor / TL);
        };
    };
    
    void CAltmanModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real NWC    = enterprise->GetNetWorkingCapital();
            real TA     = enterprise->GetTotalAssets();
            real UL     = enterprise->GetUncoveredLoss();
            real PBT    = enterprise->GetProfitBeforeTax();
            real IP     = enterprise->GetInterestPayable();
            real MVE    = enterprise->GetMarketValueOfEquity();
            real RFSG   = enterprise->GetRevenueFromSaleOfGoods();
            real CTD    = enterprise->GetCostTotalDebt();
            
            real X1 = NWC / TA;
            real X2 = UL / TA;
            real X3 = (PBT + IP) / TA;
            real X4 = MVE / CTD;
            real X5 = RFSG / TA;
            
            _Value = 1.2 * X1 + 1.4 * X2 + 3.3 * X3 + 0.6 * X4 + X5;
        };
    };
    
    void CTATModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real PBT    = enterprise->GetProfitBeforeTax();
            real TanA   = enterprise->GetTangibleAssets();
            real TurA   = enterprise->GetTurnaroundActives();
            real STL    = enterprise->GetShortTermliabilities();
            real RFSG   = enterprise->GetRevenueFromSaleOfGoods();
            real OA     = enterprise->GetOperatingAssets();
            real OE     = enterprise->GetOperatingExpenses();
            
            real V9  = PBT / TanA;
            real V25 = TurA / STL;
            real V31 = RFSG / TanA;
            real V35 = OA / OE;
            
            _Value = 19.892 * V9 + 0.047 * V25 + 0.7141 * V31 + 0.486 * V35;
        };
    };
    
    void CRModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real TA = enterprise->GetTurnaroundActives();
            real A = enterprise->GetAssets();
            real NPRP = enterprise->GetNetProfitOfTheReportingPeriod();
            real E = enterprise->GetEquity();
            real RFSG = enterprise->GetRevenueFromSaleOfGoods();
            real CPS = enterprise->GetCostOfProductionAndSales();
            
            real K1 = TA / A;
            real K2 = NPRP / E;
            real K3 = RFSG / A;
            real K4 = NPRP / CPS;
            
            _Value = 8.38 * K1 + K2 + 0.054 * K3 + 0.63 * K4;
        };
    };
    
    void CDAModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            
        };
    };
    
    void CZModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            
        };
    };
    
    void CRegressionModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            
        };
    };
};