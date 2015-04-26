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

        virtual real GetValue() const    = 0;
        virtual E_RATIO_STATE GetState() = 0;
        
        
        E_RATIO_STATE GetState(real ARatio, real AFirst, real ASecond, real AThird, real AFourth, real AFifth, real ASixth);
        
        friend class CEnterprise;
    };
    
    class CLiquidityAndSolvencyRatio : public CRatio
    {
    public:
        CLiquidityAndSolvencyRatio() {} ;
        
        virtual real GetValue() const    = 0;
        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CFinancialStabilityRatio : public CRatio
    {
    public:
        CFinancialStabilityRatio() {} ;

        virtual real GetValue() const    = 0;
        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CBusinessActivityRatio : public CRatio
    {
    public:
        CBusinessActivityRatio() {} ;

        virtual real GetValue() const    = 0;
        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CProfitabilityRatio : public CRatio
    {
    public:
        CProfitabilityRatio() {} ;

        virtual real GetValue() const    = 0;
        virtual E_RATIO_STATE GetState() = 0;
        
        friend class CEnterprise;
    };
    
    class CQuickRatio : public CLiquidityAndSolvencyRatio
    {
    private:
        real _TurnaroundActives;
        real _Stocks;
        real _ValueAddedTax;
        real _MaxReceivables;
        real _CurrentLiability;
        real _DefferedIncome;
    public:
        CQuickRatio() {} ;
        
        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CCurrentLiquidityRatio : public CLiquidityAndSolvencyRatio
    {
    private:
        real _TurnaroundActives;
        real _MaxReceivables;
        real _CurrentLiability;
        real _DefferedIncome;
    public:
        CCurrentLiquidityRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CCoverageReservesRatio : public CLiquidityAndSolvencyRatio
    {
    private:
        real _TurnaroundActives;
        real _LongTermCommitment;
        real _CurrentLiability;
        real _DefferedIncome;
        real _Loans;
        real _Stocks;
    public:
        CCoverageReservesRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CFinancialDependenceRatio : public CFinancialStabilityRatio
    {
    private:
        real _LongTermCommitment;
        real _CurrentLiability;
        real _DefferedIncome;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
    public:
        CFinancialDependenceRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class COwnFundsAutonomyRatio : public CFinancialStabilityRatio
    {
    private:
        real _DefferedIncome;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _NonCurrentAssets;
        real _TurnaroundActives;
    public:
        COwnFundsAutonomyRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CStocksWorkingCapitalRatio : public CFinancialStabilityRatio
    {
    private:
        real _DefferedIncome;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _NonCurrentAssets;
        real _Stocks;
    public:
        CStocksWorkingCapitalRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CConstantAssetRatio : public CFinancialStabilityRatio
    {
    private:
        real _NonCurrentAssets;
        real _MaxReceivables;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _DefferedIncome;
    public:
        CConstantAssetRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverAssetsRatio : public CBusinessActivityRatio
    {
    private:
        real _RevenueFromSaleOfGoods;
        real _Assets;
    public:
        CTurnoverAssetsRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverAccountsPayableRatio : public CBusinessActivityRatio
    {
    private:
        real _RevenueFromSaleOfGoods;
        real _BusinessExpenses;
        real _ManagementCosts;
        real _Payables;
    public:
        CTurnoverAccountsPayableRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverReceivablesRatio : public CBusinessActivityRatio
    {
    private:
        real _RevenueFromSaleOfGoods;
        real _MaxReceivables;
        real _MinReceivables;
        real _DebtParticipants;
    public:
        CTurnoverReceivablesRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverStocksRatio : public CBusinessActivityRatio
    {
    private:
        real _CostOfGoodSold;
        real _Stocks;
    public:
        CTurnoverStocksRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class COverallProfitabilityRatio : public CProfitabilityRatio
    {
    private:
        real _ProfitBeforeTax;
        real _IncomeTax;
        real _RevenueFromSaleOfGoods;
        real _NonOperatingIncome;
    public:
        COverallProfitabilityRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnAssetsRatio : public CProfitabilityRatio
    {
    private:
        real _NetProfit;
        real _Assets;
    public:
        CReturnOnAssetsRatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CROERatio : public CProfitabilityRatio
    {
    private:
        real _NetProfit;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _DefferedIncome;
    public:
        CROERatio() {} ;

        virtual real GetValue() const;
        virtual E_RATIO_STATE GetState();
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnSalesRatio : public CProfitabilityRatio
    {
    private:
        real _ProfitOnSales;
        real _RevenueFromSaleOfGoods;
    public:
        CReturnOnSalesRatio() {} ;

        virtual real GetValue() const;
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