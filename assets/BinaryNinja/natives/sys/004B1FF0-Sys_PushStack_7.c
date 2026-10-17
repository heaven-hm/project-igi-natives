// Original IGI.EXE function: Sys_PushStack_7 (VA 0x004B1FF0; static CFG gate PASS, CFG score 1.000).
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
