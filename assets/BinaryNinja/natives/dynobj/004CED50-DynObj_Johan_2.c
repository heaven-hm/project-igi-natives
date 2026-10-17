// Original IGI.EXE function: DynObj_Johan_2 (VA 0x004CED50; static CFG gate FAIL, CFG score 0.833).
#include "DynObj_Johan_2.h"
int32_t* DynObj_Johan_2(int32_t* context)

{
    int32_t* context_val = context;
    void* dest_val = &context_val[5];
    int32_t i = 0xffffffff;
    context_val[9] = 0;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    void item_20;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_20, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    Camera_UpdateViewCone_6(&item_20, "johan");
    int32_t item_24 = 0;
    int32_t i_1 = 1;
    int16_t* flagP = context_val + 0x3e;
    int32_t data_5;

    do
    {
        *flagP = 0x64 / (i_1 * i_1);
        int32_t* data_3 = DynObj_ParseConfigFile_13(&item_20);
        *context_val = data_3;

        if (!data_3)
        {
            context[0xf] = item_24;
            return context;
        }

        void* dest_3 = &item_20;
        int32_t j = 0xffffffff;
        flagP = &flagP[1];

        while (j)
        {
            bool flag_1_1 = 0 != *dest_3;
            dest_3 += 1;
            j -= 1;

            if (!flag_1_1)
                break;
        }

        void* dest_4 = &item_20;
        context_val = &context_val[1];
        int16_t temp_3;
        temp_3 = *((&item_24 + 3) + ~j - 1);
        int32_t j_1 = 0xffffffff;
        temp_3 += 1;

        while (j_1)
        {
            bool flag_2_1 = 0 != *dest_4;
            dest_4 += 1;
            j_1 -= 1;

            if (!flag_2_1)
                break;
        }

        data_5 = item_24 + 1;
        i_1 += 1;
        item_24 = data_5;
        *((&item_24 + 3) + ~j_1 - 1) = temp_3;
    } while (i_1 < 6);

    context[0xf] = data_5;
    return context;
}
