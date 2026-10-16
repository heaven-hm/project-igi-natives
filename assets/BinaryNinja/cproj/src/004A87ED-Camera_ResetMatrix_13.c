#include "gi_platform.h"
#include "004A87ED-Camera_ResetMatrix_13.h"
int32_t Camera_ResetMatrix_13()

{
    int32_t objC;
    int32_t v_8 = objC;
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    *(&v_8 + 2) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    __fnclex();
    return *(&v_8 + 2);
}
