// IGI native provenance: Display_OpenDevice_17 - 0x00498A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498A70-Display_OpenDevice_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_17.h"
int32_t Display_OpenDevice_17(int32_t* context, void* param_2)

{
    g_6e5bd0 = 0;
    int32_t* data_val = context[0x15b3];
    (*(*data_val + 8))(data_val);
    DynObj_RemoveSymbol_7(param_2, context, 0);
    return QTask_FindType(context);
}
