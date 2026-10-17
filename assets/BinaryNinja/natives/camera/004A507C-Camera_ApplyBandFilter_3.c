// Original IGI.EXE function: Camera_ApplyBandFilter_3 (VA 0x004A507C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_3.h"
int32_t Camera_ApplyBandFilter_3(int32_t* a1, int32_t a2)

{
    void* flagP = *a1;
    void* srcS = a1[6];
    TEB* fsbase;

    if (srcS != fsbase->NtTib.ExceptionList)
        Camera_UpdateTransform_7(srcS);

    if (srcS)
    {
        void* v_4_2 = &a1[8];
        Camera_ApplyBandFilter_7();

        if (a1[8] != 0x56433230)
            Camera_SetFieldOfView_7(srcS, a1[7]);
        else
        {
            int32_t valA3 = a1[9];

            if (valA3)
                valA3(a1);
        }
    }

    int32_t v_4_5 = 0;
    Camera_ApplyLineFilter_7(a1[5], flagP);
    a1[1];
    a1[2];
    a1[3];
    a1[4];
❓    /* jump -> *(a1 + 0x14) */
}
