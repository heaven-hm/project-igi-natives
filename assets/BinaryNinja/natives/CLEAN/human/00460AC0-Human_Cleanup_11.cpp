// IGI native provenance: Human_Cleanup_11 - 0x00460AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460AC0-Human_Cleanup_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_11.h"
int32_t Human_Cleanup_11(void* context)

{
    char result = *(context + 0xcf6);

    if (result)
        return result;

    int32_t item_c = 0;
    int32_t item_8_1 = Level_StartMission_4();
    int32_t item_4_1 = 2;
    uint32_t data_2 = DynObj_UpdateDynTree_12();
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    return (*(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0))(context, &item_c);
}
