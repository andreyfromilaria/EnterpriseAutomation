#ifndef _MODELS_H_
#define _MODELS_H_

#include "CObserver.hxx"
#include "IlariaTypes.hxx"

namespace Ilaria
{
    class CModel : public CObserver
    {
    protected:
        real _Value;
    public:
        virtual real GetValue() const;
    };
    
    class CTFModel : public CModel
    {
    public:
        CTFModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CAltmanModel : public CModel
    {
    public:
        CAltmanModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CTATModel : public CModel
    {
    public:
        CTATModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CRModel : public CModel
    {
    public:
        CRModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CDAModel : public CModel
    {
    public:
        CDAModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CZModel : public CModel
    {
    public:
        CZModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
    
    class CRegressionModel : public CModel
    {
    public:
        CRegressionModel() {} ;
        
        virtual void Update(CSubject* ASubject);
    };
};

#endif