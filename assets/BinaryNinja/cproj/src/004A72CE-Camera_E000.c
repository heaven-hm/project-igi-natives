#include "gi_platform.h"
#include "004A72CE-Camera_E000.h"
char* Camera_E000(double* a1, char* a2, void* a3, int32_t a4)

{
    void* ctxB;
    int32_t* srcS;

    if (!g_9361c4)
    {
        int32_t __saved_edi_2;
        int32_t __saved_edi_1 = __saved_edi_2;
        int32_t __saved_edi_3 = __saved_edi_2;
        __saved_edi_3 = *a1;
        Camera_SetFieldOfView_26();
        ctxB = a3;
        srcS = &g_936238;
        int32_t valA3 = 0;
        valA3 = g_936238 == 0x2d;
        void* objC4 = nullptr;
        objC4 = ctxB > 0;
        Camera_UpdateTransform_26(objC4 + &a2[valA3], ctxB + 1, &g_936238);
    }
    else
    {
        ctxB = a3;
        int32_t* valA = g_9361c0;
        int32_t objC = 0;
        srcS = valA;
        objC = ctxB > 0;
        void* objC1 = nullptr;
        objC1 = *valA == 0x2d;
        Camera_ApplyBandFilter_11(objC1 + a2, objC);
    }

    char* valA4 = a2;

    if (*srcS == 0x2d)
    {
        *valA4 = 0x2d;
        valA4 = &valA4[1];
    }

    if (ctxB > 0)
    {
        *valA4 = valA4[1];
        valA4 = &valA4[1];
        *valA4 = g_544280;
    }

    void* const objC7 = nullptr;
    objC7 = !g_9361c4;
    char* valA5 = Camera_ApplyLineFilter_20(objC7 + valA4 + ctxB, "e+000");

    if (a4)
        *valA5 = 0x45;

    if (*srcS[3] != 0x30)
    {
        int32_t ctxB1 = srcS[1];
        int32_t ctxB2 = ctxB1 - 1;

        if (ctxB1 - 1 < 0)
        {
            ctxB2 = -(ctxB2);
            valA5[1] = 0x2d;
        }

        if (ctxB2 >= 0x64)
        {
            valA5[2] += ctxB2 / 0x64;
            ctxB2 = ctxB2 % 0x64;
        }

        if (ctxB2 >= 0xa)
        {
            valA5[3] += ctxB2 / 0xa;
            ctxB2 = ctxB2 % 0xa;
        }

        valA5[4] += ctxB2;
    }

    return a2;
}
