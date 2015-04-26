#ifndef _ILARIA_TYPES_H_
#define _ILARIA_TYPES_H_

namespace Ilaria
{
    typedef float real;
    
    enum E_RATIO_STATE
    {
        ERS_VERY_LOW    = 0,
        ERS_LOW         = 1,
        ERS_MIDDLE      = 2,
        ERS_HIGH        = 3,
        ERS_VERY_HIGH   = 4,
    };
    
    enum E_RATIO_ID
    {
        ERI_L1 = 0,
        ERI_P1 = 1,
        ERI_L3 = 2,
        ERI_F1 = 3,
        ERI_F2 = 4,
        ERI_F3 = 5,
        ERI_F4 = 6,
        ERI_A2 = 7,
        ERI_A4 = 8,
        ERI_A5 = 9,
        ERI_A6 = 10,
        ERI_R1 = 11,
        ERI_R2 = 12,
        ERI_R3 = 13,
        ERI_R4 = 14
    };
    
    enum E_MODEL_ID
    {
        EMI_TF          = 15,
        EMI_ALTMAN      = 16,
        EMI_TAT         = 17,
        EMI_R           = 18,
        EMI_DA          = 19,
        EMI_Z           = 20,
        EMI_REGRESSION  = 21
    };
};

#endif