#include "gi_platform.h"
#include "0045E060-AI_CheckSector_16.h"
int32_t AI_CheckSector_16(int32_t a1)

{
    void* valA = Config_GetActivePlayerProfileRecord();
    int32_t* srcS = a1;
    __builtin_memset(srcS, 0, 0xa0);
    int32_t dstD1 = g_bc210c;
    *srcS = g_bc20f4;
    int32_t v_4 = 0;
    srcS[1] = g_bc20f8;
    int32_t v_4_1 = 0;
    srcS[2] = (dstD1 & 1);
    int32_t v_4_2 = 0;
    srcS[3] = (dstD1 & 2);
    int32_t v_4_3 = 0;
    srcS[4] = (dstD1 & 4);
    srcS[5] = (dstD1 & 8);

    if ((*(int32_t*)(uintptr_t)(valA + 0x538)))
        srcS[1] = -(srcS[1]);

    long double x87_r7_7 = (*(int32_t*)(uintptr_t)(valA + 0x53c));
    long double f0 = 0.0500000007.0f;
    x87_r7_7 - f0;

    if (!(*(&((x87_r7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f0) ? 1 : 0) << 0xa
        | (x87_r7_7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = 1.0f;
        x87_r7_7 - f1_1;

        if (!(*(&((x87_r7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_7 = 1.0f;
    }
    else
        x87_r7_7 = 0.0500000007.0f;

    int32_t v_4_4 = 0;
    *srcS = x87_r7_7 * *srcS;
    srcS[1] = x87_r7_7 * srcS[1];
    int32_t v_4_5 = 0;
    srcS[6] = (dstD1 & 0x100);
    int32_t v_4_6 = 0;
    srcS[7] = (dstD1 & 0x4000);
    int32_t v_4_7 = 0;
    srcS[8] = (dstD1 & 0x200);
    int32_t v_4_8 = 0;
    srcS[9] = (dstD1 & 0x400);
    int32_t v_4_9 = 0;
    srcS[0xa] = (dstD1 & 0x800);
    int32_t v_4_10 = 0;
    srcS[0xb] = (dstD1 & 0x1000);
    srcS[0xc] = (dstD1 & 0x8000);
    int32_t v_4_11 = 0;
    srcS[0xd] = 0xffffffff;
    int32_t v_4_12 = 0;
    srcS[0xe] = (dstD1 & 0x100000);
    int32_t v_4_13 = 0;
    srcS[0xf] = (dstD1 & 0x200000);
    int32_t v_4_14 = 0;
    srcS[0x14] = (dstD1 & 0x40000);
    int32_t v_4_15 = 0;
    srcS[0x15] = (dstD1 & 0x2000);
    srcS[0x16] = (dstD1 & 0x80000);
    int32_t v_4_16 = 0;
    int32_t v_4_17 = 0;
    srcS[0x17] = (dstD1 & &__dos_header);
    int32_t v_4_18 = 0;
    srcS[0x18] = (dstD1 & 0x800000);
    int32_t v_4_19 = 0;
    srcS[0x19] = (dstD1 & 0x1000000);
    int32_t v_4_20 = 0;
    srcS[0x1a] = (dstD1 & 0x2000000);
    int32_t v_4_21 = 0;
    srcS[0x1b] = (dstD1 & 0x4000000);
    int32_t v_4_22 = 0;
    srcS[0x1c] = (dstD1 & 0x8000000);
    int32_t v_4_23 = 0;
    srcS[0x1d] = (dstD1 & 0x10000000);
    int32_t v_4_24 = 0;
    srcS[0x1e] = (dstD1 & 0x20000000);
    int32_t v_4_25 = 0;
    srcS[0x1f] = (dstD1 & 0x40000000);
    int32_t v_4_26 = 0;
    srcS[0x22] = (dstD1 & 0x10000);
    srcS[0x20] = (dstD1 & 0x20000);
    srcS[0x10] = WeaponType_GetConfig_2(0x4e);
    srcS[0x11] = WeaponType_GetConfig_2(0x4a);
    srcS[0x12] = DEBUG_KEYSENABLEINVALID(0x9c);
    srcS[0x13] = DEBUG_KEYSENABLEINVALID(0x37);
    int32_t result = DEBUG_KEYSENABLEINVALID(0x21);
    srcS[0x21] = result;
    return result;
}
