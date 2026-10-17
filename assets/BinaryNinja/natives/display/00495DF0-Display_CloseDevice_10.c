// IGI native provenance: Display_CloseDevice_10 - 0x00495DF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495DF0-Display_CloseDevice_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_10.h"
int32_t __fastcall Display_CloseDevice_10(int32_t context)

{
    int32_t item_4 = context;
    int32_t result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            int32_t* data_val = g_5ca190;
            (*(*data_val + 0x10))(data_val, &item_4, 0);
            int32_t entity_1 = g_5ca1a4;
            result = g_5ca198;

            if (item_4 >= entity_1)
            {
                if (!result)
                {
                label_495e3a:

                    if (Display_CreateSurface_9(g_5ca190, result, entity_1) && !g_5ca1b0)
                        Display_OpenDevice_10();

                    result = g_5ca198 ^ g_5ca1a4;
                    g_5ca198 = result;
                }
            }
            else if (result)
                goto label_495e3a;
        }
    }

    return result;
}
