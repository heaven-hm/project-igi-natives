// Original IGI.EXE function: CameraBase_Cleanup_5 (VA 0x004F01C0; static CFG gate PASS, CFG score 0.889).
#include "CameraBase_Cleanup_5.h"
int32_t CameraBase_Cleanup_5(int32_t* context, int32_t* param_2)

{
    void* data_val = *context;

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        *context = 0;
    }

    Script_TooFewParametersInLi(param_2, 1);
    void item_400;
    Sys_ResolveSymbol_23(param_2[1], *param_2, &item_400, 0x400);
    void* dest_val = &item_400;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    if (~i != 1)
    {
        void* dest_1 = &item_400;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        void* data_1 = Mem_Alloc(~i_1, 4);
        void* dest_2 = &item_400;
        int32_t i_2 = 0xffffffff;
        *context = data_1;

        while (i_2)
        {
            bool flag_2_1 = 0 != *dest_2;
            dest_2 += 1;
            i_2 -= 1;

            if (!flag_2_1)
                break;
        }

        int32_t entity_3 = ~i_2;
        int32_t source_2;
        int32_t dest_5;
        dest_5 = memcpy(data_1, dest_2 - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_5, source_2, entity_3 & 3);
    }

    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
