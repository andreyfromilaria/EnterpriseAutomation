#ifndef _WRITERS_H_
#define _WRITERS_H_

#include <QString>

typedef QString fileName;

namespace Ilaria
{
    class CReport;
    class CWriter
    {
    public:
        //virtual bool CanSaveFile(fileName AFileName, CReport* AReport) = 0;
        virtual void SaveFile(fileName AFileName, CReport* AReport) = 0;
    };

    //class CTXTWriter : public CWriter
    //{
    //public:
    //    virtual bool CanSaveFile(fileName AFileName);
        //virtual void SaveFile(fileName AFileName);
    //};

    class CTXTWriter : public CWriter
    {
    public:
        //virtual bool CanSaveFile(fileName AFileName, CReport* AReport);
        virtual void SaveFile(fileName AFileName, CReport* AReport);
    };

    //class CDOCWriter : public CWriter
    //{
    //public:
    //    virtual bool CanSaveFile(fileName AFileName);
        //virtual void SaveFile(fileName AFileName);
    //};
};

#endif
