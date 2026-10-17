// IGI native provenance: MipMapControl_LoadParameters - 0x0051EE10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051EE10-MipMapControl_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MipMapControl_LoadParameters.h"
int32_t MipMapControl_LoadParameters(void* context)

{
    int32_t data_val = Display_CheckCapabilities_7();
    int32_t result = Sys_ReadFileBlock_3();

    if (result == data_val)
    {
        int32_t* data_1 = g_5ca114;
        result = (*(*data_1 + 0x94))(data_1, 0, 0x13, *(context + 0x20));

        if (result)
        {
            void item_400;
            Game_DataSymbolLoad(&item_400, "Couldn't set texturestagestate");
            int32_t item_414_2 = DDERR_GENERIC(result);
            void* item_418 = &item_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    return result;
}
