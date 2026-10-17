// Original IGI.EXE function: AIFunction_GetAnimationToPlay (VA 0x0044ECB0; static CFG gate PASS, CFG score 0.852).
#include "AIFunction_GetAnimationToPlay.h"
int32_t AIFunction_GetAnimationToPlay(int32_t a1)

// Sig: int AIFunction_GetAnimationToPlay()
// Note: RETURNS which animation entry the engine decided to play for the
// current event/action (useful to log or override reactions). Per retail table
// takes no script args; machine code also touches an [flagP+8] slot (internal
// context).
{
    void* valA = g_5bda58;
    int32_t i_2 = *(valA + 0x3b64);
    int32_t v_20;

    if (i_2 <= 0)
    {
        Warning_Show("No animation entries defined");
        v_20 = 0xffffffff;
        int32_t v_18_1 = 0;
        int32_t v_14 = 0xbff00000;
        char* v_10 = &g_567c74;
        memcpy(a1, &v_20, 0x18);
        return a1;
    }

    long double fpu7 = 0.0;
    int32_t v_18;

    if (i_2 > 0)
    {
        double* valA2 = valA + 0x3b10;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            fpu7 = fpu7 + *valA2;
            valA2 = &valA2[2];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        int32_t v_28;
        v_28 = fpu7;
        long double f1_1 = 0.01;
        fpu7 - f1_1;

        if (!(*(&((fpu7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1_1) ? 1 : 0) << 0xa
            | (fpu7 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fp0 = Sys_AllocateMemory_14(Level_SetMission_5());
            void* dstD2 = g_5bda58;
            long double x87_r7_4 = fp0 * v_28;
            int32_t tmpD1 = *(dstD2 + 0x3b64);
            int32_t objC1 = 0;

            if (tmpD1 > 0)
            {
                double* srcS1 = dstD2 + 0x3b10;

                do
                {
                    x87_r7_4 = x87_r7_4 - *srcS1;
                    long double f2_1 = 0.0;
                    x87_r7_4 - f2_1;

                    if (*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        int32_t objC5 = *((objC1 << 4) + dstD2 + 0x3b08);
                        v_20 = objC5;
                        char* v_10_3 = &g_567c74;
                        v_18 = objC5;
                        memcpy(a1, &v_20, 0x18);
                        return a1;
                    }

                    objC1 += 1;
                    srcS1 = &srcS1[2];
                } while (objC1 < tmpD1);
            }

            int32_t objC3 = *((objC1 << 4) + dstD2 + 0x3af8);
            v_20 = objC3;
            char* v_10_2 = &g_567c74;
            v_18 = objC3;
            memcpy(a1, &v_20, 0x18);
            return a1;
        }
    }

    int32_t* v_38 = Level_SetMission_5();
    char* v_10_1 = &g_567c74;
    int32_t valA7 = *((Sys_FreeMemory_14(v_38, i_2) << 4) + g_5bda58 + 0x3b08);
    v_20 = valA7;
    v_18 = valA7;
    memcpy(a1, &v_20, 0x18);
    return a1;
}
