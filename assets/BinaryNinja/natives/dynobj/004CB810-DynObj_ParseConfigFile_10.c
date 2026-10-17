// Original IGI.EXE function: DynObj_ParseConfigFile_10 (VA 0x004CB810; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_10.h"
int32_t DynObj_ParseConfigFile_10(float context, double* param_2)

{
    double* source_val;

    if (g_b97d20)
        source_val = param_2;
    else
    {
        DynObj_ParseConfigFile_6();
        source_val = param_2;
        DynObj_ParseConfigFile_11(context, 0xd, 0, source_val, 0x20000000);
    }

    int32_t item_10 = 0;
    int32_t data_1 = g_b97df8 - 1;
    int32_t item_14 = data_1;

    if (data_1 >= 0)
    {
        int32_t* item_18_1 = (data_1 << 2) + &g_b97da0;

        while (true)
        {
            int32_t temp_2 = *item_18_1;
            char flagP1 = *(temp_2 * 0x30 + 0xba508c);
            int32_t dest_1 = *(temp_2 * 0x30 + 0xba50a8);
            long double fpu_val_7_3 = (*source_val - *(temp_2 * 0x30 + 0xba5098)) * *(temp_2 * 0x30 + 0xba5090);
            context = (source_val[1] - *(temp_2 * 0x30 + 0xba50a0)) * *(temp_2 * 0x30 + 0xba5090);
            int32_t item_8_1 = fpu_val_7_3;
            uint32_t source_1 = context;
            long double fpu_val_7_4 = fpu_val_7_3 - item_8_1;
            uint32_t dest_2 = dest_1 + (source_1 << (flagP1 & 0x1f));
            long double fpu_val_6_7 = context - source_1;
            context = *((item_8_1 >> 3) + dest_2) >> (item_8_1 & 7) & 1;
            int32_t dest_4 = (item_8_1 + 1) >> 3;
            long double fpu_val_5_1 = context;
            char entity_2 = (item_8_1 + 1) & 7;
            context = entity_2;
            int32_t source_4 = ((source_1 + 1) << (flagP1 & 0x1f)) + dest_1;
            uint32_t item_8_2 = *(dest_4 + source_4) >> (context & 0x1f) & 1;
            context = *((item_8_1 >> 3) + source_4) >> (item_8_1 & 7) & 1;
            long double fpu_val_5_2 =
                fpu_val_5_1 + ((*(dest_4 + dest_2) >> (entity_2 & 0x1f) & 1) - fpu_val_5_1) * fpu_val_7_4;
            long double fpu_val_4_10 =
                ((item_8_2 - context) * fpu_val_7_4 + context - fpu_val_5_2) * fpu_val_6_7 + fpu_val_5_2;
            long double f0_1 = 0.300000012f;
            fpu_val_4_10 - f0_1;
            bool c1;

            if (!(*(&((fpu_val_4_10 < f0_1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                | (FCMP_UO(fpu_val_4_10, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_4_10 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                int32_t entity_6 = 0;
                entity_6 = *(temp_2 * 0x30 + 0xba5080);
                item_10 = entity_6;
                break;
            }

            bool flag_4_1 = item_14 - 1 >= 0;
            item_14 -= 1;
            item_18_1 -= 4;

            if (!flag_4_1)
                break;

            source_val = param_2;
        }
    }

    if (!g_b97d20)
        DynObj_ParseConfigFile_6();

    int32_t result = 0;
    result = *(item_10 * 0x384 + &g_c28fe0);
    return result;
}
