// Original IGI.EXE function: FX_FireBallUpdate_20 (VA 0x0048E300; static CFG gate PASS, CFG score 0.889).
#include "FX_FireBallUpdate_20.h"
❓  int32_t* __stdcall FX_FireBallUpdate_20(void* a1 @ 0x1408, int32_t* a2, int32_t a3, int32_t a4, int32_t a5)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1404);
    int32_t* i = a2;
    int32_t arg_404;
    int32_t* flagP = &arg_404;
    __return_addr = nullptr;

    if (i && a4)
    {
        int32_t tmpD1 = *i;
        i = nullptr;
        int32_t ctxB1 = 1;
        char arg_4[0x400];
        __builtin_memset(&arg_4, 0, 0x400);
        arg_404 = tmpD1;
        int32_t arg_408 = 0xffffffff;
        arg_4[tmpD1] = 1;

        if (tmpD1 != 0xffffffff)
        {
            do
            {
                void* valA1 = Script_ExecuteLevelScript_23(*(a1 + 0x3b6c), *flagP);
                int32_t valA2 = a4(a1, valA1, a5);

                if (valA2)
                {
                    valA2 = 1;
                    return valA2;
                }

                int32_t dstD2 = 0;
                int32_t saved_dst;
                int32_t* valA3 = &(&saved_dst)[ctxB1 + 0x105];
                int32_t* srcS2 = valA1 + 0x13c;

                while (__return_addr < a3)
                {
                    void* tmpD4 = *srcS2;

                    if (tmpD4)
                    {
                        int32_t objC4 = *(tmpD4 + 8);

                        if (*flagP == objC4)
                            objC4 = *(tmpD4 + 0xc);

                        if (!arg_4[objC4])
                        {
                            arg_4[objC4] = 1;
                            *valA3 = objC4;
                            ctxB1 += 1;
                            valA3 = &valA3[1];
                            __return_addr += 1;
                            *valA3 = 0xffffffff;
                        }
                    }

                    dstD2 += 1;
                    srcS2 = &srcS2[1];

                    if (dstD2 >= 0x40)
                        break;
                }

                i = flagP[1];
                flagP = &flagP[1];
            } while (i != 0xffffffff);
        }
    }

    i = 0;
    return i;
}
