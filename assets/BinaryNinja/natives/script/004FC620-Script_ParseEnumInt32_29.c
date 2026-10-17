// Original IGI.EXE function: Script_ParseEnumInt32_29 (VA 0x004FC620; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_29.h"
int32_t Script_ParseEnumInt32_29(void* context, int32_t param_2, char param_3, double* param_4)

{
    int32_t i = 0;
    int32_t* item_cd4 = nullptr;
    int32_t i_1 = 0;
    double item_c68[0x16];
    double (* temp_val)[0x16] = &item_c68;
    int32_t item_cc0[0x16];
    int32_t (* dest_val)[0x16] = &item_cc0;
    void item_bb0;
    void* entity_val = &item_bb0;
    float* data_val = context + 0x1d0;

    do
    {
        if (*(data_val + 5) && data_val[1])
        {
            long double fpu_val_7_2 = *(context + 0x78) * *data_val;
            long double fpu_val_6_2 = *(context + 0x74) * data_val[-1];
            *dest_val = i;
            *temp_val = 0;
            long double fpu_val_6_4 = *(context + 0x70) * data_val[-2];
            *(temp_val + 4) = 0x40d40000;
            item_cd4 += 1;
            i = i_1;
            entity_val += 0x18;
            dest_val = &(*dest_val)[1];
            temp_val = &(*temp_val)[1];
            long double fpu_val_6_8 =
                *(context + 0x84) * *data_val + *(context + 0x80) * data_val[-1] + *(context + 0x7c) * data_val[-2];
            long double fpu_val_6_12 =
                *(context + 0x90) * *data_val + *(context + 0x8c) * data_val[-1] + *(context + 0x88) * data_val[-2];
            *(entity_val - 0x20) = fpu_val_7_2 + fpu_val_6_2 + fpu_val_6_4;
            *(entity_val - 0x18) = fpu_val_6_8;
            *(entity_val - 0x10) = fpu_val_6_12;
            *(entity_val - 0x20) = *(context + 0x20) + *(entity_val - 0x20);
            *(entity_val - 0x18) = *(context + 0x28) + *(entity_val - 0x18);
            *(entity_val - 0x10) = *(context + 0x30) + *(entity_val - 0x10);
        }

        i += 1;
        data_val = &data_val[0xe];
        i_1 = i;
    } while (i < 0x16);

    if (item_cd4)
    {
        double item_bb8;
        void item_9a8;
        DynObj_UpdateDynTree_10(param_2, &item_9a8, &item_bb8, item_cd4, &item_c68, param_3, param_4, 0xffffffff);
        int32_t data_2 = 0;

        if (item_cd4 > 0)
        {
            void item_958;
            int32_t* entity_2 = &item_958;

            do
            {
                if (entity_2[2] && *entity_2)
                {
                    *(context + item_cc0[data_2] * 0x38 + 0x1d6) = 1;
                    *(context + 0x1b8) += 1;
                    return 0;
                }

                data_2 += 1;
                entity_2 = &entity_2[0x1c];
            } while (data_2 < item_cd4);
        }
    }

    return 1;
}
