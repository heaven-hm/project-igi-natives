#include "gi_platform.h"
#include "00460400-HealthFraction.h"
int32_t HealthFraction(int32_t a1, int32_t* a2)

{
    int32_t* ctxB = a2;
    void* flagP = *ctxB;
    void* srcS = *(Level_LoadLevel_6() + 0x5c);
    int32_t valA1 = g_c28b44;
    int32_t objC = g_c28b48;
    int32_t result = (*(int32_t*)(uintptr_t)(srcS + 0xe8));

    if (result == 1)
    {
        void* srcS1 = Table_GetAt(a1 + 0x4c4, 0);

        if (srcS1)
        {
            uint32_t valA4 = FX_DebrisSpawn_8();
            int32_t objC1 = 0;
            objC1 = *(srcS1 + 0x1c);
            void* valA2 = *(((valA4 * 0x180 + objC1) << 2) + &g_a96ae0);

            if (valA2)
                valA2(srcS1, ctxB);
        }

        if ((*(int32_t*)(uintptr_t)(a1 + 0x7b8)))
            FX_FragmentSimulate_9(*ctxB);
        else if (!AI_CheckHearing_21(a1))
            FX_FragmentSimulate_9(*ctxB);
        else
        {
            a2 = *ctxB;
            int32_t objC2 = 0;
            objC2 = (*(int32_t*)(uintptr_t)(AI_CheckHearing_21(a1) + 0x1c));
            int32_t srcS4 = *(((objC2 + Level_SetMission_2() * 0x180) << 2) + &g_a96ae0);

            if (srcS4)
                srcS4(AI_CheckHearing_21(a1), &a2);
        }

        long double x87_r7_3 = 1.0f - (*(int32_t*)(uintptr_t)(a1 + 0x254)) / (*(int32_t*)(uintptr_t)(a1 + 0x258));
        float v_14_1 = x87_r7_3;
        long double f0_1 = 0.0f;
        x87_r7_3 - f0_1;

        if (*(&((x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            v_14_1 = 0.0f;

        float v_10_1 = valA1 * 0.0625.0f;
        a2 = Sys_CloseFileStream_17(flagP + 0x8c);
        a2 = v_10_1 - a2 * 0.5.0f;
        float v_c_1 = objC * 0.895833313.0f;
        int32_t valA16 = Sys_ExecuteBytecode_17(flagP + 0x8c);
        result = Sys_ResolveSymbol_14(flagP + 0x8c, a2, v_c_1 - valA16 * 0.5.0f, 128.0f, 128.0f, 128.0f, 0, 0, 0);
        long double x87_r7_14 = v_14_1;
        long double f1_1 = 0.0f;
        x87_r7_14 - f1_1;
        result = (x87_r7_14 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            a2 = v_10_1 - 2.0f;
            a1 = v_c_1 - 2.0f;
            long double x87_r7_20 = Sys_CloseFileStream_17(flagP + 0xa4) * 0.5.0f;
            float v_4_1 = a2 - x87_r7_20;
            float v_10_2 = a1 - Sys_ExecuteBytecode_17(flagP + 0xa4) * 0.5.0f;
            float v_c_2 = Sys_CloseFileStream_17(flagP + 0xa4) * 0.5.0f + a2;
            a2 = Sys_ExecuteBytecode_17(flagP + 0xa4);
            float v_8_4 = a2 * 0.5.0f + a1;
            a2 = 1.0f - v_14_1;
            int32_t valA22 = Sys_ExecuteBytecode_17(flagP + 0xa4);
            int32_t* valA23 = a2;
            float v_10_3 = valA22 * a2 + v_10_2;
            return Sys_CloseFileStream_15(flagP + 0xa4, v_4_1, v_10_3, v_c_2, v_10_3, v_4_1, v_8_4,
                v_c_2, v_8_4, 0, valA23, 0x3f800000, valA23, 0, 0x3f800000, 0x3f800000,
                0x3f800000, 128.0f, 128.0f, 128.0f, 0, 0x3f800000, 0, 0x80000, 0);
        }
    }

    return result;
}
