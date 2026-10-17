// Original IGI.EXE function: Display_SwapBuffers_2 (VA 0x00490D10; static CFG gate PASS, CFG score 1.000).
#include "Display_SwapBuffers_2.h"
HRESULT Display_SwapBuffers_2(int32_t a1 @ srcS, int32_t a2 @ dstD, float a3)

{
    int32_t objC;
    int32_t tmpD;

    if (*(a3 + 4))
    {
        int32_t valA2 = Timer_Now();
        tmpD = *(a3 + 8);
        objC = *(a3 + 4);
        *a3 = valA2 - tmpD - objC;
    }
    else
    {
        int32_t valA1;
        valA1 = Timer_Now();
        *(a3 + 4) = valA1;
    }

    void* valA5 = *(a3 + 0x158);

    if (valA5)
    {
        char valA6 = Display_SyncVSync_11(valA5, tmpD, objC, valA5);
        *(a3 + 0x29) = valA6;

        if (!valA6)
        {
            Display_SetDisplayMode_12(*(a3 + 0x158));
            Display_CloseDevice_11(*(a3 + 0x158));
            *(a3 + 0x158) = 0;
        }
        else
        {
            int32_t valA9;
            int32_t tmpD1;
            tmpD1 = HIGHD(0x10624dd3 * *a3 * 0x3c);
            valA9 = LOWD(0x10624dd3 * *a3 * 0x3c);
            int32_t objC3 = *(a3 + 0x14);
            uint32_t tmpD2 = tmpD1 >> 6;

            if (tmpD2 != objC3)
            {
                int32_t i_1 = tmpD2 - objC3;
                int32_t i;

                do
                {
                    void v_58;
                    Display_SetGammaRamp_12(&v_58);
                    Display_SyncVSync_12(*(a3 + 0x158), &v_58);
                    i = i_1;
                    i_1 -= 1;
                    *(a3 + 0x14) += 1;
                } while (i != 1);
            }
        }
    }

    int32_t valA13 = Timer_Now();
    HRESULT valA14 = *(a3 + 0xc);
    int32_t objC9 = valA13 - *(a3 + 8) - *(a3 + 4);
    *a3 = objC9;

    if (objC9 >= valA14)
    {
        *(a3 + 0x28) = 0;
    label_490e72:
        valA14 = *(a3 + 0x29);

        if (!valA14)
        {
            valA14 = *(a3 + 0x28);

            if (!valA14)
            {
            label_490e81:
                valA14 = 0;
                return valA14;
            }
        }
    }
    else
    {
        int32_t valA17;
        int32_t tmpD8;
        tmpD8 = HIGHD(0x10624dd3 * COMBINE(0, *(a3 + 0xb8)) / *(a3 + 0xb4) * objC9);
        valA17 = LOWD(0x10624dd3 * COMBINE(0, *(a3 + 0xb8)) / *(a3 + 0xb4) * objC9);
        valA14 = *(a3 + 0x1c);
        uint32_t dstD2 = tmpD8 >> 6;

        if (valA14 == dstD2)
            goto label_490e72;

        if (valA14 == 0xffffffff)
        {
            HRESULT valA18 = Display_ClearSurfaces_2(a3, dstD2, 0, a2, a1);

            if (!valA18)
                return valA18;
        }
        else if (dstD2 - valA14 != 1)
        {
            do
            {
                valA14 = Display_ClearSurfaces_2(a3, valA14 + 1, 0x80000000, a2, a1);

                if (!valA14)
                    goto label_490e81;

                valA14 = *(a3 + 0x1c);
            } while (valA14 != dstD2);
        }
        else
        {
            HRESULT valA19 = Display_ClearSurfaces_2(a3, dstD2, 0, a2, a1);

            if (!valA19)
                return valA19;
        }

        valA14 = Display_RestoreDevice_2(a3);
    }

    valA14 = 1;
    return valA14;
}
