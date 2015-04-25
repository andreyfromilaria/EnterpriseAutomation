#include "Ratios.hxx"

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

    void CQuickRatio::Update()
    {
        
    };
    
    void CCurrentLiquidityRatio::Update()
    {
        
    };
    
    void CCoverageReservesRatio::Update()
    {
        
    };
    
    void CFinancialDependenceRatio::Update()
    {
        
    };
    
    void COwnFundsAutonomyRatio::Update()
    {
        
    };
    
    void CStocksWorkingCapitalRatio::Update()
    {
        
    };
    
    void CConstantAssetRatio::Update()
    {
        
    };
    
    void CTurnoverAssetsRatio::Update()
    {
        
    };
    
    void CTurnoverAccountsPayableRatio::Update()
    {
        
    };
    
    void CTurnoverReceivablesRatio::Update()
    {
        
    };
    
    void CTurnoverStocksRatio::Update()
    {
        
    };
    
    void COverallProfitabilityRatio::Update()
    {
        
    };
    
    void CReturnOnAssetsRatio::Update()
    {
        
    };
    
    void CROERatio::Update()
    {
        
    };
    
    void CReturnOnSalesRatio::Update()
    {
        
    };
};