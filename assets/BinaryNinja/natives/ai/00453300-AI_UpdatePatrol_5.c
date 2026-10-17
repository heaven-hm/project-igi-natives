// Original IGI.EXE function: AI_UpdatePatrol_5 (VA 0x00453300; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_5.h"
int32_t* AI_UpdatePatrol_5(int32_t a1, char a2)

{
    if (!a2)
    {
        int32_t* srcS1 = g_5bda28;
        int32_t* valA2 = *srcS1;

        if (valA2)
        {
            while (srcS1[2] != a1)
            {
                srcS1 = valA2;
                valA2 = *valA2;

                if (!valA2)
                    return valA2;
            }

            Camera_ApplyHandiCam_33(srcS1);
            srcS1[1] = 0;
            *srcS1 = 0;
            Camera_SetFieldOfView_33(&g_57d758, srcS1);
        }
    }
    else
    {
        int32_t* srcS = g_57d758;

        if (*srcS)
        {
            Camera_ApplyHandiCam_33(srcS);
            srcS[1] = 0;
            *srcS = 0;
            Camera_SetFieldOfView_33(&g_5bda28, srcS);
            srcS[2] = a1;
            return srcS;
        }
    }

    return 0;
}
