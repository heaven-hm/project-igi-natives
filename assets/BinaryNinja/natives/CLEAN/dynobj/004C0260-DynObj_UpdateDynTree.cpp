// IGI native provenance: DynObj_UpdateDynTree - 0x004C0260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0260-DynObj_UpdateDynTree.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_UpdateDynTree.h"
int32_t DynObj_UpdateDynTree(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* entity_1 = context;
    int32_t flagP = 0;
    int32_t i = entity_1[1];
    int32_t i_1 = 0;

    if (i > 0)
    {
        do
        {
            int32_t* j_1 = *(*entity_1 + flagP);
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    param_2(j_1[2], j_1[3], param_3);
                    j_1 = j;
                    j = *j;
                } while (j);

                entity_1 = context;
            }

            i = i_1 + 1;
            flagP += 0xc;
            i_1 = i;
        } while (i < entity_1[1]);
    }

    return i;
}
