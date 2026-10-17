// Original IGI.EXE function: FX_FragmentSimulate_27 (VA 0x0048F360; static CFG gate PASS, CFG score 0.867).
#include "FX_FragmentSimulate_27.h"
void* FX_FragmentSimulate_27(char* context, int32_t param_2)

{
    int32_t dest_val = FX_DebrisSpawn_21();
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    void item_200;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_200, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    void* result = Camera_SetFieldOfView_6(&item_200, " \t");
    void* result_2 = result;
    void* result_1 = result_2;

    if (result_2)
    {
        while (true)
        {
            void* result_3 = result_2;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_2_1 = 0 != *result_3;
                result_3 += 1;
                i_1 -= 1;

                if (!flag_2_1)
                    break;
            }

            char* dest_3 = context;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_3_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                i_2 -= 1;

                if (!flag_3_1)
                    break;
            }

            if (~i_1 - 1 >= ~i_2 - 1)
            {
                char* dest_4 = context;
                int32_t i_3 = 0xffffffff;
                int32_t i_4 = 0;
                char item_205_1 = 1;

                while (i_3)
                {
                    bool flag_4_1 = 0 != *dest_4;
                    dest_4 = &dest_4[1];
                    i_3 -= 1;

                    if (!flag_4_1)
                        break;
                }

                if (~i_3 - 1 <= 0)
                    goto label_48f43f;

                char* temp_2 = context;
                int32_t j;

                do
                {
                    if (!item_205_1)
                        goto label_48f45f;

                    char data_3 = *(result_2 - context + temp_2);
                    char entity_10 = *temp_2;

                    if (data_3 >= 0x61 && data_3 <= 0x7a)
                        data_3 -= 0x20;

                    if (entity_10 >= 0x61 && entity_10 <= 0x7a)
                        entity_10 -= 0x20;

                    if (data_3 != entity_10)
                        item_205_1 = 0;

                    i_4 += 1;
                    char* dest_5 = context;
                    j = 0xffffffff;
                    temp_2 = &temp_2[1];

                    while (j)
                    {
                        bool flag_6_1 = 0 != *dest_5;
                        dest_5 = &dest_5[1];
                        j -= 1;

                        if (!flag_6_1)
                            break;
                    }
                } while (i_4 < ~j - 1);

                if (item_205_1)
                {
                    result_2 = result_1;
                label_48f43f:
                    char* dest_6 = context;
                    int32_t i_5 = 0xffffffff;

                    while (i_5)
                    {
                        bool flag_5_1 = 0 != *dest_6;
                        dest_6 = &dest_6[1];
                        i_5 -= 1;

                        if (!flag_5_1)
                            break;
                    }

                    param_2(~i_5 - 1 + result_2);
                }
            }

        label_48f45f:
            result = Camera_SetFieldOfView_6(nullptr, " \t");
            result_1 = result;

            if (!result)
                break;

            result_2 = result_1;
        }
    }

    return result;
}
