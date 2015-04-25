#ifndef _RATIOS_H_
#define _RATIOS_H_

#include "IlariaTypes.hxx"
#include "CObserver.hxx"

namespace Ilaria
{
    class CRatio : public CObserver
    {
        protected:
            real _Value;
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CLiquidityAndSolvencyRatio : public CRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CFinancialStabilityRatio : public CRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CBusinessActivityRatio : public CRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CProfitabilityRatio : public CRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
        
            friend class CEnterprise;
    };
    
    class CQuickRatio : public CLiquidityAndSolvencyRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CCurrentLiquidityRatio : public CLiquidityAndSolvencyRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CCoverageReservesRatio : public CLiquidityAndSolvencyRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CFinancialDependenceRatio : public CFinancialStabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class COwnFundsAutonomyRatio : public CFinancialStabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CStocksWorkingCapitalRatio : public CFinancialStabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CConstantAssetRatio : public CFinancialStabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CTurnoverAssetsRatio : public CBusinessActivityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CTurnoverAccountsPayableRatio : public CBusinessActivityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CTurnoverReceivablesRatio : public CBusinessActivityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CTurnoverStocksRatio : public CBusinessActivityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class COverallProfitabilityRatio : public CProfitabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CReturnOnAssetsRatio : public CProfitabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CROERatio : public CProfitabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
    
    class CReturnOnSalesRatio : public CProfitabilityRatio
    {
        public:
            virtual real GetValue()          = 0;
            virtual E_RATIO_STATE GetState() = 0;
            virtual void Update();
        
            friend class CEnterprise;
    };
};

#endif