// Original IGI.EXE function: Script_GraphstreamCollision (VA 0x004F9DF0; static CFG gate PASS, CFG score 1.000).
#include "Script_GraphstreamCollision.h"
void* Script_GraphstreamCollision(char* context, int32_t param_2, int32_t param_3)

{
    void* result = Script_ExecuteLevelScript_24(context);
    int32_t* i_1 = g_a774a0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == result)
        {
            char* item_8_2 = context;
            return Warning_Show("GraphStream - collision in hash for %s");
        }

        i_1 = i;
    }

    int32_t* source_1 = g_a76d18;

    if (!*source_1)
        return result;

    source_1[2] = result;
    source_1[3] = param_2;
    source_1[4] = param_3;
    Camera_ApplyHandiCam_33(source_1);
    source_1[1] = 0;
    *source_1 = 0;
    return Camera_SetFieldOfView_33(&g_a774a0, source_1);
}
