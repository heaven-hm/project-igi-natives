// Original IGI.EXE function: AI_FireWeapon_24 (VA 0x00466240; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_24.h"
struct status_msg* AI_FireWeapon_24(uint32_t context, uint32_t param_2, int32_t param_3, void** param_4, int32_t* param_5, int32_t* param_6, uint32_t param_7)

{
    int32_t kind;
    kind = g_53f520;
    int32_t* context_val;
    int32_t* item_14 = context_val;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[0x16] = param_7;
    result->head[8] = 0;
    result->head[9] = param_2;
    result->head[0x10] = 0;
    result->head[0x1c] = 0;
    result->head[0xd] = *param_5;
    result->head[0xe] = param_5[1];
    result->head[0xf] = param_5[2];
    result->head[0xa] = *param_6;
    result->head[0xb] = param_6[1];
    uint32_t temp_4 = param_6[2];
    result->head[0xc] = temp_4;

    if (param_2 > 0)
    {
        void** dest_4 = param_4;
        int32_t** source_1 = &result->head[0x17];
        context_val = param_3 - dest_4;
        context = param_2;
        bool flag_1_1;

        do
        {
            int32_t data_1 = *(context_val + dest_4);
            source_1[-6] = data_1;
            void* entity_3 = *dest_4;
            void* item_28_1 = entity_3;
            int32_t* data_2;
            data_2 = Resource_Load(data_1, temp_4, entity_3, nullptr);
            *source_1 = data_2;
            source_1[6] = 0;
            dest_4 = &dest_4[1];
            source_1 = &source_1[1];
            flag_1_1 = context != 1;
            context -= 1;
        } while (flag_1_1);
    }

    int32_t item_10 = 0x10;
    int32_t item_c = 0x10000;
    int32_t item_8 = 0x44;
    int32_t item_4 = 0x32;
    result->head[0x22] = 0;
    int32_t* entity_4 = g_5ca110;
    (*(*entity_4 + 0x14))(entity_4, &item_10, &result->head[0x22], 0);
    char data_6 = QHash_ValueGet();

    if (!data_6)
        QHash_ValueSet();

    result->head[0x23] = 0;
    result->head[0x23] = Sys_DispatchOpcode_18("LOCAL:computer/font3.fnt");

    if (!data_6)
        Sys_DispatchOpcode_2();

    return result;
}
