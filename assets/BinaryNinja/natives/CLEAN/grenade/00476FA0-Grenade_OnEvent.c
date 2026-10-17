// IGI native provenance: Grenade_OnEvent - 0x00476FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476FA0-Grenade_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Grenade_OnEvent.h"
struct status_msg* Grenade_OnEvent(int32_t* context )

{
    int32_t* source_val = context;
    int32_t dest_val = 0;
    int32_t* temp_val = nullptr;
    void* entity_val = *(*source_val + 0x14);
    dest_val = *(entity_val + 0x1c);
    int32_t data_6 = *(((*g_5be3b8 * 0x180 + dest_val) << 2) + &g_a96ae0);

    if (data_6)
    {
        data_6(entity_val, &context);
        temp_val = context;
    }

    return Throwable_Create(Script_FormatString(), source_val[1], source_val[2], source_val[3], source_val[4], source_val[8], temp_val);
}
