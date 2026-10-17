// IGI native provenance: InputBox_LoadParameters - 0x0041D720 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D720-InputBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputBox_LoadParameters.h"
int32_t InputBox_LoadParameters(void* context)

{
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(context + 0x44)) - 8) * 0.125f;
    long double f2 = 0.0f;
    fpu_val_7_1 - f2;
    float item_18c;

    item_18c = *(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.0f : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(context);

    if (*(context + 0x19c))
    {
        char* dest_3 = context + 0x54;
        int32_t data_9 = *(context + 0x20) + 2;
        int32_t data_11 = *(context + 0x24) + 2;

        if (*(context + 0x196))
        {
            int32_t i = 0xffffffff;
            int32_t data_13 = 0;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            char item_100[0x100];

            if (~i - 1 > 0)
            {
                memset(memset(&item_100, 0x2a2a2a2a, (~i - 1) & 0xfffffffc),
                    0x2a, (~i - 1) & 3);
                data_13 = ~i - 1;
            }

            item_100[data_13] = 0;
            dest_3 = &item_100;
        }

        Sys_FreeMemory_18(*(context + 0x19c), dest_3);
        *(*(context + 0x19c) + 4) = data_9;
        *(*(context + 0x19c) + 8) = data_11;
        void* data_16 = *(context + 0x19c);
        *(data_16 + 0x24) |= 0x80000;
        *(*(context + 0x19c) + 0x10) = item_18c;
        Sys_CloseFileStream_18(*(context + 0x19c));

        if (*(context + 0x195) && ((Frames_GetUpdateCounter() << 1) / Frames_Get()) & 1)
        {
            void item_12c;
            Camera_ApplyLineFilter_5(&item_12c, dest_3, *(context + 0x1a0));
            int32_t data_25 = *(context + 0x1a0);
            int32_t* temp_7 = *(context + 0x19c);
            *(&item_12c + data_25) = 0x61;
            char item_12b[0x2b];
            item_12b[data_25] = 0;
            Sys_FreeMemory_18(temp_7, &item_12c);
            int32_t item_138_1 = 0x3f800000;
            int32_t data_28 = data_9 + Sys_CheckHeap_21(*(context + 0x19c)) - 6;
            int32_t temp_10 = g_a84a54;
            int32_t item_15c_1 = 0x3f800000;
            float item_174 = data_28;
            long double fpu_val_7_6 = data_11 + 0xa;
            int32_t item_134_1 = 0x3f800000;
            int32_t item_158_1 = 0x3f800000;
            float item_170_1 = fpu_val_7_6;
            int32_t item_130_1 = 0x3f800000;
            int32_t item_154_1 = 0x3f800000;
            int32_t item_144_1 = 0;
            int32_t item_168_1 = 0;
            float item_150_1 = data_28 + 6;
            int32_t item_140_1 = 0;
            int32_t item_164_1 = 0;
            float item_14c_1 = fpu_val_7_6;
            int32_t item_148_1 = 0x3f800000;
            int32_t item_16c_1 = 0x3f800000;
            int32_t item_184_1 = 0;
            int32_t item_188 = 1;
            int32_t item_180_1 = 0;
            int32_t item_17c_1 = 2;
            float* item_178_1 = &item_174;
            g_a84a50 = 0;
            g_a84a58 = 0;
            (*((temp_10 << 2) + &g_a94e84))(&item_188);
        }
    }

    return Menu_DrawWidget_14(context, 0.5f, item_18c, *(context + 0x4d));
}
