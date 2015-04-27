#ifndef _PRACTICE_DECODER_H_
#define _PRACTICE_DECODER_H_

#include <string>

namespace Ilaria
{
    class CEnterprise;
    class CPracticeDecoder
    {
    public:
        bool CanLoadResourceFromFile(const std::string& AFileName);
        CEnterprise* LoadResourceFromFile(const std::string& AFileName);
    };
};

#endif