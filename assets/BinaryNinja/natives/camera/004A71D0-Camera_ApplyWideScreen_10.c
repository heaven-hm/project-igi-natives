// Original IGI.EXE function: Camera_ApplyWideScreen_10 (VA 0x004A71D0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_10.h"
uint32_t Camera_ApplyWideScreen_10(char* a1)

{
    char* srcS = a1;
    uint32_t i;
    int32_t objC;
    int32_t tmpD;
    i = Camera_SetFieldOfView_19(objC);
    int32_t objC1 = *srcS;

    if (i != 0x65)
    {
        do
        {
            srcS = &srcS[1];

            if (g_54427c <= 1)
            {
                int32_t valA2 = *srcS;
                objC1 = g_544070;
                valA2 = *(objC1 + (valA2 << 1));
                i = valA2 & 4;
            }
            else
            {
                int32_t valA1 = *srcS;
                int32_t v_c_1 = valA1;
                i = Camera_ApplyBandFilter_12(valA1, tmpD, objC1, 4);
                objC1 = 4;
            }
        } while (i);
    }

    i = *srcS;
    *srcS = g_544280;
    char* srcS1 = &srcS[1];
    char i_1;

    do
    {
        i_1 = *srcS1;
        *srcS1 = i;
        i = i_1;
        i_1 = *srcS1;
        srcS1 = &srcS1[1];
    } while (i_1);
    return i;
}
