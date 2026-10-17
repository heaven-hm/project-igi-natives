// IGI native provenance: Sys_FreeMemory_26 - 0x004BAF30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAF30-Sys_FreeMemory_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_26.h"
int32_t Sys_FreeMemory_26(char* context )

{
    void item_400;
    void arg_c;
    String_VFormat(&item_400, context, &arg_c);
    int32_t data_val = g_a43ed8;
    g_a43ed0 += 1;

    if (data_val)
        return data_val(&item_400, g_a43ec0);

    void* item_404_2 = &item_400;
    Error_Show("%s");

    while (true)
        /* nop */
}
