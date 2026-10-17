// IGI native provenance: Sys_CheckHeap_22 - 0x004B8770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8770-Sys_CheckHeap_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_22.h"
int32_t Sys_CheckHeap_22(int32_t context)

{
    void item_850;
    void item_830;
    void item_800;
    Script_BufInit(&item_830, &item_850, &item_800, 0x800);
    int32_t i = 0xffffffff;
    int32_t dest_val = context;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    Sys_ResolveSymbol_30(&item_850, context, ~i - 1);
    int32_t item_878 = 0;
    char* item_854;

    if (!Sys_PopStack_24(&item_830, &item_854))
    {
        Sys_PopStack_30(&item_850);
        return 0;
    }

    int32_t result = Sys_ReadFileBlock_24(item_854);
    Sys_PushStack_24(item_854);
    Sys_PopStack_30(&item_850);
    return result;
}
