#ifndef _REPORT_H_
#define _REPORT_H_

#include "Include/IlariaTypes.hxx"
#include <QMap>

namespace Ilaria
{
    class CEnterprise;
    class CReport
    {
    private:
        CEnterprise* _Enterprise;

        QMap<E_RATIO_ID, bool> _qmRatios;
        QMap<E_MODEL_ID, bool> _qmModels;
    public:
        explicit CReport(CEnterprise* AEnterprise);
        ~CReport();

        void ChangeRatioActive(bool AnActive, E_RATIO_ID Id);
        void ChangeModelActive(bool AnActive, E_MODEL_ID Id);

        QMap<E_RATIO_ID, bool> GetRatios() { return _qmRatios; }
        QMap<E_MODEL_ID, bool> GetModels() { return _qmModels; }

        CEnterprise* GetEnterprise() { return _Enterprise; }
    };
};

#endif // CREPORT_H
