// Original IGI.EXE function: Sys_OpenFileStream_5 (VA 0x004B1A30; static CFG gate PASS, CFG score 1.000).
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
