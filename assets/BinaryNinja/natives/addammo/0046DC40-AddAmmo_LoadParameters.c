// IGI native provenance: AddAmmo_LoadParameters - 0x0046DC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DC40-AddAmmo_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AddAmmo_LoadParameters.h"
int32_t AddAmmo_LoadParameters(int32_t* context)

{
    void* dest_val = context[5];
    int32_t data_val = AI_UpdateOrders_17();
    int16_t item_c = data_val;
    data_val = *(dest_val + 0x1c);

    if (TaskType_IsDerivedFrom(data_val, item_c) && Weapon_CycleFireMode_7(context[8]))
        Weapon_EjectShell_8(dest_val + 0x340, context[8], context[0x11]);

    return QTask_FindType(context);
}
