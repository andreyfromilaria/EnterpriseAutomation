#include "CObserver.hxx"

namespace Ilaria
{
    void CSubject::AddObserver(CObserver* AnObserver)
    {
        _vObservers.push_back(AnObserver);
    };
};