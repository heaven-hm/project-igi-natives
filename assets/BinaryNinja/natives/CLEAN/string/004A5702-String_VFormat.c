// IGI native provenance: String_VFormat - 0x004A5702 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5702-String_VFormat.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "String_VFormat.h"
int32_t String_VFormat(char* context, char* param_2, int32_t param_3)

// Sig: int String_VFormat(char* buffer, const char* format, va_list args)
// Note: Bounded printf-style va_list formatter wrapper around the parser core
// at 0x004A7720. Catalogued for direct ABI-aware use; no generic NativeHelper
// wrapper is emitted. Ghidra/r2 CFG agreement: 4 basic blocks and 4 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t item_2c = param_3;
    char* item_1c = context;
    char* item_24 = context;
    int32_t item_18 = 0x42;
    int32_t item_20 = 0x7fffffff;
    int32_t result = Camera_ApplyWideScreen_11(&item_24, param_2);
    int32_t item_20_1 = item_20 - 1;

    if (item_20 - 1 < 0)
    {
        int32_t item_30_1 = 0;
        Camera_ApplyHandiCam_11(&item_24);
    }
    else
        *item_24 = 0;

    return result;
}
