// IGI native provenance: GunShot_Unpack - 0x0047C420 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0047C420-GunShot_Unpack.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunShot_Unpack.h"
int32_t GunShot_Unpack(int32_t* context )

{
    int32_t data_val = 0;
    void* entity_val = *context;
    void* dest_val = context[8];
    int32_t context_val = context[9];
    data_val = *(entity_val + 0x1c);
    void* item_14;
    (*(((data_val + *g_5be3cc * 0x180) << 2) + &g_a96ae0))(entity_val, &item_14);
    void* data_5 = context[5];
    int32_t item_c = *(data_5 + 4);
    int32_t item_8 = *(data_5 + 0x10);
    int32_t item_4 = *(data_5 + 0x1c);
    return GunShot_TakeSlot(item_14, context[2], &item_c, dest_val, context_val, context[0xb]);
}
