#ifndef _RATIO_MANAGER_H_
#define _RATIO_MANAGER_H_

#include "Ratios.hxx"
#include <map>

namespace Ilaria
{
    class CRatioManager
    {
    private:
        std::map<E_RATIO_ID, CRatio*> _mRatios;
        
        void _Init();
    public:
        CRatioManager();
        ~CRatioManager();
        CRatio* GetRatioById(E_RATIO_ID Id);
        
        std::map<E_RATIO_ID, CRatio*> GetRatios() const;
        
        friend std::ostream& operator << (std::ostream& out, CRatioManager manager);
    };
};

#endif