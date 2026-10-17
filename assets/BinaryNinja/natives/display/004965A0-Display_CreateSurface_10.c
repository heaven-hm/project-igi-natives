// IGI native provenance: Display_CreateSurface_10 - 0x004965A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004965A0-Display_CreateSurface_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_10.h"
int32_t* Display_CreateSurface_10(int32_t* context)

{
    void item_20;
    Display_SoundInvalidFilename(&item_20, context);
    int32_t* result = Display_CheckCapabilities_10(0x5ca1b8, Display_CheckCapabilities_12(&item_20), Display_RestoreDevice_12(&item_20));

    if (result)
    {
        int32_t item_30_1 = 0x5ca1b8;
        Display_OpenDevice_11(result);
        int32_t* data_2 = result[9];

        if (data_2)
            (*(*data_2 + 8))(data_2);

        void* data_3 = result[0xa];

        if (data_3)
        {
            Sys_ExecuteBytecode_2(data_3);
            result[0xa] = 0;
        }

        Sys_ExecuteBytecode_2(result);
        result = Sys_CheckHeap_16(context);

        if (result)
            return Resource_Unload(context);
    }

    return result;
}
