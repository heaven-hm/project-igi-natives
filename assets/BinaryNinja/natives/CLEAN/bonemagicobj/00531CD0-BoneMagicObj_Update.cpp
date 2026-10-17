// IGI native provenance: BoneMagicObj_Update - 0x00531CD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531CD0-BoneMagicObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BoneMagicObj_Update.h"
int32_t BoneMagicObj_Update(int32_t* context )

{
    int32_t data_val = context[2];
    int16_t* dest_val = *context;
    context[2] = data_val + 1;
    *dest_val = Script_GetArg(context[1], data_val);
    int32_t data_2 = context[2];
    context[2] = data_2 + 1;
    int32_t result = Script_GetArg(context[1], data_2);
    *(dest_val + 4) = result;
    return result;
}
