#include "Ilaria.hxx"

using namespace Ilaria;

const int ROWS      = 10;
const int COLUMNS   = 10;

void NiceExample(std::string AFileName)
{
    // Создаём новый excel
    CExcel* excel                = new CExcel();
    
    // Добавляем новый лист
    excel->New(1);
    
    // Создаём класс листа для работы в нём
    CExcelWorksheet* worksheet   = excel->GetWorksheet(0);
    
    // Создаём менеджер для работы с нашим excel
    CExcelFormatManager* manager = new CExcelFormatManager(*excel);
    
    // Переменна для цвета
    int color = 0;
    
    // Строка, которая будет печататься в документ
    std::string str = "I love KOCTEHKO ))0))00)";
    
    for (int i = 0; i < 8; i++)
    {
        // Меняем цвет
        color++;
        
        // Меняем (увеличиваем) высоту
        int height = 100 * color;
        
        // Создаём шрифт
        TExcelFont* font = new TExcelFont();
        
        // Ставим параметры шрифта (цвет, высота, имя)
        font->SetColorIndex(color);
        font->SetHeight(height);
        font->SetFontName(L"Times New Roman");
        
        // Создаём формат ячейки
        TCellFormat* format = new TCellFormat(*manager, *font);
        
        // Ставим ей фон
        format->SetBackground(MAKE_COLOR2(EGA_MAGENTA, 0));
        
        // Получаем из нашего листа нужную ячейку
        CExcelCell* cell = worksheet->Cell(i, 0);
        
        // Ставим ей текст
        cell->Set(str.c_str());
        
        // Ставим формат
        cell->SetFormat(*format);
        
        delete font;
        delete format;
    }
    
    // Сохраняем всё, что мы сделали, в файл
    excel->SaveAs(AFileName.c_str());
    
    delete manager;
    delete worksheet;
}

void LiteExample(std::string AFileName)
{
    CExcel* excel                = new CExcel();
    
    excel->New(1);
    
    CExcelWorksheet* worksheet   = excel->GetWorksheet(0);
    CExcelFormatManager* manager = new CExcelFormatManager(*excel);
    TExcelFont* fontBold         = new TExcelFont();
    TCellFormat* formatBold      = new TCellFormat(*manager);
    
    fontBold->SetWeight(700);
    formatBold->SetFont(*fontBold);
    
    int row = 0;
    
    for (int col = 0; col < COLUMNS; col++)
    {
        CExcelCell* cell = worksheet->Cell(row, col);
        
        cell->Set("Text");
        cell->SetFormat(*formatBold);
    }
    
    while (++row < ROWS)
      for (int i = 0; i < COLUMNS; i++)
        worksheet->Cell(row, i)->Set("Azaza");
    
    ++row;
    
    TExcelFont* fontRedBold = new TExcelFont();
    
    fontRedBold->SetWeight(700);
    fontRedBold->SetColorIndex(EGA_YELLOW);
    
    TCellFormat* formatRedBold = new TCellFormat(*manager, *fontRedBold);
    
    formatRedBold->SetColorFirst(COLOR1_PAT_SOLID);
    formatRedBold->SetColorSecond(MAKE_COLOR2(EGA_GREEN, 0));
    
    TCellFormat* formatGreen = new TCellFormat(*manager, TExcelFont().SetColorIndex(EGA_CYAN));
    
    for (int col = 0; col < COLUMNS; col++)
    {
        CExcelCell* cell = worksheet->Cell(row, col);
        
        cell->Set("xxx");
        cell->SetFormat(*formatRedBold);
        
        cell = worksheet->Cell(row, ++col);
        cell->Set("yyy");
        cell->SetFormat(*formatGreen);
    }
    
    excel->SaveAs(AFileName.c_str());
    
    delete manager;
    delete fontBold;
    delete worksheet;
    delete formatBold;
    delete formatGreen;
    delete fontRedBold;
    delete formatRedBold;
}

int main(int argc, const char * argv[])
{
    CEnterprise* enterprise = new CEnterprise();
    
    CRatio* ratio = enterprise->GetRatioManager()->GetRatioById(ERI_L1);
    
    std::cout << ratio->GetValue() << std::endl;
    
    enterprise->SetTurnaroundActives(200);
    enterprise->SetValueAddedTax(2387);
    enterprise->SetMaxReceivables(23987);
    enterprise->SetCurrentLiability(448);
    enterprise->SetDefferedIncome(284);
    
    std::cout << ratio->GetValue() << std::endl;
    
    enterprise->SetTurnaroundActives(203450);
    enterprise->SetValueAddedTax(23234587);
    enterprise->SetMaxReceivables(23235987);
    enterprise->SetCurrentLiability(4423458);
    enterprise->SetDefferedIncome(283454);
    
    std::cout << ratio->GetValue() << std::endl;
    
    return 0;
}