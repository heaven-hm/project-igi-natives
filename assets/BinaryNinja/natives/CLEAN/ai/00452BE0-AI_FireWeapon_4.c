// IGI native provenance: AI_FireWeapon_4 - 0x00452BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00452BE0-AI_FireWeapon_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
