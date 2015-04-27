#include "Ilaria.hxx"

using namespace Ilaria;

int main(int argc, const char * argv[])
{
    CPracticeDecoder* decoder   = new CPracticeDecoder();
    CEnterprise* enterprise     = decoder->LoadResourceFromFile("/Users/andrejstazkin/Documents/IM.xls");
    std::cout << *(enterprise->GetRatioManager());
    return 0;
};