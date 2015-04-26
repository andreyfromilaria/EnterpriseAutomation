#include "CEnterprise.hxx"
#include "CObserver.hxx"

namespace Ilaria
{
    void CEnterprise::Notify()
    {
        for (std::vector<CObserver*>::iterator i = _vObservers.begin(); i != _vObservers.end(); i++)
        {
            (*i)->Update(this);
        };
    };
    
    CEnterprise::~CEnterprise()
    {
        if (_pRatioManager)
            delete _pRatioManager;
        
        if (_pModelManager)
            delete _pModelManager;
    };
    
    CEnterprise::CEnterprise()
    {
        _pRatioManager = new CRatioManager();
        _pModelManager = new CModelManager();
        
        for (auto ratio : _pRatioManager->GetRatios())
            this->AddObserver(ratio.second);
            
        for (auto model : _pModelManager->GetModels())
            this->AddObserver(model.second);
    };
    
    CEnterprise::CEnterprise(CRatioManager* ARatioManager, CModelManager* AModelManager)
    {
        _pRatioManager = ARatioManager;
        _pModelManager = AModelManager;
        
        for (auto ratio : _pRatioManager->GetRatios())
             this->AddObserver(ratio.second);
        
        for (auto model : _pModelManager->GetModels())
            this->AddObserver(model.second);
    };
    
    CRatioManager* CEnterprise::GetRatioManager() const
    {
        return _pRatioManager;
    };
    
    CModelManager* CEnterprise::GetModelManager() const
    {
        return _pModelManager;
    };
    
    real CEnterprise::GetTurnaroundActives() const
    {
        return _TurnaroundActives;
    };
    
    real CEnterprise::GetStocks() const
    {
        return _Stocks;
    };
    
    real CEnterprise::GetValueAddedTax() const
    {
        return _ValueAddedTax;
    };
    
    real CEnterprise::GetReceivables() const
    {
        return _Receivables;
    };
    
    real CEnterprise::GetMaxReceivables() const
    {
        return _MaxReceivables;
    };
    
    real CEnterprise::GetMinReceivables() const
    {
        return _MinReceivables;
    };
    
    real CEnterprise::GetCurrentLiability() const
    {
        return _CurrentLiability;
    };
    
    real CEnterprise::GetDefferedIncome() const
    {
        return _DefferedIncome;
    };
    
    real CEnterprise::GetLongTermCommitment() const
    {
        return _LongTermCommitment;
    };
    
    real CEnterprise::GetLoans() const
    {
        return _Loans;
    };
    
    real CEnterprise::GetCapitalAndReserves() const
    {
        return _CapitalAndReserves;
    };
    
    real CEnterprise::GetTargetFinancingAndReceipts() const
    {
        return _TargetFinancingAndReceipts;
    };
    
    real CEnterprise::GetNonCurrentAssets() const
    {
        return _NonCurrentAssets;
    };
    
    real CEnterprise::GetCurrentAssets() const
    {
        return _CurrentAssets;
    };
    
    real CEnterprise::GetRevenueFromSaleOfGoods() const
    {
        return _RevenueFromSaleOfGoods;
    };
    
    real CEnterprise::GetBusinessExpenses() const
    {
        return _BusinessExpenses;
    };
    
    real CEnterprise::GetAssets() const
    {
        return _Assets;
    };
    
    real CEnterprise::GetManagementCosts() const
    {
        return _ManagementCosts;
    };
    
    real CEnterprise::GetPayables() const
    {
        return _Payables;
    };
    
    real CEnterprise::GetDebtParticipants() const
    {
        return _DebtParticipants;
    };
    
    real CEnterprise::GetCostOfGoodSold() const
    {
        return _CostOfGoodSold;
    };
    
    real CEnterprise::GetProfitBeforeTax() const
    {
        return _ProfitBeforeTax;
    };
    
    real CEnterprise::GetIncomeTax() const
    {
        return _IncomeTax;
    };
    
    real CEnterprise::GetNonOperatingIncome() const
    {
        return _NonOperatingIncome;
    };
    
    real CEnterprise::GetNetProfit() const
    {
        return _NetProfit;
    };
    
    real CEnterprise::GetUncoveredLoss() const
    {
        return _UncoveredLoss;
    };
    
    real CEnterprise::GetTotalAssets() const
    {
        return _TotalAssets;
    };
    
    real CEnterprise::GetBorrowings() const
    {
        return _Borrowings;
    };
    
    real CEnterprise::GetTotalLiabilities() const
    {
        return _TotalLiabilities;
    };
    
    real CEnterprise::GetNetWorkingCapital() const
    {
        return _NetWorkingCapital;
    };
    
    real CEnterprise::GetInterestPayable() const
    {
        return _InterestPayable;
    };
    
    real CEnterprise::GetMarketValueOfEquity() const
    {
        return _MarketValueOfEquity;
    };
    
    real CEnterprise::GetCostTotalDebt() const
    {
        return _CostTotalDebt;
    };
    
    real CEnterprise::GetTangibleAssets() const
    {
        return _TangibleAssets;
    };
    
    real CEnterprise::GetShortTermliabilities() const
    {
        return _ShortTermliabilities;
    };
    
