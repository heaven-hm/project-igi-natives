// IGI native provenance: Display_SyncVSync_11 - 0x004966E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004966E0-Display_SyncVSync_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_11.h"
int32_t Display_SyncVSync_11(int32_t context, int32_t param_2, int32_t param_3, void* param_4)

{
    int32_t item_4 = param_3;
    context = g_6840e9;
    item_4 = 0;

    if (context)
    {
        int16_t data_1 = *(*(param_4 + 0xc) + 0x14);

        if (data_1 == 2 || !data_1)
        {
            int32_t data_4 = *(param_4 + 0x3c);
            data_4 = data_4 != 2;
            return data_4;
        }

        int32_t* data_2 = *(param_4 + 0x10);
        context = (*(*data_2 + 0x24))(data_2, &item_4);

        if (!context)
        {
            context = item_4;

            if (!(context & 2))
            {
                if (context & 1)
                {
                    context = 1;
                    return context;
                }
            }
            else if (context & 4)
            {
                context = Display_SetGammaRamp_10(param_4, *(param_4 + 0xc), 1);

                if (context)
                {
                    int32_t* source_2 = *(param_4 + 0x10);
                    context = (*(*source_2 + 0x30))(source_2, 0, 0, 1);

                    if (!context)
                    {
                        context = 1;
                        return context;
                    }
                }
            }
        }
    }

    context = 0;
    return context;
}
