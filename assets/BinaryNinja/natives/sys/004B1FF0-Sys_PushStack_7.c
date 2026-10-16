#include "Sys_PushStack_7.h"
int32_t Sys_PushStack_7(void* a1)

{
    int32_t result = 0;

    for (int32_t* i = Sys_ResolveSymbol_19(a1); i; i = Sys_PopStack_19(i))
    {
        if (Sys_OpenFileStream_20(i) == 0x48584554)
        {
            i = Sys_PopStack_19(i);

            if (!i)
                return 0;

            if (Sys_OpenFileStream_20(i) != 0x59444f42)
                return 0;

            if (!Sys_CheckHeap_19(i, a1))
                return 0;

            result += 1;
        }
    }

    return result;
}
