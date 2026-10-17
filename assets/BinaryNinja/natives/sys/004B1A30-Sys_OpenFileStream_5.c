// IGI native provenance: Sys_OpenFileStream_5 - 0x004B1A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1A30-Sys_OpenFileStream_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_5.h"
int32_t Sys_OpenFileStream_5(void* context)

{
    int32_t* data_val = Sys_NoFilesLoadedAtAddre(context);
    int32_t entity_val = data_val[3];
    int32_t data_4 = *(entity_val * 0x8c + &g_943700);

    if (!data_4)
    {
        Sys_ExecuteBytecode_2(context);
        return Sys_CheckHeap_25(data_val);
    }

    data_4(entity_val, data_val);
    return Sys_CheckHeap_25(data_val);
}
