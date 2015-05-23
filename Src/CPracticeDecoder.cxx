#include "Include/CPracticeDecoder.hxx"
#include "Include/CEnterprise.hxx"
#include "Include/ExcelFormat.hxx"

const int EXT_LENGTH = 3;

namespace Ilaria
{
    bool CPracticeDecoder::CanLoadResourceFromFile(const std::string& AFileName)
    {
        std::string FileName = AFileName.substr(AFileName.length() - EXT_LENGTH, EXT_LENGTH);
        const char* ext = FileName.c_str();
        return (strcmp(ext, "xls") == 0);
    };
    
    CEnterprise* CPracticeDecoder::LoadResourceFromFile(const std::string &AFileName)
    {
        CEnterprise* enterprise = new CEnterprise();
        CExcel*      excel      = new CExcel();
        
        excel->Load(AFileName.c_str());
        
        CExcelWorksheet* worksheet = excel->GetWorksheet(0);
        
        int i = 3;

        real turnaroundActives  = worksheet->Cell(24, i)->GetInteger();
        real stocks             = worksheet->Cell(16, i)->GetInteger();
        real valueAddedTax      = worksheet->Cell(17, i)->GetInteger();
        real receivables        = worksheet->Cell(18, i)->GetInteger();
        real currentLiability   = worksheet->Cell(51, i)->GetInteger();
        real defferedIncome     = worksheet->Cell(46, i)->GetInteger();
        real longTermCommitment = worksheet->Cell(42, i)->GetInteger();
        real loans              = worksheet->Cell(38, i)->GetInteger();
        real capitalAndReserves = worksheet->Cell(36, i)->GetInteger();
        //real targetFinancingAndReceipts;
        real nonCurrentAssets   = worksheet->Cell(14, i)->GetInteger();
        //real currentAssets;
        real revenueFromSaleOfGoods = worksheet->Cell(57, i)->GetInteger();
        real businessExpenses   = worksheet->Cell(60, i)->GetInteger();
        real assets             = worksheet->Cell(25, i)->GetInteger();
        real managementCosts    = worksheet->Cell(61, i)->GetInteger();
        real payables           = worksheet->Cell(45, i)->GetInteger();
        //real debtParticipants;
        real costOfGoodSold     = worksheet->Cell(58, i)->GetInteger();
        real profitBeforeTax    = worksheet->Cell(64, i)->GetInteger();
        real incomeTax          = worksheet->Cell(73, i)->GetInteger();
        real nonOperatingIncome = worksheet->Cell(71, i)->GetInteger();
        real netProfit          = worksheet->Cell(79, i)->GetInteger();
        //real uncoveredLoss;
        //real totalAssets;
        //real borrowings;
        //real totalLiabilities;
        //real netWorkingCapital;
        //real interestPayable;
        //real marketValueOfEquity;
        //real costTotalDebt;
        //real tangibleAssets;
        //real shortTermliabilities;
        //real operatingAssets;
        //real operatingExpenses;
        //real netProfitOfTheReportingPeriod;
        //real equity;
        //real mostLiqilineAssets;
        //real netLoss;
        //real sales;
        real profitOnSales      = worksheet->Cell(63, i)->GetInteger();
        //real costOfProductionAndSales;
        //real assetsPreviousYear;
        //real revenueFromSaleOfGoodsPreviousYear;

        
        enterprise->SetTurnaroundActives(turnaroundActives);
        enterprise->SetStocks(stocks);
        enterprise->SetValueAddedTax(valueAddedTax);
        enterprise->SetReceivables(receivables);
        enterprise->SetCurrentLiability(currentLiability);
        enterprise->SetDefferedIncome(defferedIncome);
        enterprise->SetLongTermCommitment(longTermCommitment);
        enterprise->SetLoans(loans);
        enterprise->SetCapitalAndReserves(capitalAndReserves);
        
        enterprise->SetNonCurrentAssets(nonCurrentAssets);
        
        enterprise->SetRevenueFromSaleOfGoods(revenueFromSaleOfGoods);
        enterprise->SetBusinessExpenses(businessExpenses);
        enterprise->SetAssets(assets);
        enterprise->SetManagementCosts(managementCosts);
        enterprise->SetPayables(payables);
        
        enterprise->SetCostOfGoodSold(costOfGoodSold);
        enterprise->SetProfitBeforeTax(profitBeforeTax);
        enterprise->SetIncomeTax(incomeTax);
        enterprise->SetNonOperatingIncome(nonOperatingIncome);
        enterprise->SetNetProfit(netProfit);
        
        enterprise->SetProfitOnSales(profitOnSales);
        
        return enterprise;
    };
};
