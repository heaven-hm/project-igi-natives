#include "004A3550-BandFilter_LoadParameters.h"
/* 0x004a3550 BandFilter_LoadParameters full linked: callers=0 callees=2 */
void* sub_4a3550(void* a1)

{
    if (!*(a1 + 0x34))
    {
        int32_t var_c = g_936014;
        void* var_4 = a1;
        void var_10;
        return sub_4a3530(&var_10);
    }

    void* result = sub_4b72e0(sub_4a3530, 0x10, *(a1 + 0x2c));
    int32_t ecx = g_936014;
    *(result + 0xc) = a1;
    *(result + 4) = ecx;
    return result;
}
