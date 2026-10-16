#include "004871C0-FX_FireBallUpdate_9.h"
/* 0x004871c0 FX_FireBallUpdate_9 full linked: callers=9 callees=5 */
int32_t sub_4871c0(void* a1, int32_t a2)

{
    int32_t eax = g_c28b44;
    int32_t result = Display_GetActiveMode();
    int32_t* esi = a2;
    int32_t ecx = g_c28b48;

    if (!esi)
        return result;

    int32_t eax_2;
    int32_t edx_1;
    edx_1 = HIGHD(sub_4b6ce0(esi));
    eax_2 = LOWD(sub_4b6ce0(esi));
    int32_t eax_6;
    int32_t edx_2;
    edx_2 = HIGHD(sub_4b6d00(esi));
    eax_6 = LOWD(sub_4b6d00(esi));
    long double x87_r7_9 = *(a1 + 0x4e8);
    long double temp0_1 = 1f;
    x87_r7_9 - temp0_1;
    long double x87_r7_10;

    if (!(*(&((x87_r7_9 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = 2f - *(a1 + 0x4e8);
    else
        x87_r7_10 = *(a1 + 0x4e8);

    void* var_20_1 = a1;
    return sub_4b50b0(esi, eax * 0.5f - ((eax_2 - edx_1) >> 1),
        ecx * 0.875f - ((eax_6 - edx_2) >> 1), 128f, 128f, 128f,
        x87_r7_10 * 0.699999988f + 0.300000012f, 0, 0, 0x80000, 0);
}
