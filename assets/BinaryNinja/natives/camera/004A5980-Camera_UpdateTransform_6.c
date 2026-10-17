// Original IGI.EXE function: Camera_UpdateTransform_6 (VA 0x004A5980; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_6.h"
int32_t __convention("regparm") Camera_UpdateTransform_6(int32_t a1, int32_t a2, int32_t a3, char* a4, char* a5)

{
    char* srcS = a5;
    int16_t valA = 0x61dc;

    if (g_9361e4)
    {
        int32_t result = 0xff;
        uint32_t ctxB1 = 0;
        char* dstD2 = a4;
        bool c_5;

        while (true)
        {
            result = result;

            if (!result)
                return result;

            result = *srcS;
            srcS = &srcS[1];
            ctxB1 = *dstD2;
            dstD2 = &dstD2[1];

            if (result != ctxB1)
            {
                int32_t result_1 = result;
                uint32_t v_18_1 = ctxB1;
                uint32_t valA1;
                int32_t objC;
                valA1 = Camera_SetFieldOfView_19(a3);
                ctxB1 = valA1;
                result = Camera_SetFieldOfView_19(objC);
                c_5 = ctxB1 < result;

                if (ctxB1 != result)
                    break;
            }
        }

        return result - result + 1;
    }

    valA = 0xff;
    char* dstD1 = a4;

    while (true)
    {
        valA = valA;

        if (!valA)
            break;

        valA = *srcS;
        srcS = &srcS[1];
        *(&valA + 1) = *dstD1;
        dstD1 = &dstD1[1];

        if (*(&valA + 1) != valA)
        {
            valA -= 0x41;
            a3 = a3 - a3;
            a3 &= 0x20;
            valA += a3;
            valA += 0x41;
            char f0_1 = valA;
            valA = *(&valA + 1);
            *(&valA + 1) = f0_1;
            valA -= 0x41;
            a3 = a3 - a3;
            a3 &= 0x20;
            valA += a3;
            valA += 0x41;
            bool c_3 = valA < *(&valA + 1);

            if (valA != *(&valA + 1))
            {
                char f3_1 = valA;
                char f4_1 = valA;
                valA = f3_1 - f4_1;
                valA = valA + 1;
                break;
            }
        }
    }

    return valA;
}
