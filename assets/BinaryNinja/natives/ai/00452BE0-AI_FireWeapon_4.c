// Original IGI.EXE function: AI_FireWeapon_4 (VA 0x00452BE0; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_4.h"
int32_t* AI_FireWeapon_4(int32_t context, int32_t param_2)

{
    int32_t* result = g_57d768;

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[2] == context && result[3] == param_2)
            return result;

        result = i;
    }

    return nullptr;
}
