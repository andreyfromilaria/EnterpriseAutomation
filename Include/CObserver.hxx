#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "CSubject.hxx"

namespace Ilaria
{
    class CObserver
    {
    private:
        CSubject* _pSubject;
    public:
        CObserver() {} ;
        
        CObserver(CSubject* ASubject) : _pSubject(ASubject) {} ;
        CSubject* GetSubject() { return _pSubject; } ;
        virtual void Update(CSubject* ASubject) = 0;
    };
};

#endif