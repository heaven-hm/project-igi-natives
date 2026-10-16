#include "gi_platform.h"
#include "0041FA10-SlideBar_LoadParameters.h"
int32_t SlideBar_LoadParameters(float a1)

{
    int32_t srcS = a1;
    int32_t v_10 = 0;
    int32_t valA = (*(int32_t*)(uintptr_t)(srcS + 0x248));
    void* ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x98));
    int32_t* dstD = (*(int32_t*)(uintptr_t)(srcS + 0x9c));
    float v_c = (*(int32_t*)(uintptr_t)(srcS + 0xa0));

    if (!valA)
        a1 = (*(int32_t*)(uintptr_t)(srcS + 0xa8));
    else
        a1 = 1.0f / (valA - 1);

    int32_t objC = 0;
    objC = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
    ((int(*)())(uintptr_t)(*((objC << 2) + &g_a970e0)))(ctxB);
    int32_t tmpD = 0;
    int32_t* v_28 = dstD;
    tmpD = dstD[7];
    ((int(*)())(uintptr_t)(*((tmpD << 2) + &g_a970e0)))(v_28);
    int16_t valA4;
    valA4 = (*(int32_t*)(uintptr_t)(ctxB + 0x4b));
    int32_t valA5;

    if (!valA4)
        valA5 = (*(int32_t*)(uintptr_t)(srcS + 0x50));

    long double x87_r7_4;

    if (valA4 || valA5 == 0xffffffff)
    {
        long double x87_r7_8 = (*(int32_t*)(uintptr_t)(srcS + 0xa0));
        long double f0_1 = 0.0;
        x87_r7_8 - f0_1;

        if (*(&((x87_r7_8 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_4 = v_c;
        else
        {
            v_28 = nullptr;
            SoundSys_AttachLipsync_8("menu_high", 0, 0);
            x87_r7_4 = v_c - a1;
            v_10 = 1;
        }
    }
    else if ((*(int32_t*)(uintptr_t)(dstD + 0x4b)) || valA5 == 0xfffffffe)
    {
        long double x87_r7_6 = (*(int32_t*)(uintptr_t)(srcS + 0xa0));
        long double f1_1 = 1.0;
        x87_r7_6 - f1_1;

        if (!(*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = v_c;
        else
        {
            v_28 = nullptr;
            v_10 = 1;
            SoundSys_AttachLipsync_8("menu_high", 0, 0);
            x87_r7_4 = a1 + v_c;
        }
    }
    else
    {
        void* valA6 = (*(int32_t*)(uintptr_t)(srcS + 0x94));

        if (!valA6)
            x87_r7_4 = v_c;
        else
        {
            char objC2 = (*(int32_t*)(uintptr_t)(srcS + 0xb4));
            void* flagP2 = (*(int32_t*)(uintptr_t)(srcS + 0x20)) + 2;
            int32_t dstD2 = (*(int32_t*)(uintptr_t)(srcS + 0x24)) + 2;
            a1 = objC2;
            int32_t valA7;
            char* ctxB1;

            if (!objC2)
            {
                dstD2 = dstD2 + (*(int32_t*)(uintptr_t)(ctxB + 0x2c)) + 1;
                ctxB1 = Sys_CloseFileStream_17(valA6);
                valA7 = (*(int32_t*)(uintptr_t)(srcS + 0xac));
            }
            else
            {
                ctxB1 = (*(int32_t*)(uintptr_t)(srcS + 0xac));
                flagP2 = (*(int32_t*)(uintptr_t)(ctxB + 0x28)) + flagP2 + 1;
                valA7 = Sys_ExecuteBytecode_17(valA6);
            }

            int32_t v_8;
            v_28 = &v_8;
            char* v_4;
            Menu_UpdateLanguage_14(srcS, flagP2, dstD2, ctxB1, valA7, v_28, &v_4);

            if (!(*(int32_t*)(uintptr_t)(srcS + 0x4a)))
                x87_r7_4 = v_c;
            else
            {
                void* valA11 = (*(int32_t*)(uintptr_t)(srcS + 0x94));

                if (!a1)
                {
                    int32_t valA13 = Sys_ExecuteBytecode_17(valA11);
                    v_10 = 1;
                    x87_r7_4 = (v_4 - dstD2) / ((*(int32_t*)(uintptr_t)(srcS + 0xac)) - valA13);
                }
                else
                {
                    int32_t valA12 = Sys_CloseFileStream_17(valA11);
                    v_10 = 1;
                    x87_r7_4 = (v_8 - flagP2) / ((*(int32_t*)(uintptr_t)(srcS + 0xac)) - valA12);
                }
            }
        }
    }

    float valA17 = (*(int32_t*)(uintptr_t)(srcS + 0x248));

    if (valA17)
    {
        v_28 = (valA17 - 1) * x87_r7_4 + 0.5.0f;
        x87_r7_4 = Camera_ApplyBandFilter_5(v_28) / ((*(int32_t*)(uintptr_t)(srcS + 0x248)) - 1);
    }

    long double x87_r6_4 = 0.0f;
    x87_r6_4 - x87_r7_4;

    if (*(&((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_5 = 1.0f;
        x87_r6_5 - x87_r7_4;

        if (*(&((x87_r6_5 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_4 = 1.0f;
    }
    else
        x87_r7_4 = 0.0f;

    (*(int32_t*)(uintptr_t)(srcS + 0xa0)) = x87_r7_4;
    (*(int32_t*)(uintptr_t)(srcS + 0xb0)) = Menu_FormatScreen_10(srcS);

    if (v_10 && Script_FormatString_6(srcS + 0x158))
    {
        Script_SpawnNewTask_7(srcS + 0x158, srcS);
        Menu_FormatScreen_5((*(int32_t*)(uintptr_t)(srcS + 0x44)));
    }

    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(srcS);
}
