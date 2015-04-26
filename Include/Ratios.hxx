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
        CRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState() = 0;
        
        
        E_RATIO_STATE GetState(real ARatio, real AFirst, real ASecond, real AThird, real AFourth, real AFifth, real ASixth);
        
        friend class CEnterprise;
    };
    
    class CLiquidityAndSolvencyRatio : public CRatio
    {
    public:
        CLiquidityAndSolvencyRatio() {} ;
        
        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CFinancialStabilityRatio : public CRatio
    {
    public:
        CFinancialStabilityRatio() {} ;

        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CBusinessActivityRatio : public CRatio
    {
    public:
        CBusinessActivityRatio() {} ;

        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CProfitabilityRatio : public CRatio
    {
    public:
        CProfitabilityRatio() {} ;

        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CQuickRatio : public CLiquidityAndSolvencyRatio
    {
    public:
        CQuickRatio() {} ;
        
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CCurrentLiquidityRatio : public CLiquidityAndSolvencyRatio
    {
    public:
        CCurrentLiquidityRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CCoverageReservesRatio : public CLiquidityAndSolvencyRatio
    {
    public:
        CCoverageReservesRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CFinancialDependenceRatio : public CFinancialStabilityRatio
    {
    public:
        CFinancialDependenceRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class COwnFundsAutonomyRatio : public CFinancialStabilityRatio
    {
    public:
        COwnFundsAutonomyRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CStocksWorkingCapitalRatio : public CFinancialStabilityRatio
    {
    public:
        CStocksWorkingCapitalRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CConstantAssetRatio : public CFinancialStabilityRatio
    {
    public:
        CConstantAssetRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverAssetsRatio : public CBusinessActivityRatio
    {
    public:
        CTurnoverAssetsRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverAccountsPayableRatio : public CBusinessActivityRatio
    {
    public:
        CTurnoverAccountsPayableRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverReceivablesRatio : public CBusinessActivityRatio
    {
    public:
        CTurnoverReceivablesRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverStocksRatio : public CBusinessActivityRatio
    {
    public:
        CTurnoverStocksRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class COverallProfitabilityRatio : public CProfitabilityRatio
    {
    public:
        COverallProfitabilityRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnAssetsRatio : public CProfitabilityRatio
    {
    public:
        CReturnOnAssetsRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CROERatio : public CProfitabilityRatio
    {
    public:
        CROERatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnSalesRatio : public CProfitabilityRatio
    {
    public:
        CReturnOnSalesRatio() {} ;

        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    typedef CQuickRatio                     L1;
    typedef CCurrentLiquidityRatio          P1;
    typedef CCoverageReservesRatio          L3;
    
    typedef CFinancialDependenceRatio       F1;
    typedef COwnFundsAutonomyRatio          F2;
    typedef CStocksWorkingCapitalRatio      F3;
    typedef CConstantAssetRatio             F4;
    
    typedef CTurnoverAssetsRatio            A2;
    typedef CTurnoverAccountsPayableRatio   A4;
    typedef CTurnoverReceivablesRatio       A5;
    typedef CTurnoverStocksRatio            A6;
    
    typedef COverallProfitabilityRatio      R1;
    typedef CReturnOnAssetsRatio            R2;
    typedef CROERatio                       R3;
    typedef CReturnOnSalesRatio             R4;
};

#endif