#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <vector>

namespace Ilaria
{
    class CObserver;
    class CSubject
    {
        private:
            std::vector<CObserver*> _vObservers;
        public:
            void Notify();
            void AddObserver(CObserver* AnObserver);
    };
};

#endif