#ifndef _MODEL_MANAGER_H_
#define _MODEL_MANAGER_H_

#include "Models.hxx"
#include <map>

namespace Ilaria
{
    class CModelManager
    {
    private:
        std::map<E_MODEL_ID, CModel*> _mModels;
    public:
        CModelManager();
        ~CModelManager();
        
        CModel* GetModelById(E_MODEL_ID Id);
        std::map<E_MODEL_ID, CModel*> GetModels();
    };
};

#endif