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
            real NPRP = enterprise->GetNetProfit();
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
    
    real CDAModel::GetKrizF()
    {
        return _KrizF;
    };
    
    real CDAModel::GetNormF()
    {
        return _NormF;
    };

    real CDAModel::GetKrizLP()
    {
        return _KrizLP;
    };

    real CDAModel::GetNormLP()
    {
        return _NormLP;
    };

    real CDAModel::GetKrizR()
    {
        return _KrizR;
    };

    real CDAModel::GetNormR()
    {
        return _NormR;
    };

    real CDAModel::GetKrizA()
    {
        return _KrizA;
    };

    real CDAModel::GetNormA()
    {
        return _NormA;
    };

    real CDAModel::GetKriz()
    {
        return _Kriz;
    };
    
    real CDAModel::GetNorm()
    {
        return _Norm;
    };

    void CDAModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real L1 = enterprise->GetRatioManager()->GetRatioById(ERI_L1)->GetValue();
            real P1 = enterprise->GetRatioManager()->GetRatioById(ERI_P1)->GetValue();
            real L3 = enterprise->GetRatioManager()->GetRatioById(ERI_L3)->GetValue();
            
            real F1 = enterprise->GetRatioManager()->GetRatioById(ERI_F1)->GetValue();
            real F2 = enterprise->GetRatioManager()->GetRatioById(ERI_F2)->GetValue();
            real F3 = enterprise->GetRatioManager()->GetRatioById(ERI_F3)->GetValue();
            real F4 = enterprise->GetRatioManager()->GetRatioById(ERI_F4)->GetValue();
            
            real A2 = enterprise->GetRatioManager()->GetRatioById(ERI_A2)->GetValue();
            real A4 = enterprise->GetRatioManager()->GetRatioById(ERI_A4)->GetValue();
            real A5 = enterprise->GetRatioManager()->GetRatioById(ERI_A5)->GetValue();
            real A6 = enterprise->GetRatioManager()->GetRatioById(ERI_A6)->GetValue();
            
            real R1 = enterprise->GetRatioManager()->GetRatioById(ERI_R1)->GetValue();
            real R2 = enterprise->GetRatioManager()->GetRatioById(ERI_R2)->GetValue();
            real R3 = enterprise->GetRatioManager()->GetRatioById(ERI_R3)->GetValue();
            real R4 = enterprise->GetRatioManager()->GetRatioById(ERI_R4)->GetValue();
            
            _KrizF = 16.36 * F1 - 0.51 * F2 + 7.99 * F3 + 18.97 * F4 - 56.81;
            _NormF = -5.26 * F1 + 110  * F2 + 3.23 * F3 - 3.83  * F4 - 54.0672;
            
            _KrizLP = 1.37  * L1 - 0.01 * L3 + 0.78 * P1 - 1.225;
            _NormLP = 11.47 * L1 + 0.05 * L3 + 5.67 * P1 - 3.63;
            
            _KrizR = 0.02 * R1 - 1.65 * R2 - 0.35 * R3 + 0.007 * R4 - 3.91;
            _NormR = 0.09 * R1 + 2.2  * R2 + 0.41 * R3 + 0.32  * R4 - 14.93;
            
            _KrizA = 1.33  * A2 - 0.15 * A4 - 0.23 * A5 + 0.64 * A6 - 1.115;
            _NormA = 18.79 * A2 - 1.75 * A4 - 0.84 * A5 + 2.72 * A6 - 18.48;
            
            real CK_LP = 34.72 * L1 - 0.095 * L3 + 1.54 * P1;
            real CK_F  = 22.94 * F1 + 59.17 * F2 - 9.5  * F3 + 42.03 * F4;
            real CK_A  = 1.59  * A2 - 6.02  * A4 + 7.25 * A5 - 2.6   * A6;
            real CK_R  = 0.03  * R1 - 9.58  * R2 - 2.16 * R3 - 0.67  * R4;
            
            real CN_LP = 21.26 * L1 + 0.01   * L3 - 5.67 * P1;
            real CN_F  = 15.2  * F1 - 166.59 * F2 - 2.45 * F3 + 3.48 * F4;
            real CN_A  = 23.84 * A2 + 0.59   * A4 - 2.4  * A5 + 1.03 * A6;
            real CN_R  = 0.78  * R1 - 2.83   * R2 - 3.09 * R3 - 0.49 * R4;
            
            _Kriz = CK_LP + CK_F + CK_A + CK_R - 122.7;
            _Norm = CN_LP - CN_F + CN_A + CN_R - 111;
        };
    };
    
    void CZModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real NL     = enterprise->GetNetLoss();
            real E      = enterprise->GetEquity();
            real P      = enterprise->GetPayables();
            real R      = enterprise->GetReceivables();
            real CL     = enterprise->GetCurrentLiability();
            real MLA    = enterprise->GetMostLiqilineAssets();
            real S      = enterprise->GetSales();
            real Bor    = enterprise->GetBorrowings(); // ?
            real A      = enterprise->GetAssetsPreviousYear();
            real RFSG   = enterprise->GetRevenueFromSaleOfGoodsPreviousYear();
            
            real X1 = NL / E;
            real X2 = P / R;
            real X3 = CL / MLA;
            real X4 = NL / S;
            real X5 = Bor / E;
            real X6 = A / RFSG;
            
            _Value = 0.25 * X1 + 0.1 * X2 + 0.2 * X3 + 0.25 * X4 + 0.1 * X5 + 0.1 * X6;
        };
    };
    
    void CRegressionModel::Update(CSubject *ASubject)
    {
        CEnterprise* enterprise = dynamic_cast<CEnterprise*>(ASubject);
        
        if (enterprise)
        {
            real L1 = enterprise->GetRatioManager()->GetRatioById(ERI_L1)->GetValue();
            real P1 = enterprise->GetRatioManager()->GetRatioById(ERI_P1)->GetValue();
            real L3 = enterprise->GetRatioManager()->GetRatioById(ERI_L3)->GetValue();
            
            real F1 = enterprise->GetRatioManager()->GetRatioById(ERI_F1)->GetValue();
            real F2 = enterprise->GetRatioManager()->GetRatioById(ERI_F2)->GetValue();
            real F3 = enterprise->GetRatioManager()->GetRatioById(ERI_F3)->GetValue();
            real F4 = enterprise->GetRatioManager()->GetRatioById(ERI_F4)->GetValue();
            
            real A2 = enterprise->GetRatioManager()->GetRatioById(ERI_A2)->GetValue();
            real A4 = enterprise->GetRatioManager()->GetRatioById(ERI_A4)->GetValue();
            real A5 = enterprise->GetRatioManager()->GetRatioById(ERI_A5)->GetValue();
            real A6 = enterprise->GetRatioManager()->GetRatioById(ERI_A6)->GetValue();
            
            real R1 = enterprise->GetRatioManager()->GetRatioById(ERI_R1)->GetValue();
            real R2 = enterprise->GetRatioManager()->GetRatioById(ERI_R2)->GetValue();
            real R3 = enterprise->GetRatioManager()->GetRatioById(ERI_R3)->GetValue();
            real R4 = enterprise->GetRatioManager()->GetRatioById(ERI_R4)->GetValue();
            
            real C_LP = -3.4 * L1 + 0.1  * L3 - 1.4  * P1;
            real C_F  = 1.39 * F1 + 1.89 * F2 - 1.1  * F3 + 0.66 * F4;
            real C_A  = 7.39 * A2 + 0.37 * A4 + 1.38 * A5 + 0.66 * A6;
            real C_R  = 0.02 * R1 - 1.1  * R2 - 0.16 * R3 - 0.07 * R4;
            
            _Value = C_LP - C_F - C_A - C_R - 1.52;
        };
    };
};