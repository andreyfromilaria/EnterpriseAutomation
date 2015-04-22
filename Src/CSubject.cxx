#include "CObserver.hxx"

namespace Ilaria
{
    void CSubject::Notify()
    {
        for (std::vector<CObserver*>::iterator i = _vObservers.begin(); i != _vObservers.end(); i++)
        {
            (*i)->Update();
        };
    };
    
    void CSubject::AddObserver(CObserver* AnObserver)
    {
        _vObservers.push_back(AnObserver);
    };
};