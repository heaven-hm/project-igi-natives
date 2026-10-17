// IGI native provenance: FX_DebrisSpawn_10 - 0x004883C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004883C0-FX_DebrisSpawn_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_10.h"
void** FX_DebrisSpawn_10(void* context, void* param_2)

{
    void** result = Mem_Alloc(0x2c, 4);
    result[0xa] = 0;
    result[9] = 0;
    result[8] = Script_EvaluateCondition_4(param_2);
    result[7] = *(param_2 + 0x1c);
    result[5] = context;
    result[1] = 0;
    *result = nullptr;
    result[2] = &result[3];
    result[4] = &result[2];
    result[3] = 0;

    if (context)
        Camera_SetFieldOfView_33(context + 8, result);

    return result;
}
