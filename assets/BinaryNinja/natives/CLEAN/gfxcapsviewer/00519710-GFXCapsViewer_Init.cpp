// IGI native provenance: GFXCapsViewer_Init - 0x00519710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519710-GFXCapsViewer_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GFXCapsViewer_Init.h"
int32_t GFXCapsViewer_Init()

{
    int32_t item_4 = 0;
    g_ba2028 = TaskType_Register("GFXCapsViewer", 0x20, 0x181, 0);
    int32_t data_1 = Script_CallNativeHandler_5();
    int32_t item_8 = data_1;
    data_1 = g_ba2028;
    return QTask_RemoveEventCallback(data_1, item_8, sub_5196f0);
}
