#include "004ECED0-SoundSys_Update3DPosition_17.h"
/* 0x004eced0 SoundSys_Update3DPosition_17 full linked: callers=3 callees=1 */
void* sub_4eced0(int32_t* a1, float a2, float a3, float a4, float a5)

{
    long double x87_r7 = a3 * a3;
    int32_t ecx;
    int32_t var_4 = ecx;
    a4 = a4 * a4;
    a3 = a5 * a5;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    void* result = sub_4ec5e0(a1, a2, (a3 + a4) * a2 * 0.0833333358f,
        (a3 + x87_r7) * a2 * 0.0833333358f, (a4 + x87_r7) * a2 * 0.0833333358f);
    return result;
}
