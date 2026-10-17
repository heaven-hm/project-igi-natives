// Original IGI.EXE function: Camera_ApplyWideScreen_28 (VA 0x004AD73D; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_28.h"
uint32_t __fastcall Camera_ApplyWideScreen_28(int32_t context)

{
    int32_t item_8 = context;
    uint32_t arg_4;

    if (!g_9361e4)
    {
        uint32_t data_1 = arg_4;

        if (data_1 >= 0x61 && data_1 <= 0x7a)
            return data_1 - 0x20;

        return data_1;
    }

    uint32_t context_1 = arg_4;
    BOOL data_2;

    if (context_1 < 0x100)
    {
        if (g_54427c <= 1)
        {
            wchar16 (* data_3)[0x21] = g_544070;
            data_3 = (*data_3)[context_1];
            data_2 = data_3 & 2;
        }
        else
        {
            uint32_t item_14_1 = context_1;
            int32_t data_val;
            int32_t entry_edx;
            data_2 = Camera_ApplyBandFilter_12(data_val, entry_edx, context, 2);
        }
    }

    if (context_1 >= 0x100 || data_2)
    {
        char data_5 = context_1 >> 8;
        void* item_10_1;

        if (!(*(&(**&g_544070)[data_5] + 1) & 0x80))
        {
            *(&arg_4 + 1) = 0;
            arg_4 = context_1;
            item_10_1 = 1;
        }
        else
        {
            *(&arg_4 + 2) = 0;
            arg_4 = data_5;
            *(&arg_4 + 1) = context_1;
            item_10_1 = 2;
        }

        int32_t data_7 = Camera_UpdateViewCone_27(g_9361e4, 0x200, &arg_4, item_10_1, &item_8, 3, 0, 1);

        if (data_7)
        {
            if (data_7 != 1)
                return *(&item_8 + 1) << 8 | item_8;

            return item_8;
        }
    }

    return context_1;
}
