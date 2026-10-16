#include "004A6B6C-Camera_ApplyLineFilter_9.h"
/* 0x004a6b6c Camera_ApplyLineFilter_9 full linked: callers=1 callees=1 */
char sub_4a6b6c(int32_t* a1)

{
    char result = a1[3];

    if (result & 0x83 && result & 8)
    {
        int32_t var_8_1 = a1[2];
        void** ecx;
        sub_4a6a50(ecx);
        a1[3] &= 0xfbf7;
        result = 0;
        *a1 = 0;
        a1[2] = 0;
        a1[1] = 0;
    }

    return result;
}
