#ifndef _RATIOS_H_
#define _RATIOS_H_

#include "IlariaTypes.hxx"
#include "IObserver.hxx"

namespace Ilaria
{
    class IRatio : public CObserver
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class ILiquidityAndSolvencyRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class ILiquidityAndSolvencyRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class IBusinessActivityRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class IProfitabilityRatio : public IRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CQuickRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CCurrentLiquidityRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CCoverageReservesRatio : public ILiquidityAndSolvencyRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CFinancialDependenceRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class COwnFundsAutonomyRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CStocksWorkingCapitalRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CConstantAssetRatio : public IFinancialStabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CTurnoverAssetsRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CTurnoverAccountsPayableRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CTurnoverReceivablesRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CTurnoverStocksRatio : public IBusinessActivityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class COverallprofitabilityRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CReturnOnAssetsRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CROERatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CReturnOnSalesRatio : public IProfitabilityRatio
    {
        public:
            virtual RatioType GetValue()     = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
};

#endif