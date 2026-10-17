// Original IGI.EXE function: Weapon_UpdateRecoil_8 (VA 0x0047CE70; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateRecoil_8.h"
void** Weapon_UpdateRecoil_8(int32_t* context, int32_t param_2, void* param_3)

{
    int32_t temp_val = 0;
    int32_t data_val = *context;
    int32_t* entity_1;

    if (data_val > 0)
    {
        entity_1 = &context[1];

        while (*entity_1 != param_2)
        {
            temp_val += 1;
            entity_1 = &entity_1[3];

            if (temp_val >= data_val)
                goto label_47ce98;
        }
    }

    void** result;

    if (data_val <= 0 || !entity_1)
    {
    label_47ce98:
        entity_1 = &context[data_val * 3 + 1];
        result = &entity_1[2];
        *entity_1 = param_2;
        *result = param_3;
        *context += 1;
    }
    else
    {
        result = &entity_1[2];
        *result = param_3;
    }

    void* source_1 = *result;

    if (source_1 != 0xffffffff)
    {
        int32_t temp_4 = entity_1[1];

        if (temp_4 < 0)
        {
            entity_1[1] = 0;
            return result;
        }

        if (temp_4 > source_1)
        {
            result = *result;
            entity_1[1] = result;
        }
    }

    return result;
}
