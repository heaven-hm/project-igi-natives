// IGI native provenance: Sys_AllocateMemory_27 - 0x004BBEF0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004BBEF0-Sys_AllocateMemory_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_27.h"
int32_t Sys_AllocateMemory_27(char* context)

{
    int32_t result = g_a442c0;

    if (!result)
        return result;

    void item_400;
    void arg_8;
    String_VFormat(&item_400, context, &arg_8);
    return g_a442c0(&item_400, g_a442cc);
}
