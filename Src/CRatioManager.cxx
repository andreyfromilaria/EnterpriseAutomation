#include "CRatioManager.hxx"
#include <iostream>

namespace Ilaria
{
    CRatioManager::CRatioManager()
    {
        _Init();
    };
    
    CRatioManager::~CRatioManager()
    {
        _mRatios.clear();
    };
    
    CRatio* CRatioManager::GetRatioById(E_RATIO_ID Id)
    {
        return _mRatios[Id];
    };
    
    std::map<E_RATIO_ID, CRatio*> CRatioManager::GetRatios() const
    {
        return _mRatios;
    };
    
    void CRatioManager::_Init()
    {
        _mRatios[ERI_L1] = new CQuickRatio();
        _mRatios[ERI_P1] = new CCurrentLiquidityRatio();
        _mRatios[ERI_L3] = new CCoverageReservesRatio();
        
        _mRatios[ERI_F1] = new CFinancialDependenceRatio();
        _mRatios[ERI_F2] = new COwnFundsAutonomyRatio();
        _mRatios[ERI_F3] = new CStocksWorkingCapitalRatio();
        _mRatios[ERI_F4] = new CConstantAssetRatio();
        
        _mRatios[ERI_A2] = new CTurnoverAssetsRatio();
        _mRatios[ERI_A4] = new CTurnoverAccountsPayableRatio();
        _mRatios[ERI_A5] = new CTurnoverReceivablesRatio();
        _mRatios[ERI_A6] = new CTurnoverStocksRatio();
        
        _mRatios[ERI_R1] = new COverallProfitabilityRatio();
        _mRatios[ERI_R2] = new CReturnOnAssetsRatio();
        _mRatios[ERI_R3] = new CROERatio();
        _mRatios[ERI_R4] = new CReturnOnSalesRatio();
    };
    
    std::ostream& operator << (std::ostream& out, CRatioManager manager)
    {
        out << "L1 = " << manager.GetRatioById(ERI_L1)->GetValue() << std::endl;
        out << "P1 = " << manager.GetRatioById(ERI_P1)->GetValue() << std::endl;
        out << "L3 = " << manager.GetRatioById(ERI_L3)->GetValue() << std::endl;
        
        out << '\n';
        
        out << "F1 = " << manager.GetRatioById(ERI_F1)->GetValue() << std::endl;
        out << "F2 = " << manager.GetRatioById(ERI_F2)->GetValue() << std::endl;
        out << "F3 = " << manager.GetRatioById(ERI_F3)->GetValue() << std::endl;
        out << "F4 = " << manager.GetRatioById(ERI_F4)->GetValue() << std::endl;
        
        out << '\n';
        
        out << "A2 = " << manager.GetRatioById(ERI_A2)->GetValue() << std::endl;
        out << "A4 = " << manager.GetRatioById(ERI_A4)->GetValue() << std::endl;
        out << "A5 = " << manager.GetRatioById(ERI_A5)->GetValue() << std::endl;
        out << "A6 = " << manager.GetRatioById(ERI_A6)->GetValue() << std::endl;
        
        out << '\n';
        
        out << "R1 = " << manager.GetRatioById(ERI_R1)->GetValue() << std::endl;
        out << "R2 = " << manager.GetRatioById(ERI_R2)->GetValue() << std::endl;
        out << "R3 = " << manager.GetRatioById(ERI_R3)->GetValue() << std::endl;
        out << "R4 = " << manager.GetRatioById(ERI_R4)->GetValue() << std::endl;
        
        out << '\n';
        
        return out;
    };
};