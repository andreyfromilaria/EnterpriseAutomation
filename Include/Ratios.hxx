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
    private:
        real _TurnaroundActives;
        real _Stocks;
        real _ValueAddedTax;
        real _Receivables;
        real _CurrentLiability;
        real _DefferedIncome;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
        
        friend class CEnterprise;
    };
    
    class CCurrentLiquidityRatio : public CLiquidityAndSolvencyRatio
    {
    private:
        real _TurnaroundActives;
        real _Receivables;
        real _CurrentLiability;
        real _DefferedIncome;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CConstantAssetRatio : public CFinancialStabilityRatio
    {
    private:
        real _NonCurrentAssets;
        real _Receivables;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _DefferedIncome;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverAssetsRatio : public CBusinessActivityRatio
    {
    private:
        real _RevenueFromSaleOfGoods;
        real _Assets;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CTurnoverStocksRatio : public CBusinessActivityRatio
    {
    private:
        real _CostOfGoodSold;
        real _Stocks;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnAssetsRatio : public CProfitabilityRatio
    {
    private:
        real _NetProfit;
        real _Assets;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
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
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
    
    class CReturnOnSalesRatio : public CProfitabilityRatio
    {
    private:
        real _ProfitOnSales;
        real _RevenueFromSaleOfGoods;
    public:
        virtual real GetValue()          = 0;
        virtual E_RATIO_STATE GetState() = 0;
        virtual void Update(CSubject* ASubject);
    
        friend class CEnterprise;
    };
};

#endif