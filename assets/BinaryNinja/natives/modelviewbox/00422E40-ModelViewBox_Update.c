// IGI native provenance: ModelViewBox_Update - 0x00422E40 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422E40-ModelViewBox_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ModelViewBox_Update.h"
void* ModelViewBox_Update(void* context, int32_t param_2)

{
    g_b818ac = 0x3f000000;
    g_b818b0 = 0x3f000000;
    g_b818b4 = 0x3f000000;
    (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
    *(context + 0xc0) = DynObj_Missing("minefield");
    struct status_msg* data_7 = QTask_HandleInput(context, DynObj_LookupHashItem_5(), 0);
    memset(&data_7->head[8], 0, 0x18);
    DynObj_LookupHashItem_6(*(context + 0x58), data_7, *(context + 0xc0));
    void* result = DynObj_RegisterSymbol_8(*(context + 0x58), data_7, 1);
    *(context + 0xc4) = data_7;
    return result;
}
