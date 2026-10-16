#include "Resource_PackUnpack.h"
void* Resource_PackUnpack(void* a1, int32_t* a2)

// Sig: int Resource_PackUnpack(char* resFile, char** outBuffer)
// Note: Opens a PACKED resource file via QFile_ReadWrite (0x4B1510, mode string
// at 0x53B604) and unpacks its contents through the pack table at 0x9436E8.
// Params: resFile = packed resource path, outBuffer = receives unpacked data.
// RETURNS entry/result pointer.
{
    void* dstD = a1;
    int32_t* valA = QFile_ReadWrite(dstD, "r");

    if (valA)
    {
        if (*(*valA * 0x8c + &g_9436e8))
        {
            void** valA4 = Sys_FreeMemory_5(dstD);
            valA4[3] = *valA;
            int32_t tmpD1 = *valA;
            int32_t valA5 = (*(tmpD1 * 0x8c + &g_9436e8))(tmpD1, valA, &a1, valA4);
            Sys_ReadFileBlock_4(valA);

            if (a2)
                *a2 = a1;

            return valA5;
        }

        int32_t valA8 = Sys_PushStack_4(valA);
        void* valA9 = Mem_Alloc(valA8, 4);
        void** valA10 = Sys_FreeMemory_5(dstD);
        valA10[3] = *valA;
        valA10[6] = valA9;
        valA10[4] = valA8;
        Resource_Unpack(valA, valA9, valA8);
        Sys_CheckHeap_4(valA, 0);

        if (!Sys_PopStack_4(valA))
        {
            if (a2)
                *a2 = valA8;

            Sys_ReadFileBlock_4(valA);
            return valA9;
        }

        Sys_CheckHeap_25(valA10);
        Sys_ExecuteBytecode_2(valA9);
        Sys_ReadFileBlock_4(valA);

        if (a2)
            *a2 = 0;
    }

    return 0;
}
