// IGI native provenance: Combat_SetAimMode - 0x004511F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004511F0-Combat_SetAimMode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Combat_SetAimMode.h"
int32_t Combat_SetAimMode(void* context, void* param_2, int32_t param_3)

{
    int32_t result = 0;
    int32_t entity_val = *(context + 0x128);

    if (entity_val > 0)
    {
        int32_t* temp_1 = context + 0x10;

        while (*(param_2 + 0x14) != *temp_1)
        {
            result += 1;
            temp_1 = &temp_1[1];

            if (result >= entity_val)
                return result;
        }

        *(context + (result << 2) + 0x90) = param_3;
    }

    return result;
}
