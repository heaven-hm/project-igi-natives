// IGI native provenance: Weapon_EjectMagazine_4 - 0x00476670 - CFG score 92.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476670-Weapon_EjectMagazine_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectMagazine_4.h"
struct status_msg* Weapon_EjectMagazine_4(void* context, void* param_2, void* param_3, int32_t param_4, int32_t param_5, int32_t* param_6, char* param_7, int32_t param_8, int32_t param_9)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3b0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);

    if (param_2)
    {
        int32_t* data_1 = QTask_LinkEventHandler_2(param_2);
        result->sprite[0x60] = data_1;
        result->sprite[0x61] = *(&data_1 + 1);
        result->sprite[0x62] = *(&data_1 + 2);
        result->sprite[0x63] = *(&data_1 + 3);
    }

    if (param_3)
    {
        int32_t* data_3 = QTask_LinkEventHandler_2(param_3);
        result->sprite[0x64] = data_3;
        result->sprite[0x65] = *(&data_3 + 1);
        result->sprite[0x66] = *(&data_3 + 2);
        result->sprite[0x67] = *(&data_3 + 3);
    }

    memcpy(&result->sprite[0x3c], param_4, 0x18);
    memcpy(&result->head[0x1c], param_5, 0x28);
    int32_t entity_1 = *param_6;
    result->sprite[0x54] = entity_1;
    result->sprite[0x55] = *(&entity_1 + 1);
    result->sprite[0x56] = *(&entity_1 + 2);
    result->sprite[0x57] = *(&entity_1 + 3);
    int32_t entity_2 = param_6[1];
    result->sprite[0x58] = entity_2;
    result->sprite[0x59] = *(&entity_2 + 1);
    result->sprite[0x5a] = *(&entity_2 + 2);
    result->sprite[0x5b] = *(&entity_2 + 3);
    int32_t data_5 = param_6[2];
    result->sprite[0x5c] = data_5;
    result->sprite[0x5d] = *(&data_5 + 1);
    result->sprite[0x5e] = *(&data_5 + 2);
    result->sprite[0x5f] = *(&data_5 + 3);
    DynObj_CreateMagicObject_5(result, DynObj_Missing(param_7));
    result->sprite[0x6c] = param_8;
    result->sprite[0x6d] = *(&param_8 + 1);
    result->sprite[0x6e] = *(&param_8 + 2);
    result->sprite[0x6f] = *(&param_8 + 3);
    result->sprite[0x70] = param_9;
    result->sprite[0x71] = *(&param_9 + 1);
    result->sprite[0x72] = *(&param_9 + 2);
    result->sprite[0x73] = *(&param_9 + 3);
    Qhash_Reset();
    return result;
}
