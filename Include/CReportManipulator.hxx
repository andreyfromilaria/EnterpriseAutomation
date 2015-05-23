#ifndef _REPORT_MANIPULATOR_H_
#define _REPORT_MANIPULATOR_H_

#include <map>

namespace Ilaria
{
    class CWriter;
    class CEnterprise;
    class CReportManipulator
    {
    private:
        std::map<bool, CWriter*> _mWriters;
    public:
        CReportManipulator();
        ~CReportManipulator();

        bool WriteReportToTXT(CEnterprise* AEnterprise);
        bool WriteReportToDOC(CEnterprise* AEnterprise);
        bool WriteReportToPDF(CEnterprise* AEnterprise);
    };
};

#endif
