#include "CRatioManager.hxx"

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
        if (_mRatios[Id])
            return _mRatios[Id];
        
        return nullptr;
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
};