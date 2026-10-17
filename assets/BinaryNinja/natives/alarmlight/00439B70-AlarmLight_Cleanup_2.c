// IGI native provenance: AlarmLight_Cleanup_2 - 0x00439B70 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00439B70-AlarmLight_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Cleanup_2.h"
int32_t AlarmLight_Cleanup_2(float context)

{
    void* source_val = *(context + 0x130);
    int32_t result;
    result = *(source_val + 0x1a0);

    if (result)
    {
        result = *(source_val + 0x1a1);

        if (!result)
        {
            long double fpu_val_7_2 = *(context + 0x138) + 0.104719758f;
            *(context + 0x138) = fpu_val_7_2;
            float item_50;
            Sys_CloseFileStream_12(&item_50, fpu_val_7_2);
            float item_44;
            float item_38;
            long double fpu_val_7_6 =
                item_44 * *(context + 0x10c) + item_38 * *(context + 0x110) + item_50 * *(context + 0x108);
            float item_4c;
            float item_40;
            float item_34;
            float item_24_1 =
                item_40 * *(context + 0x10c) + item_34 * *(context + 0x110) + item_4c * *(context + 0x108);
            float item_48;
            float item_3c;
            float item_30;
            float item_20_1 =
                item_3c * *(context + 0x10c) + item_30 * *(context + 0x110) + item_48 * *(context + 0x108);
            long double fpu_val_6_16 =
                item_38 * *(context + 0x11c) + item_50 * *(context + 0x114) + item_44 * *(context + 0x118);
            float item_18_1 =
                item_34 * *(context + 0x11c) + item_4c * *(context + 0x114) + item_40 * *(context + 0x118);
            float item_14_1 =
                item_30 * *(context + 0x11c) + item_48 * *(context + 0x114) + item_3c * *(context + 0x118);
            long double fpu_val_5_24 =
                item_44 * *(context + 0x124) + item_38 * *(context + 0x128) + item_50 * *(context + 0x120);
            int32_t item_2c;
            result = *(context + 0x12c) + item_2c + 1;
            float item_c_1 =
                item_40 * *(context + 0x124) + item_34 * *(context + 0x128) + item_4c * *(context + 0x120);
            float item_8_1 =
                item_3c * *(context + 0x124) + item_30 * *(context + 0x128) + item_48 * *(context + 0x120);
            item_50 =
                fpu_val_7_6 * *(source_val + 0x70) + fpu_val_5_24 * *(source_val + 0x78) + fpu_val_6_16 * *(source_val + 0x74);
            float item_4c_1 =
                item_24_1 * *(source_val + 0x70) + item_c_1 * *(source_val + 0x78) + item_18_1 * *(source_val + 0x74);
            float item_48_1 =
                item_20_1 * *(source_val + 0x70) + item_8_1 * *(source_val + 0x78) + item_14_1 * *(source_val + 0x74);
            float item_44_1 =
                fpu_val_7_6 * *(source_val + 0x7c) + fpu_val_5_24 * *(source_val + 0x84) + fpu_val_6_16 * *(source_val + 0x80);
            float item_40_1 =
                item_24_1 * *(source_val + 0x7c) + item_c_1 * *(source_val + 0x84) + item_18_1 * *(source_val + 0x80);
            float item_3c_1 =
                item_20_1 * *(source_val + 0x7c) + item_8_1 * *(source_val + 0x84) + item_14_1 * *(source_val + 0x80);
            int32_t item_2c_1 = *(source_val + 0x94) + result + 1;
            float item_38_1 =
                fpu_val_5_24 * *(source_val + 0x90) + fpu_val_6_16 * *(source_val + 0x8c) + fpu_val_7_6 * *(source_val + 0x88);
            float item_34_1 =
                item_c_1 * *(source_val + 0x90) + item_18_1 * *(source_val + 0x8c) + item_24_1 * *(source_val + 0x88);
            float item_30_1 =
                item_8_1 * *(source_val + 0x90) + item_14_1 * *(source_val + 0x8c) + item_20_1 * *(source_val + 0x88);
            memcpy(context + 0x70, &item_50, 0x28);
        }
    }

    int32_t* i_1 = *(context + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t temp_3 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i;
                void* data_5;

                if (!source_1)
                    data_5 = nullptr;
                else
                {
                    int32_t data_2 = *source_1;
                    int32_t data_3 = -(data_2);
                    data_5 = (data_3 - data_3) & source_1;
                }

                *((temp_3 << 2) + &g_afa6e0) = data_5;
                int32_t temp_4 = temp_3 + 1;
                int32_t data_6 = 0;
                g_afa7e0 = temp_4;
                data_6 = i[7];
                result = *((data_6 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_4 = g_afa7e0;
                }

                i = *((temp_4 << 2) + &g_afa6dc);
                temp_3 = temp_4 - 1;
                g_afa7e0 = temp_3;
            } while (i);
        }
    }

    return result;
}
