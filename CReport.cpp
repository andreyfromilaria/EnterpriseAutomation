#include "CReport.h"
#include "Include/CEnterprise.hxx"

namespace Ilaria
{
    CReport::CReport(CEnterprise* AEnterprise)
    {
        _Enterprise = AEnterprise;

        for(int i = 0; i < 15; i++)
        {
            _qmRatios[E_RATIO_ID(i)] = false;
        };

        for (int i = 15; i < 22; i++)
        {
            _qmModels[E_MODEL_ID(i)] = false;
        }
    };

    CReport::~CReport()
    {

    };

    void CReport::ChangeRatioActive(bool AnActive, E_RATIO_ID Id)
    {
        _qmRatios[Id] = AnActive;
    };

    void CReport::ChangeModelActive(bool AnActive, E_MODEL_ID Id)
    {
        _qmModels[Id] = AnActive;
    };
};
