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
        
        real turnaroundActives  = worksheet->Cell(22, 3)->GetInteger();
        real stocks             = worksheet->Cell(16, 3)->GetInteger();
        real valueAddedTax      = worksheet->Cell(17, 3)->GetInteger();
        real receivables        = worksheet->Cell(18, 3)->GetInteger();
        real currentLiability   = worksheet->Cell(45, 3)->GetInteger();
        real defferedIncome     = worksheet->Cell(42, 3)->GetInteger();
        real longTermCommitment = worksheet->Cell(38, 3)->GetInteger();
        real loans              = worksheet->Cell(34, 3)->GetInteger();
        real capitalAndReserves = worksheet->Cell(32, 3)->GetInteger();
        //real targetFinancingAndReceipts;
        real nonCurrentAssets   = worksheet->Cell(14, 3)->GetInteger();
        //real currentAssets;
        real revenueFromSaleOfGoods = worksheet->Cell(50, 3)->GetInteger();
        real businessExpenses   = worksheet->Cell(53, 3)->GetInteger();
        real assets             = worksheet->Cell(23, 3)->GetInteger();
        real managementCosts    = worksheet->Cell(54, 3)->GetInteger();
        real payables           = worksheet->Cell(41, 3)->GetInteger();
        //real debtParticipants;
        real costOfGoodSold     = worksheet->Cell(51, 3)->GetInteger();
        real profitBeforeTax    = worksheet->Cell(61, 3)->GetInteger();
        real incomeTax          = worksheet->Cell(62, 3)->GetInteger();
        real nonOperatingIncome = worksheet->Cell(59, 3)->GetInteger();
        real netProfit          = worksheet->Cell(67, 3)->GetInteger();
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
        real profitOnSales      = worksheet->Cell(55, 3)->GetInteger();
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
