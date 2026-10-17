// Original IGI.EXE function: Weapon_UpdateRecoil_9 (VA 0x0047EBD0; static CFG gate PASS, CFG score 0.972).
#include "Weapon_UpdateRecoil_9.h"
int32_t Weapon_UpdateRecoil_9(void* context, float param_2)

{
    long double fpu_val_7_1 = param_2 * 0.5f;
    int32_t result = *(context + 0x104);
    int32_t item_4 = 0x3f8eb90c;
    float item_20 = fpu_val_7_1;
    float item_1c = fpu_val_7_1;
    long double fpu_val_7_3 = *(context + 0x110) * 15.0f;
    int32_t item_18;
    strncpy(&item_18, "33KA33KA33KA", 0x14);
    int32_t item_c;

    if (result == 2)
    {
        param_2 = 1.0f / fpu_val_7_3;
        struct status_msg* data_3 = Script_FormatString_30(context, Level_StartMission_4(), g_5c1158 + 0x18,
            &item_c, &item_18, &item_20, 0x49480000, 8, 0, param_2, 0, 0xc8, 0);
        *(context + 0x108) = data_3;
        Script_ParseEnumReal32_31(data_3, 0);
        uint32_t entity_2 = g_5c1160 + 0x18;
        void* data_4 = Level_StartMission_4();
        struct status_msg* data_6 = Script_FormatString_30(Script_FormatString(), data_4, entity_2, &item_c, &item_18, &item_20,
            0x49480000, 0x10, 0, param_2, 0, 0xc8, 0);
        *(context + 0x10c) = data_6;
        return Script_ParseEnumReal32_31(data_6, 0);
    }

    if (result != 1)
        return result;

    int32_t entity_val;
    int32_t item_34 = entity_val;
    uint32_t temp_1 = g_5c1160 + 0x18;
    void* data_8 = Level_StartMission_4();
    struct status_msg* data_10 = Script_FormatString_30(Script_FormatString(), data_8, temp_1, &item_c, &item_18, &item_20,
        0x49480000, 8, 0, 1.0f / fpu_val_7_3, 0, 0xc8, 0);
    *(context + 0x10c) = data_10;
    return Script_ParseEnumReal32_31(data_10, 0);
}
