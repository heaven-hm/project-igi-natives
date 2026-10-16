#include "gi_platform.h"
#include "004B66A0-Sys_ReadFileBlock_17.h"
int32_t Sys_ReadFileBlock_17(int32_t* a1)

{
    int32_t* valA = *a1;

    if (valA)
    {
        Sys_PopStack_21(valA);
        Sys_ExecuteBytecode_2(*a1);
        *a1 = 0;
    }

    void* valA2 = a1[3];

    if (valA2)
        Sys_PushStack_20(valA2);

    int32_t valA3 = a1[4];

    if (valA3)
    {
        int32_t i = 0;

        if (valA3 > 0)
        {
            int32_t ctxB1 = 0;

            do
            {
                Struct_Clear36(a1[1] + ctxB1);
                i += 1;
                ctxB1 += 0x24;
            } while (i < a1[4]);
        }
    }

    int32_t result = Sys_ExecuteBytecode_2(a1[2]);
    a1[2] = 0;
    return result;
}
