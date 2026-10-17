// Original IGI.EXE function: Sys_ResolveSymbol_28 (VA 0x004BD220; static CFG gate PASS, CFG score 0.867).
#include "Sys_ResolveSymbol_28.h"
void** Sys_ResolveSymbol_28(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t* saved_ebp_1 = context;
    int32_t* saved_frame = saved_ebp_1;
    void* entity_val;
    int32_t temp_val;
    int32_t* data_1 = Resource_Load(&context, temp_val, entity_val, &context);

    if (data_1 && context >= 0x3c && *data_1 == 0x4c && *(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f
        && *(data_1 + 3) == 0x50 && data_1[1] == 8)
    {
        if (data_1[2] >= 5)
        {
            int32_t flagP = param_2;

            if (!flagP)
                flagP = data_1[0xd];

            int32_t data_4 = param_3;

            if (!data_4)
            {
                data_4 = data_1[0xe];
                param_3 = data_4;
            }

            if (!flagP)
                flagP = 0x800;

            if (!data_4)
            {
                data_4 = 0x100;
                param_3 = 0x100;
            }

            uint32_t flagP2 = (flagP + 3) >> 2;
            void* dest_val = ((flagP2 + (data_1[5] << 1) + data_4) << 2) + 0x46c;
            void** result = Mem_Alloc(dest_val, 4);
            memset(memset(result, 0, dest_val & 0xfffffffc), 0, dest_val & 3);
            *result = data_1[0xb] + data_1;
            result[1] = data_1[0xc];
            result[9] = &result[0x11b];
            result[0x11a] = data_1;
            void* entity_9 = &result[0x11b + flagP2];
            result[0xa] = entity_9;
            result[0x9a] = 0;
            void* entity_10 = entity_9 + (param_3 << 2);
            result[0x1a] = 0;
            result[0x18] = entity_10;
            int32_t dest_3 = data_1[5];
            result[6] = flagP2;
            result[7] = param_3;
            result[2] = flagP2;
            result[0x19] = entity_10 + (dest_3 << 2);
            result[3] = param_3;

            if (data_1[5])
            {
                result[0x16] = data_1[3] + data_1;
                result[0x17] = data_1[4] + data_1;
                result[0x14] = data_1[5];
                result[0x15] = data_1[6];
            }

            if (data_1[9])
            {
                result[0x10] = data_1[7] + data_1;
                result[0x11] = data_1[8] + data_1;
                result[0xe] = data_1[9];
                result[0xf] = data_1[0xa];
            }

            return result;
        }

        Resource_Unload(saved_ebp_1);
    }

    return 0;
}
