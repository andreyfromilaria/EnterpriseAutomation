#ifndef _ENTERPRISE_H_
#define _ENTERPRISE_H_

#include "CSubject.hxx"
#include "IlariaTypes.hxx"

namespace Ilaria
{
    class CEnterprise : public CSubject
    {
    private:
        real _TurnaroundActives;
        real _Stocks;
        real _ValueAddedTax;
        real _Receivables;
        real _CurrentLiability;
        real _DefferedIncome;
        real _LongTermCommitment;
        real _Loans;
        real _CapitalAndReserves;
        real _TargetFinancingAndReceipts;
        real _NonCurrentAssets;
        real _CurrentAssets;
        real _RevenueFromSaleOfGoods;
        real _BusinessExpenses;
        real _Assets;
        real _ManagementCosts;
        real _Payables;
        real _DebtParticipants;
        real _CostOfGoodSold;
        real _ProfitBeforeTax;
        real _IncomeTax;
        real _NonOperatingIncome;
        real _NetProfit;
        real _UncoveredLoss;
        real _TotalAssets;
        real _Borrowings;
        real _TotalLiabilities;
        real _NetWorkingCapital;
        real _InterestPayable;
        real _MarketValueOfEquity;
        real _CostTotalDebt;
        real _TangibleAssets;
        real _ShortTermliabilities;
        real _OperatingAssets;
        real _OperatingExpenses;
        real _NetProfitOfTheReportingPeriod;
        real _Equity;
        real _MostLiqilineAssets;
        real _NetLoss;
        real _Sales;
        real _ProfitOnSales;
    public:
        real GetTurnaroundActives();
        real GetStocks();
        real GetValueAddedTax();
        real GetReceivables();
        real GetCurrentLiability();
        real GetDefferedIncome();
        real GetLongTermCommitment();
        real GetLoans();
        real GetCapitalAndReserves();
        real GetTargetFinancingAndReceipts();
        real GetNonCurrentAssets();
        real GetCurrentAssets();
        real GetRevenueFromSaleOfGoods();
        real GetBusinessExpenses();
        real GetAssets();
        real GetManagementCosts();
        real GetPayables();
        real GetDebtParticipants();
        real GetCostOfGoodSold();
        real GetProfitBeforeTax();
        real GetIncomeTax();
        real GetNonOperatingIncome();
        real GetNetProfit();
        real GetUncoveredLoss();
        real GetTotalAssets();
        real GetBorrowings();
        real GetTotalLiabilities();
        real GetNetWorkingCapital();
        real GetInterestPayable();
        real GetMarketValueOfEquity();
        real GetCostTotalDebt();
        real GetTangibleAssets();
        real GetShortTermliabilities();
        real GetOperatingAssets();
        real GetOperatingExpenses();
        real GetNetProfitOfTheReportingPeriod();
        real GetEquity();
        real GetMostLiqilineAssets();
        real GetNetLoss();
        real GetSales();
        real GetprofitOnSales();

        void SetTurnaroundActives(const real& AValue);
        void SetStocks(const real& AValue);
        void SetValueAddedTax(const real& AValue);
        void SetReceivables(const real& AValue);
        void SetCurrentLiability(const real& AValue);
        void SetDefferedIncome(const real& AValue);
        void SetLongTermCommitment(const real& AValue);
        void SetLoans(const real& AValue);
        void SetCapitalAndReserves(const real& AValue);
        void SetTargetFinancingAndReceipts(const real& AValue);
        void SetNonCurrentAssets(const real& AValue);
        void SetCurrentAssets(const real& AValue);
        void SetRevenueFromSaleOfGoods(const real& AValue);
        void SetBusinessExpenses(const real& AValue);
        void SetAssets(const real& AValue);
        void SetManagementCosts(const real& AValue);
        void SetPayables(const real& AValue);
        void SetDebtParticipants(const real& AValue);
        void SetCostOfGoodSold(const real& AValue);
        void SetProfitBeforeTax(const real& AValue);
        void SetIncomeTax(const real& AValue);
        void SetNonOperatingIncome(const real& AValue);
        void SetNetProfit(const real& AValue);
        void SetUncoveredLoss(const real& AValue);
        void SetTotalAssets(const real& AValue);
        void SetBorrowings(const real& AValue);
        void SetTotalLiabilities(const real& AValue);
        void SetNetWorkingCapital(const real& AValue);
        void SetInterestPayable(const real& AValue);
        void SetMarketValueOfEquity(const real& AValue);
        void SetCostTotalDebt(const real& AValue);
        void SetTangibleAssets(const real& AValue);
        void SetShortTermliabilities(const real& AValue);
        void SetOperatingAssets(const real& AValue);
        void SetOperatingExpenses(const real& AValue);
        void SetNetProfitOfTheReportingPeriod(const real& AValue);
        void SetEquity(const real& AValue);
        void SetMostLiqilineAssets(const real& AValue);
        void SetNetLoss(const real& AValue);
        void SetSales(const real& AValue);
        void SetProfitOnSales(const real& AValue);
    };
};

#endif