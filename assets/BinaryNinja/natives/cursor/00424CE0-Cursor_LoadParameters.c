// Original IGI.EXE function: Cursor_LoadParameters (VA 0x00424CE0; static CFG gate PASS, CFG score 1.000).
#include "Cursor_LoadParameters.h"
int32_t Cursor_LoadParameters(void* context)

{
    int32_t data_5;
    void* source_val;
    int32_t dest_2;

    if (FX_FragmentSimulate_23())
    {
        long double fpu_val_7_1 = g_bc20f8;
        source_val = context;
        int32_t entity_2 = *(source_val + 0x28);
        *(source_val + 0x24) += g_bc20f4 * 320.0f;
        bool flag_0_1 = *(source_val + 0x24) >= 0;
        *(source_val + 0x28) = entity_2 + fpu_val_7_1 * 240.0f;
        int32_t data_10;

        if (flag_0_1)
        {
            int32_t dest_3 = *(source_val + 0x24);

            if (g_c28b44 - 1 >= dest_3)
                data_10 = dest_3;
            else
                data_10 = g_c28b44 - 1;
        }
        else
            data_10 = 0;

        *(source_val + 0x24) = data_10;

        if (*(source_val + 0x28) >= 0)
        {
            dest_2 = *(source_val + 0x28);

            if (g_c28b48 - 1 >= dest_2)
                data_5 = dest_2;
            else
                data_5 = g_c28b48 - 1;
        }
        else
            data_5 = 0;
    }
    else
    {
        source_val = context;
        int32_t data_1 = g_57bc58;
        *(source_val + 0x24) = data_1;
        *(source_val + 0x28) = g_57bc5c;
        int32_t data_2;

        if (data_1 >= 0)
        {
            int32_t dest_1 = *(source_val + 0x24);

            if (g_c28b44 - 1 >= dest_1)
                data_2 = dest_1;
            else
                data_2 = g_c28b44 - 1;
        }
        else
            data_2 = 0;

        *(source_val + 0x24) = data_2;

        if (*(source_val + 0x28) >= 0)
        {
            dest_2 = *(source_val + 0x28);

            if (g_c28b48 - 1 >= dest_2)
                data_5 = dest_2;
            else
                data_5 = g_c28b48 - 1;
        }
        else
            data_5 = 0;
    }
    int32_t temp_6 = *(source_val + 0x3c);
    *(source_val + 0x28) = data_5;
    *(source_val + 0x38) = temp_6;
    int32_t result = *g_c28f8c & 1;
    *(source_val + 0x3c) = result;
    return result;
}
