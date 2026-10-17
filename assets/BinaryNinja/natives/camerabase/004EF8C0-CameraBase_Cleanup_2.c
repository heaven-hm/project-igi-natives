// Original IGI.EXE function: CameraBase_Cleanup_2 (VA 0x004EF8C0; static CFG gate FAIL, CFG score 0.733).
#include "CameraBase_Cleanup_2.h"
int32_t CameraBase_Cleanup_2(float* context, void* param_2)

{
    char* data_1 = *(param_2 + 4);
    char* item_20 = data_1;

    if (*data_1)
    {
        char i;

        do
        {
            i = data_1[1];
            data_1 = &data_1[1];
        } while (i);
        item_20 = data_1;
    }

    int32_t i_1 = 0;
    float* item_1c = context;

    do
    {
        double item_38_1 = *item_1c;
        void item_18;
        Game_DataSymbolLoad(&item_18, "%f");
        void* dest_1 = &item_18;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool flag_3_1 = 0 != *dest_1;
            dest_1 += 1;
            j -= 1;

            if (!flag_3_1)
                break;
        }

        int32_t entity_2 = ~j;
        char* dest_3 = item_20;
        int32_t j_1 = 0xffffffff;

        while (j_1)
        {
            bool flag_4_1 = 0 != *dest_3;
            dest_3 = &dest_3[1];
            j_1 -= 1;

            if (!flag_4_1)
                break;
        }

        int32_t source_2;
        int32_t dest_5;
        dest_5 = memcpy(dest_3 - 1, dest_1 - entity_2, entity_2 & 0xfffffffc);
        memcpy(dest_5, source_2, entity_2 & 3);

        if (i_1 != 0xa)
        {
            void* dest_6 = &g_547a44;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool flag_1_1 = 0 != *dest_6;
                dest_6 += 1;
                j_2 -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t entity_7 = ~j_2;
            char* dest_8 = item_20;
            int32_t j_3 = 0xffffffff;

            while (j_3)
            {
                bool flag_2_1 = 0 != *dest_8;
                dest_8 = &dest_8[1];
                j_3 -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t source_4;
            int32_t dest_10;
            dest_10 = memcpy(dest_8 - 1, dest_6 - entity_7, entity_7 & 0xfffffffc);
            memcpy(dest_10, source_4, entity_7 & 3);
        }

        i_1 += 1;
        item_1c = &item_1c[1];
    } while (i_1 < 0xb);

    return 0;
}
