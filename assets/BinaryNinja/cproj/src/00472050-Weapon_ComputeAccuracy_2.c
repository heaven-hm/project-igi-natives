#include "gi_platform.h"
#include "00472050-Weapon_ComputeAccuracy_2.h"
int32_t Weapon_ComputeAccuracy_2(void* a1)

{
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    float v_b0;
    float v_70;
    Sys_ResolveSymbol_10(a1 + 0x7c, &v_70, &v_b0);
    long double fpu7 = valA;
    float v_a4 = fpu7 * 0.625.0f;
    float v_a0 = objC * 0.791666687.0f;
    float v_9c = fpu7 * 0.28125.0f;
    long double x87_r7_2 = Sys_AllocateMemory_22((*(int32_t*)(uintptr_t)(a1 + 0x24)));
    float v_98 = x87_r7_2 + x87_r7_2 + 26.0f;
    float v_94 = v_9c * 0.5.0f;
    float v_90 = v_98 * 0.5.0f;
    float v_a8 = v_9c * 0.015625.0f;
    long double x87_r7_11 = v_b0;
    long double f0 = 0.0f;
    x87_r7_11 - f0;

    if (*(&((x87_r7_11 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f0) ? 1 : 0) << 0xa
            | (x87_r7_11 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        v_b0 = v_b0 + 6.28318548.0f;

    int32_t i = 0;
    float v_c0 = v_9c * v_b0 * 0.159154937.0f;
    float v_88 = v_90 + v_a0;

    do
    {
        int32_t* srcS1 = nullptr;
        long double x87_r7_19;

        if (!(i & 0xf))
        {
            x87_r7_19 = 12.0f;
            srcS1 = (*(int32_t*)(uintptr_t)(a1 + (i >> 4 << 2) + 0x24));
        }
        else if (i & 7)
            x87_r7_19 = 4.0f;
        else
            x87_r7_19 = 8.0f;

        long double x87_r7_20 = x87_r7_19 * 0.5.0f;
        float v_bc_2 = x87_r7_20 + v_90 + v_a0;
        float v_8c_1 = v_c0 + v_a4;
        float v_b4_1 = v_88 - x87_r7_20;
        Sys_ExecuteBytecode_15(v_8c_1, v_b4_1, 0x3f800000, v_8c_1, v_bc_2, 0x3f800000, 0.0f, 64.0f, 0.0f, 0.0f,
            64.0f, 0.0f, 0x3f800000, 0, 0);

        if (srcS1)
        {
            float v_b8_1 = Sys_CheckHeap_21(srcS1);
            long double x87_r7_23 = Sys_AllocateMemory_22(srcS1);
            long double x87_r6_13 = v_8c_1 - v_b8_1 * 0.5.0f;
            srcS1[1] = x87_r6_13;
            srcS1[2] = v_b4_1 - x87_r7_23 - 2.0f;
            Sys_CloseFileStream_18(srcS1);
            srcS1[1] = x87_r6_13;
            srcS1[2] = v_bc_2 + 2.0f;
            Sys_CloseFileStream_18(srcS1);
        }

        long double x87_r7_28 = v_c0 + v_a8;
        v_c0 = x87_r7_28;
        long double f1_1 = v_9c;
        x87_r7_28 - f1_1;

        if (!(*(&((x87_r7_28 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_28, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_28 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
            v_c0 = v_c0 - v_9c;

        i += 1;
    } while (i < 0x40);

    float v_6c;
    int32_t* v_74 = &v_6c;
    int32_t v_58 = 0x3f800000;
    float v_c0_1 = v_94 + v_a4;
    int32_t v_54 = 0;
    int32_t v_50 = 0x42800000;
    int32_t v_4c = 0;
    int32_t v_60 = 0;
    int32_t v_5c = 0;
    int32_t v_64 = 0x3f800000;
    float v_48;
    memcpy(&v_48, &v_6c, 0x24);
    float v_24;
    memcpy(&v_24, &v_6c, 0x24);
    float v_68 = v_a0 + 4.0f;
    long double x87_r7_36 = v_c0_1 - 4.0f;
    float v_a8_1 = x87_r7_36;
    v_48 = x87_r7_36;
    long double x87_r7_38 = v_c0_1 + 4.0f;
    v_6c = v_c0_1;
    v_24 = x87_r7_38;
    float v_44 = v_a0;
    int32_t valA12 = g_a84a54;
    int32_t v_80 = 0x800000;
    int32_t v_84 = 0;
    int32_t v_7c = 0;
    int32_t v_78 = 3;
    g_a84a50 = 0;
    float v_20 = v_a0;
    ((int(*)())(uintptr_t)(*((valA12 << 2) + &g_a94e84)))(&v_84);
    long double x87_r7_40 = v_98 + v_a0;
    v_6c = v_c0_1;
    v_48 = v_a8_1;
    int32_t tmpD4 = g_a84a54;
    v_24 = x87_r7_38;
    float v_68_1 = x87_r7_40 - 4.0f;
    float v_44_1 = x87_r7_40;
    float v_20_1 = x87_r7_40;
    return ((int(*)())(uintptr_t)(*((tmpD4 << 2) + &g_a94e84)))(&v_84);
}
