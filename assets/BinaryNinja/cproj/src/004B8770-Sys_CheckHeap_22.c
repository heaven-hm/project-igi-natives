#include "gi_platform.h"
#include "004B8770-Sys_CheckHeap_22.h"
int32_t Sys_CheckHeap_22(int32_t a1)

{
    char v_850;
    char v_830;
    char v_800;
    Script_BufInit(&v_830, &v_850, &v_800, 0x800);
    int32_t i = 0xffffffff;
    int32_t dstD = a1;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    Sys_ResolveSymbol_30(&v_850, a1, ~i - 1);
    int32_t v_878 = 0;
    char* v_854;

    if (!Sys_PopStack_24(&v_830, &v_854))
    {
        Sys_PopStack_30(&v_850);
        return 0;
    }

    int32_t result = Sys_ReadFileBlock_24(v_854);
    Sys_PushStack_24(v_854);
    Sys_PopStack_30(&v_850);
    return result;
}
