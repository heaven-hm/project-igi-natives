// Original IGI.EXE function: Explosion0_Cleanup (VA 0x00480420; static CFG gate PASS, CFG score 1.000).
#include "Explosion0_Cleanup.h"
int32_t Explosion0_Cleanup(int32_t a1)

{
    int32_t* srcS = a1;
    int32_t valA = srcS[8];

    if (valA <= 0)
        return QTask_FindType(srcS);

    int32_t objC = srcS[9];
    int64_t v_8;

    if (valA == objC)
    {
        v_8 = objC * 0.100000001f;
        int16_t dstD1 = v_8;
        a1 = srcS[9];
        long double x87_r7_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.200000003f;
        int32_t valA3 = srcS[0x10];
        v_8 = valA3;
        *(&v_8 + 4) = valA3;
        Weapon_EjectShell_9(srcS, 0x1000008, &v_8, 1f / a1, dstD1, (x87_r7_5 + 0.800000012f) * a1,
            (Sys_AllocateMemory_14(Level_SetMission_5()) + 1f) * 0.100000001f);
    }

    struct status_msg* valA7 = srcS[9];
    int32_t objC2 = srcS[8];
    long double x87_r7_13 = valA7;
    v_8 = x87_r7_13 * 0.899999976f;

    if (objC2 == v_8)
    {
        int32_t objC3 = srcS[0x10];
        v_8 = objC3;
        *(&v_8 + 4) = objC3;
        srcS[0x11] = Weapon_EjectShell_9(srcS, 0x1000010, &v_8, 1f / x87_r7_13, valA7, 0, 0x3a83126f);
    }

    void* __saved_ebx_4 = srcS[0x11];

    if (__saved_ebx_4)
    {
        long double x87_r7_16 = srcS[8];
        long double x87_r6_4 = srcS[9];
        long double x87_r6_5 = x87_r6_4 * 0.5f;
        x87_r7_16 - x87_r6_5;
        long double x87_r6_9;

        x87_r6_9 = *(&((x87_r7_16 < x87_r6_5 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_16, x87_r6_5) ? 1 : 0) << 0xa
            | (x87_r7_16 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r7_16 / x87_r6_5
            : 1f - (x87_r7_16 - x87_r6_5) / (x87_r6_4 * 0.899999976f - x87_r6_5);

        void* __saved_ebx_2 = __saved_ebx_4;
        Script_ParseEnumString_31(__saved_ebx_4, x87_r6_9 * 0.300000012f);
    }

    int32_t result = srcS[8] - 1;
    srcS[8] = result;
    return result;
}
