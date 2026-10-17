// IGI native provenance: Sys_PushStack_7 - 0x004B1FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1FF0-Sys_PushStack_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_7.h"
int32_t Sys_PushStack_7(void* context)

{
    int32_t result = 0;

    for (int32_t* i = Sys_ResolveSymbol_19(context); i; i = Sys_PopStack_19(i))
    {
        if (Sys_OpenFileStream_20(i) == 0x48584554)
        {
            i = Sys_PopStack_19(i);

            if (!i)
                return 0;

            if (Sys_OpenFileStream_20(i) != 0x59444f42)
                return 0;

            if (!Sys_CheckHeap_19(i, context))
                return 0;

            result += 1;
        }
    }

    return result;
}
