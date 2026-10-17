// Original IGI.EXE function: AI_FireWeapon_2 (VA 0x00451080; static CFG gate PASS, CFG score 0.917).
#include "AI_FireWeapon_2.h"
int32_t* AI_FireWeapon_2(void* context, void* param_2)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* source_val = g_58a9d8;
    int32_t* result = nullptr;

    for (int32_t* i = *source_val; i; i = *i)
    {
        if (source_val[2])
        {
            void* data_3 = *source_val[3];

            if (param_2 && data_3 == param_2)
            {
                if (AI_UpdatePatrol_19(data_3) == AI_UpdatePatrol_19(param_2))
                {
                    result = source_val;

                    if (!source_val)
                        break;

                    int32_t data_8 = *(context + 0x14);
                    source_val[source_val[0x4a] + 0x24] = 0xffffffff;
                    source_val[source_val[0x4a] + 4] = data_8;
                    source_val[0x4a] += 1;
                    memcpy(&source_val[0x44], DynObj_UpdateDynTree_4(param_2), 0x18);
                    return result;
                }

                result = nullptr;
            }
        }

        source_val = i;
    }

    int32_t data_6 = 0;
    char* entity_1 = &g_57d840;

    while (*entity_1)
    {
        entity_1 = &entity_1[0x130];
        data_6 += 1;

        if (entity_1 >= &g_57e1c0)
            return result;
    }

    *(data_6 * 0x130 + 0x57d844) = QTask_LinkEventHandler_2(param_2);
    *(data_6 * 0x130 + 0x57d960) = 1;
    *(data_6 * 0x130 + 0x57d840) = 1;
    *(data_6 * 0x130 + 0x57d964) = 0;
    int32_t entity_6 = *(context + 0x14);
    *(data_6 * 0x130 + 0x57d8c8) = 0xffffffff;
    *(data_6 * 0x130 + 0x57d848) = entity_6;
    memcpy(data_6 * 0x130 + 0x57d948, DynObj_UpdateDynTree_4(param_2), 0x18);
    *(data_6 * 0x130 + 0x57d83c) = 0;
    *(data_6 * 0x130 + 0x57d838) = 0;
    Camera_SetFieldOfView_33(&g_58a9d8, data_6 * 0x130 + 0x57d838);
    return data_6 * 0x130 + 0x57d838;
}
