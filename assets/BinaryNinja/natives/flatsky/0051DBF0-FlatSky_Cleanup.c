// Original IGI.EXE function: FlatSky_Cleanup (VA 0x0051DBF0; static CFG gate PASS, CFG score 1.000).
#include "FlatSky_Cleanup.h"
int32_t FlatSky_Cleanup(void* context)

{
    long double fpu7 = *(context + 0x260);
    long double f0 = 0.0f;
    fpu7 - f0;
    long double fpu_val_7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_2 = *(context + 0x260);
        long double f1_1 = 1.0f;
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_1 = *(context + 0x260);
        else
            fpu_val_7_1 = 1.0f;
    }
    else
        fpu_val_7_1 = 0.0f;

    *(context + 0x260) = fpu_val_7_1;
    long double fpu_val_7_3 = *(context + 0x264);
    long double f2 = 0.0f;
    fpu_val_7_3 - f2;
    long double fpu_val_7_4;

    if (!(*(&((fpu_val_7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_5 = *(context + 0x264);
        long double f3_1 = 1.0f;
        fpu_val_7_5 - f3_1;

        if (*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_4 = *(context + 0x264);
        else
            fpu_val_7_4 = 1.0f;
    }
    else
        fpu_val_7_4 = 0.0f;

    *(context + 0x264) = fpu_val_7_4;
    long double fpu_val_7_6 = *(context + 0x268);
    long double f4 = 0.0f;
    fpu_val_7_6 - f4;
    long double fpu_val_7_7;

    if (!(*(&((fpu_val_7_6 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_8 = *(context + 0x268);
        long double f5_1 = 1.0f;
        fpu_val_7_8 - f5_1;

        if (*(&((fpu_val_7_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_7 = *(context + 0x268);
        else
            fpu_val_7_7 = 1.0f;
    }
    else
        fpu_val_7_7 = 0.0f;

    *(context + 0x268) = fpu_val_7_7;
    char* item_210 = context + 0x148;
    char* item_214 = &g_567c74;
    void item_200;
    Game_DataSymbolLoad(&item_200, "LOCAL:%s%s");

    if (*(context + 0x148))
    {
        char* dest_1 = context + 0x48;
        char* data_3 = Camera_UpdateViewCone_6(dest_1, context + 0x148);
        int32_t i;
        int32_t i_1;

        if (data_3)
        {
            i = 0xffffffff;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_1;
                dest_1 = &dest_1[1];
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            char* dest_2 = context + 0x148;
            i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_1_1 = 0 != *dest_2;
                dest_2 = &dest_2[1];
                i_1 -= 1;

                if (!flag_1_1)
                    break;
            }
        }

        if (!data_3 || ~i_1 - 1 != ~i - 1)
        {
            char* data_4 = Camera_UpdateViewCone_6(context + 0x148, "File not found");
            int32_t data_5;

            if (!data_4)
                data_5 = Sys_AllocateMemory_16(&item_200);

            if (data_4 || !data_5)
                Game_DataSymbolLoad(context + 0x148, "File not found");
            else
            {
                if (*(context + 0x44))
                {
                    Struct_Clear36(context + 0x20);
                    *(context + 0x44) = 0;
                }

                Sys_SIsNotAValidTextureF(context + 0x20, 0, &item_200);
                *(context + 0x44) = 1;
            }
        }
    }

    return Game_DataSymbolLoad(context + 0x48, context + 0x148);
}
