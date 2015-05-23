#ifndef _MODELS_H_
#define _MODELS_H_

#include "CObserver.hxx"
#include "IlariaTypes.hxx"
#include <QString>

namespace Ilaria
{
    class CModel : public CObserver
    {
    protected:
        real _Value;
    public:
        virtual real GetValue() const;
        virtual QString GetName() = 0;
        virtual QString GetResult() = 0;
    };
    
    class CTFModel : public CModel
    {
    public:
        CTFModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Двухфакторная модель"); };
        virtual QString GetResult();
    };
    
    class CAltmanModel : public CModel
    {
    public:
        CAltmanModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Модель Альтмана"); };
        virtual QString GetResult();
    };
    
    class CTATModel : public CModel
    {
    public:
        CTATModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Модель Тоффлера и Тисшоу"); };
        virtual QString GetResult();
    };
    
    class CRModel : public CModel
    {
    public:
        CRModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Модель R-счёта"); };
        virtual QString GetResult();
    };
    
    class CDAModel : public CModel
    {
    private:
        real _KrizF;
        real _KrizLP;
        real _KrizR;
        real _KrizA;
        
        real _NormF;
        real _NormLP;
        real _NormR;
        real _NormA;
        
        real _Kriz;
        real _Norm;
    public:
        CDAModel() {} ;
        
        real GetKrizF();
        real GetNormF();
        real GetKrizLP();
        real GetNormLP();
        real GetKrizR();
        real GetNormR();
        real GetKrizA();
        real GetNormA();
        
        real GetKriz();
        real GetNorm();
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Модель Дискриминатного анализа"); };
        virtual QString GetResult();
    };
    
    class CZModel : public CModel
    {
    public:
        CZModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Модель Зайцевой"); };
        virtual QString GetResult();
    };
    
    class CRegressionModel : public CModel
    {
    public:
        CRegressionModel() {} ;
        
        virtual void Update(CSubject* ASubject);
        virtual QString GetName() { return QString("Регрессионная модель"); };
        virtual QString GetResult();
    };
};

#endif
