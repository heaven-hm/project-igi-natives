#include "004A87ED-Camera_ResetMatrix_13.h"
/* 0x004a87ed Camera_ResetMatrix_13 full linked: callers=1 callees=0 */
int32_t sub_4a87ed()

{
    int32_t ecx;
    int32_t var_8 = ecx;
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    *(&var_8 + 2) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    __fnclex();
    return *(&var_8 + 2);
}
