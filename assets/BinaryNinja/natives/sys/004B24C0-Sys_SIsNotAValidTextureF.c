// Original IGI.EXE function: Sys_SIsNotAValidTextureF (VA 0x004B24C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_SIsNotAValidTextureF.h"
int32_t Sys_SIsNotAValidTextureF(int32_t* context, int32_t param_2, int32_t* param_3)

{
    int32_t* item_10 = param_3;
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    int32_t* data_1 = Resource_Load(data_val, temp_val, entity_val, nullptr);
    char data_2 = *data_1;

    if (data_2 == 0x4c)
    {
        int32_t* item_2c;
        int32_t item_28;
        int32_t item_24;
        int32_t item_20;
        int32_t item_1c;
        int32_t item_18;
        int32_t item_14;
        int32_t item_10_1;
        void* item_c;

        if (*(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50 && data_1[1] == 2)
        {
            Sys_PopStack_8();
            int32_t entity_3 = 0;
            entity_3 = data_1[2];
            int32_t temp_3 = 0;
            temp_3 = *(data_1 + 0x16);
            item_c = &data_1[6];
            item_10_1 = 0;
            item_14 = entity_3;
            int32_t data_4 = 0;
            item_18 = temp_3;
            data_4 = data_1[5];
            int32_t entity_4 = 0;
            entity_4 = *(data_1 + 0x12);
            int32_t temp_4 = 0;
            temp_4 = data_1[4];
            item_1c = data_4;
            item_20 = entity_4;
            item_24 = temp_4;
            item_28 = param_2;
            item_2c = context;
        label_4b252e:
            Sys_FreeMemory_8(item_2c, item_28, item_24, item_20, item_1c, item_18, item_14, item_10_1, item_c);
            int32_t result = Resource_Unload(param_3);
            Sys_ResolveSymbol_8();
            return result;
        }

        if (data_2 == 0x4c && *(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50
            && data_1[1] == 0xb)
        {
            Sys_PopStack_8();
            item_c = &data_1[8];
            int32_t entity_6 = 0;
            item_10_1 = data_1[3];
            entity_6 = data_1[5];
            int32_t data_7 = 0;
            data_7 = data_1[6];
            item_14 = entity_6;
            item_18 = data_1[2];
            item_1c = data_7;
            int32_t temp_7 = 0;
            int32_t data_8 = 0;
            temp_7 = *(data_1 + 0x1e);
            data_8 = *(data_1 + 0x1a);
            int32_t entity_7 = 0;
            entity_7 = *(data_1 + 0x16);
            item_20 = entity_7;
            item_24 = temp_7 * data_8;
            item_28 = param_2;
            item_2c = context;
            goto label_4b252e;
        }
    }

    int32_t* item_c_1 = param_3;
    Error_Show("'%s' is not a valid Texture file.");

    while (true)
        /* nop */
}
