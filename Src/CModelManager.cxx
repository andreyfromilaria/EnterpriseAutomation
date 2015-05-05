#include "Include/CModelManager.hxx"

namespace Ilaria
{
    CModelManager::CModelManager()
    {
        _mModels[EMI_TF]         = new CTFModel();
        _mModels[EMI_ALTMAN]     = new CAltmanModel();
        _mModels[EMI_TAT]        = new CTATModel();
        _mModels[EMI_R]          = new CRModel();
        _mModels[EMI_DA]         = new CDAModel();
        _mModels[EMI_Z]          = new CZModel();
        _mModels[EMI_REGRESSION] = new CRegressionModel();
    };
    
    CModelManager::~CModelManager()
    {
        _mModels.clear();
    };
    
    CModel* CModelManager::GetModelById(E_MODEL_ID Id)
    {
        return _mModels[Id];
    };
    
    std::map<E_MODEL_ID, CModel*> CModelManager::GetModels()
    {
        return _mModels;
    };
};
