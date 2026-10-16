#include "Script_GraphstreamCollision.h"
void* Script_GraphstreamCollision(char* a1, int32_t a2, int32_t a3)

{
    void* result = Script_ExecuteLevelScript_24(a1);
    int32_t* i_1 = g_a774a0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == result)
        {
            char* v_8_2 = a1;
            return Warning_Show("GraphStream - collision in hash for %s");
        }

        i_1 = i;
    }

    int32_t* srcS1 = g_a76d18;

    if (!*srcS1)
        return result;

    srcS1[2] = result;
    srcS1[3] = a2;
    srcS1[4] = a3;
    Camera_ApplyHandiCam_33(srcS1);
    srcS1[1] = 0;
    *srcS1 = 0;
    return Camera_SetFieldOfView_33(&g_a774a0, srcS1);
}
