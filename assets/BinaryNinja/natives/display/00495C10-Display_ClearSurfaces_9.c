// IGI native provenance: Display_ClearSurfaces_9 - 0x00495C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495C10-Display_ClearSurfaces_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_9.h"
uint32_t Display_ClearSurfaces_9(HMIXEROBJ context, void* param_2, void* param_3, int32_t param_4, int32_t param_5)

{
    MIXERCONTROLDETAILS pmxcd;
    pmxcd.cbStruct = 0x18;
    pmxcd.cbDetails = 4;
    int32_t entity_1 = *(param_3 + 0x10);
    pmxcd.dwControlID = *(param_3 + 4);
    int32_t data_1 = *(param_2 + 0x1c);
    pmxcd.cChannels = data_1;
    *(&pmxcd. + 0) = entity_1;
    int32_t item_20;
    pmxcd.paDetails = &item_20;

    if (data_1 > 0)
        item_20 = param_4;

    if (data_1 > 1)
        int32_t item_1c_1 = param_5;

    return mixerSetControlDetails(context, &pmxcd, 0x80000000);
}
