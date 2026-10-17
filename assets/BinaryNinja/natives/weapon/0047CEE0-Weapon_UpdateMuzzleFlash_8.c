// Original IGI.EXE function: Weapon_UpdateMuzzleFlash_8 (VA 0x0047CEE0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateMuzzleFlash_8.h"
int32_t* Weapon_UpdateMuzzleFlash_8(int32_t* context, int32_t param_2)

{
    int32_t source_val = *context;
    int32_t entity_val = 0;

    if (source_val <= 0)
        return nullptr;

    int32_t* result = &context[1];

    do
    {
        if (*result == param_2)
            return result;

        entity_val += 1;
        result = &result[3];
    } while (entity_val < source_val);

    return 0;
}
