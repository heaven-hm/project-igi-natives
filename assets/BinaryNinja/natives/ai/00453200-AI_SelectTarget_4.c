#include "AI_SelectTarget_4.h"
int32_t* AI_SelectTarget_4(int32_t* a1)

{
    int32_t* i_1 = g_58aa18;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1[0xedb])
        {
            int32_t* i_2 = i_1;
            return AI_HumanmonitorNoTarget(a1);
        }

        i_1 = i;
    }

    int32_t* srcS = g_57c748;

    if (!*srcS)
        return 0;

    Camera_ApplyHandiCam_33(srcS);
    Camera_SetFieldOfView_33(&g_58aa18, srcS);
    int32_t* v_18 = srcS;
    srcS[2] = a1[0xedb];
    return AI_HumanmonitorNoTarget(a1);
}
