#include "gi_platform.h"
#include "0048B050-FX_FindfreepositionStac.h"
  void* __stdcall FX_FindfreepositionStac(void** a1 , int32_t* a2, char a3, void* a4)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x142c);
    int32_t* dstD = a1;
    int32_t arg_42c;
    int32_t* ctxB = &arg_42c;
    __return_addr = nullptr;
    *dstD = 0;
    int32_t* arg_10 = &arg_42c;

    if ((*(int32_t*)(uintptr_t)(a2[0xedb] + 0x5c)) >= 0x400)
        return Warning_Show("FindFreePosition stack not large enough");

    int32_t* valA2 = AI_SelectTarget_4(a2);

    if (!valA2)
        return Warning_Show("No nodes near target");

    char arg_14;
    AI_UpdatePatrol_3(&arg_14, a2);
    char v_1c = 1;
    g_5c8bb4 = *valA2;
    g_5c8bac = a2[0xf8b];
    void* valA5 = FX_SmokeEmit_18(a2, valA2, a3, v_1c);

    if (valA5)
    {
        *dstD = valA2;
        return valA5;
    }

    int32_t srcS1 = *valA2;
    void* valA6 = nullptr;
    char arg_2c[0x400];
    __builtin_memset(&arg_2c, 0, 0x400);
    arg_42c = srcS1;
    int32_t arg_4 = 1;
    int32_t arg_430 = 0xffffffff;
    arg_2c[srcS1] = 1;

    if (srcS1 != 0xffffffff)
    {
    label_48b151: ;
        valA6 = a4;

        if (__return_addr < valA6)
        {
            int32_t* valA9 = Script_ExecuteLevelScript_23(a2[0xedb], *ctxB) + 0x13c;
            int32_t arg_c = 0;
            int32_t saved_dst;
            int32_t* dstD1 = &(&saved_dst)[arg_4 + 0x10f];
            int32_t* arg_8 = valA9;

            while (true)
            {
                if (__return_addr < a4)
                {
                    void* valA10 = *valA9;

                    if (valA10)
                    {
                        int32_t srcS2 = *(valA10 + 8);

                        if (*ctxB == srcS2)
                            srcS2 = *(valA10 + 0xc);

                        if (!arg_2c[srcS2])
                        {
                            int32_t* valA12 = Script_ExecuteLevelScript_23(a2[0xedb], srcS2);
                            valA6 = FX_SmokeEmit_18(a2, valA12, a3, 1);

                            if (valA6)
                            {
                                *a1 = valA12;
                                break;
                            }

                            ctxB = arg_10;
                            *dstD1 = srcS2;
                            dstD1 = &dstD1[1];
                            arg_2c[srcS2] = 1;
                            arg_4 += 1;
                            *dstD1 = 0xffffffff;
                            __return_addr += 1;
                        }
                    }

                    valA9 = &arg_8[1];
                    bool cond_2_1 = arg_c + 1 < 0x40;
                    arg_c += 1;
                    arg_8 = valA9;

                    if (cond_2_1)
                        continue;
                }

                int32_t valA17 = ctxB[1];
                ctxB = &ctxB[1];
                arg_10 = ctxB;

                if (valA17 != 0xffffffff)
                    goto label_48b151;

                return valA17;
            }
        }
    }

    return valA6;
}
