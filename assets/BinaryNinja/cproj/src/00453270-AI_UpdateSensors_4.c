#include "gi_platform.h"
#include "00453270-AI_UpdateSensors_4.h"
void AI_UpdateSensors_4()

{
    int32_t* i_1 = g_58aa18;

    for (int32_t* i = *i_1; i; i = *i)
    {
        int32_t* j_1 = i_1[3];

        for (int32_t* j = *j_1; j; j = *j)
        {
            Camera_ApplyHandiCam_33(j_1);
            Camera_SetFieldOfView_33(&g_57e1b8, j_1);
            j_1 = j;
        }

        Camera_ApplyHandiCam_33(i_1);
        Camera_SetFieldOfView_33(&g_57c748, i_1);
        i_1 = i;
    }
}
