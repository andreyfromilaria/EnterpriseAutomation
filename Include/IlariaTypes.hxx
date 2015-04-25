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
    
    E_RATIO_STATE GetState(real ARatio, real AFirst, real ASecond, real AThird, real AFourth, real AFifth, real ASixth)
    {
        if (ARatio < ASecond)
            return ERS_VERY_LOW;
        else if (ARatio >= ASecond && ARatio < AThird)
            return ERS_LOW;
        else if (ARatio >= AThird && ARatio < AFourth)
            return ERS_MIDDLE;
        else if (ARatio >= AFourth && ARatio < AFifth)
            return ERS_HIGH;
        
        return ERS_VERY_HIGH;
    };
};

#endif