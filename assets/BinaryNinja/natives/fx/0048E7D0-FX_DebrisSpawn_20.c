// IGI native provenance: FX_DebrisSpawn_20 - 0x0048E7D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E7D0-FX_DebrisSpawn_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_20.h"
int32_t* FX_DebrisSpawn_20(int32_t context, int32_t* param_2)

{
    if (!*(param_2[0xa] + 0x14))
        AI_AlertAllies_3(context);
    else
        AI_SelectTarget_3(context);

    void* data_1 = param_2[0xa];
    int32_t entity_1 = *(data_1 + 0xc);
    int32_t* data_2;

    if (entity_1 != 0xffffffff)
    {
    label_48e80e:
        data_2 = AI_MoveToNode_3(context, entity_1, nullptr, 0);

        if (!data_2)
            return data_2;

        void* entity_2 = param_2[0xa];
        void* item_c_1 = entity_2;
        void* data_3 = AI_WriteChannel(context, 4, *(entity_2 + 8));
        *(param_2[0xa] + 0xc) = 0xffffffff;
        return data_3;
    }

    if (*(data_1 + 0x10) == entity_1)
        return AI_CombatTarget_2(context, param_2);

    if (entity_1 != entity_1)
        goto label_48e80e;

    data_2 = *(data_1 + 0x10);

    if (data_2 == 0xffffffff)
        return data_2;

    data_2 = AI_MoveToNode_3(context, data_2, nullptr, 0);

    if (!data_2)
        return data_2;

    *(param_2[0xa] + 0x10) = 0xffffffff;
    return AI_CombatTarget_2(context, param_2);
}
