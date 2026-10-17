// IGI native provenance: AIFunction_GetGunnerStatus - 0x0044E5E0 - CFG score 85.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044E5E0-AIFunction_GetGunnerStatus.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetGunnerStatus.h"
int32_t AIFunction_GetGunnerStatus(int32_t context)

// Sig: int AIFunction_GetGunnerStatus()
// Note: RETURNS the status of this AI's gunner post (manned/state value). Takes
// no args.
{
    int32_t data_val = *(g_5bda58 + 0x3ac8);
    int32_t item_18;

    if (data_val == 0xffffffff)
    {
        item_18 = 0;
        int32_t item_10_1 = 0;
        int32_t item_c = 0;
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    int32_t data_2 = Script_ExecuteLevelScript_4(data_val);

    if (data_2)
    {
        item_18 = Weapon_ComputeAccuracy_4(data_2);
        int32_t item_10;
        item_10 = Weapon_ComputeAccuracy_4(data_2);
        char* item_8_2 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    int32_t item_28_1 = *(g_5bda58 + 0x3ac8);
    Warning_Show("StationaryGun ID #%d not defined");
    item_18 = data_2;
    int32_t item_10_2 = data_2;
    int32_t item_c_1 = data_2;
    char* item_8_1 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