    real CEnterprise::GetOperatingAssets() const
    {
        return _OperatingAssets;
    };
    
    real CEnterprise::GetOperatingExpenses() const
    {
        return _OperatingExpenses;
    };
    
    real CEnterprise::GetNetProfitOfTheReportingPeriod() const
    {
        return _NetProfitOfTheReportingPeriod;
    };
    
    real CEnterprise::GetEquity() const
    {
        return _Equity;
    };
    
    real CEnterprise::GetMostLiqilineAssets() const
    {
        return _MostLiqilineAssets;
    };
    
    real CEnterprise::GetNetLoss() const
    {
        return _NetLoss;
    };
    
    real CEnterprise::GetSales() const
    {
        return _Sales;
    };
    
    real CEnterprise::GetprofitOnSales() const
    {
        return _ProfitOnSales;
    };
    
    real CEnterprise::GetCostOfProductionAndSales() const
    {
        return _CostOfProductionAndSales;
    };
    
    real CEnterprise::GetAssetsPreviousYear() const
    {
        return _AssetsPreviousYear;
    };
    
    real CEnterprise::GetRevenueFromSaleOfGoodsPreviousYear() const
    {
        return _RevenueFromSaleOfGoodsPreviousYear;
    };
    
    void CEnterprise::SetAssetsPreviousYear(const real& AValue)
    {
        _AssetsPreviousYear = AValue;
    };
    
    void CEnterprise::SetRevenueFromSaleOfGoodsPreviousYear(const real& AValue)
    {
        _RevenueFromSaleOfGoodsPreviousYear = AValue;
    };
    
    void CEnterprise::SetCostOfProductionAndSales(const real& AValue)
    {
        _CostOfProductionAndSales = AValue;
    };

    void CEnterprise::SetTurnaroundActives(const real& AValue)
    {
        _TurnaroundActives = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetStocks(const real& AValue)
    {
        _Stocks = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetValueAddedTax(const real& AValue)
    {
        _ValueAddedTax = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetReceivables(const real& AValue)
    {
        _Receivables = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetMaxReceivables(const real& AValue)
    {
        _MaxReceivables = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetMinReceivables(const real& AValue)
    {
        _MinReceivables = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetCurrentLiability(const real& AValue)
    {
        _CurrentLiability = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetDefferedIncome(const real& AValue)
    {
        _DefferedIncome = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetLongTermCommitment(const real& AValue)
    {
        _LongTermCommitment = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetLoans(const real& AValue)
    {
        _Loans = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetCapitalAndReserves(const real& AValue)
    {
        _CapitalAndReserves = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetTargetFinancingAndReceipts(const real& AValue)
    {
        _TargetFinancingAndReceipts = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNonCurrentAssets(const real& AValue)
    {
        _NonCurrentAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetCurrentAssets(const real& AValue)
    {
        _CurrentAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetRevenueFromSaleOfGoods(const real& AValue)
    {
        _RevenueFromSaleOfGoods = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetBusinessExpenses(const real& AValue)
    {
        _BusinessExpenses = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetAssets(const real& AValue)
    {
        _Assets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetManagementCosts(const real& AValue)
    {
        _ManagementCosts = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetPayables(const real& AValue)
    {
        _Payables = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetDebtParticipants(const real& AValue)
    {
        _DebtParticipants = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetCostOfGoodSold(const real& AValue)
    {
        _CostOfGoodSold = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetProfitBeforeTax(const real& AValue)
    {
        _ProfitBeforeTax = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetIncomeTax(const real& AValue)
    {
        _IncomeTax = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNonOperatingIncome(const real& AValue)
    {
        _NonOperatingIncome = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNetProfit(const real& AValue)
    {
        _NetProfit = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetUncoveredLoss(const real& AValue)
    {
        _UncoveredLoss = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetTotalAssets(const real& AValue)
    {
        _TotalAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetBorrowings(const real& AValue)
    {
        _Borrowings = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetTotalLiabilities(const real& AValue)
    {
        _TotalLiabilities = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNetWorkingCapital(const real& AValue)
    {
        _NetWorkingCapital = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetInterestPayable(const real& AValue)
    {
        _InterestPayable = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetMarketValueOfEquity(const real& AValue)
    {
        _MarketValueOfEquity = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetCostTotalDebt(const real& AValue)
    {
        _CostTotalDebt = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetTangibleAssets(const real& AValue)
    {
        _TangibleAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetShortTermliabilities(const real& AValue)
    {
        _ShortTermliabilities = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetOperatingAssets(const real& AValue)
    {
        _OperatingAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetOperatingExpenses(const real& AValue)
    {
        _OperatingExpenses = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNetProfitOfTheReportingPeriod(const real& AValue)
    {
        _NetProfitOfTheReportingPeriod = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetEquity(const real& AValue)
    {
        _Equity = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetMostLiqilineAssets(const real& AValue)
    {
        _MostLiqilineAssets = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetNetLoss(const real& AValue)
    {
        _NetLoss = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetSales(const real& AValue)
    {
        _Sales = AValue;
        this->Notify();
    };
    
    void CEnterprise::SetProfitOnSales(const real& AValue)
    {
        _ProfitOnSales = AValue;
        this->Notify();
    };
};