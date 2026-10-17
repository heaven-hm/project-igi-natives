// IGI native provenance: DisplayRender_DefaultHandler_497D00 - 0x00497D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497D00-DisplayRender_DefaultHandler_497D00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_DefaultHandler_497D00.h"

int32_t DisplayRender_DefaultHandler_497D00(int32_t* arg1)

{
    long double x87_r7_1 = g_bcabec;
    int32_t* source_ptr = arg1;
    arg1 = &g_bcaae0;
    g_bcadc0 = *source_ptr;
    g_bcada0 = x87_r7_1 * g_bcadc0;
    int32_t result = Display_CouldnTSetViewport(&arg1);
    source_ptr[1] = g_bcada4;
    return result;
}
