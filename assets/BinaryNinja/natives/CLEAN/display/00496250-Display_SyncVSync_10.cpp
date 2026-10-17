// IGI native provenance: Display_SyncVSync_10 - 0x00496250 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496250-Display_SyncVSync_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_10.h"
int32_t Display_SyncVSync_10(int32_t context, int32_t param_2, int32_t param_3, void** param_4)

{
    Camera_SetFieldOfView_33(context + param_2 * 0xc, param_4);
    param_4[2] = param_2;
    param_4[3] = param_3;
    return param_3;
}
