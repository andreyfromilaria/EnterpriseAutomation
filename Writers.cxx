#include "Writers.hxx"
#include <QFile>
#include "CReport.h"
#include "Include/CEnterprise.hxx"
#include <QDebug>

//int EXT_LENGTH = 3;

namespace Ilaria
{
    //bool CTXTWriter::CanSaveFile(fileName AFileName)
    //{
        //fileName FileName = AFileName.substr(AFileName.length() - EXT_LENGTH, EXT_LENGTH);
        //const char* ext = FileName.c_str();
        //return (strcmp(ext, "txt") == 0);
     //   return true;
    //};

    void CTXTWriter::SaveFile(fileName AFileName, CReport* AReport)
    {
        QMap<E_RATIO_ID, bool> ratios = AReport->GetRatios();
        QMap<E_MODEL_ID, bool> models = AReport->GetModels();

        CEnterprise* enterprise = AReport->GetEnterprise();

        QFile* file = new QFile(AFileName);

        if (file->open(QIODevice::WriteOnly | QIODevice::Text))
        {
            for (int i = 0; i < ratios.count(); i++)
            {
                if (ratios[E_RATIO_ID(i)] == true)
                {
                    QByteArray arr;
                    arr.append(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetLongRatioName() + " ");
                    arr.append(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetShortRatioName() + " = ");
                    arr.append(QString::number(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetValue()) + "\n\n");
                    file->write(arr);
                }
            }
            int c = 0;
            for (int i = 15; i < 22; i++)
            {

                if (models[E_MODEL_ID(i)])
                {
                    c++;
                    QByteArray arr;
                    arr.append(enterprise->GetModelManager()->GetModelById(E_MODEL_ID(i))->GetName() + ": \n");
                    arr.append(enterprise->GetModelManager()->GetModelById(E_MODEL_ID(i))->GetResult() + "\n\n");
                    file->write(arr);
                }
            }
            qDebug() << QString("failnot ") << QString::number(c);
        }
        else
        {
            qDebug() << QString("fail");
        }

        file->close();
    };

    //bool CDOCWriter::CanSaveFile(fileName AFileName)
    //{
    //    return true;
    //};

    //void CDOCWriter::SaveFile(fileName AFileName)
    //{
    //    AFileName;
    //};
};
