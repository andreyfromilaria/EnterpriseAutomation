#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <vector>

namespace Ilaria
{
    class CObserver;
    class CSubject
    {
    protected:
        std::vector<CObserver*> _vObservers;
    public:
        virtual void Notify() = 0;
        virtual void AddObserver(CObserver* AnObserver);
    };
};

#endif