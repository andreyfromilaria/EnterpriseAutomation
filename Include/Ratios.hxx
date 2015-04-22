#ifndef _RATIOS_H_
#define _RATIOS_H_

#include "IlariaTypes.hxx"

namespace Ilaria
{
    class IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class ILiquidityAndSolvencyRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class ILiquidityAndSolvencyRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class IBusinessActivityRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class IProfitabilityRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CQuickRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CCurrentLiquidityRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CCoverageReservesRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CFinancialDependenceRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class COwnFundsAutonomyRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CStocksWorkingCapitalRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CConstantAssetRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CTurnoverAssetsRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CTurnoverAccountsPayableRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CTurnoverReceivablesRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CTurnoverStocksRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class COverallprofitabilityRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CReturnOnAssetsRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CROERatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
    
    class CReturnOnSalesRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
    };
};

#endif