// IGI native provenance: AIFunction_GetGunnerID - 0x0044E4B0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E4B0-AIFunction_GetGunnerID.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetGunnerID.h"
int32_t AIFunction_GetGunnerID(int32_t context)

// Sig: int AIFunction_GetGunnerID()
// Note: RETURNS this AI's assigned gunner slot id. Takes no args.
{
    int32_t data_1 = *(g_5bda58 + 0x3ac8);
    int32_t item_18 = data_1;
    char* item_8 = &g_567c74;
    double item_10 = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
