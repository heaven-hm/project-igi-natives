#include "004B86E0-Sys_ResolveSymbol_22.h"
/* 0x004b86e0 Sys_ResolveSymbol_22 full linked: callers=2 callees=5 */
char* sub_4b86e0(int32_t a1)

{
    void var_850;
    void var_830;
    void var_800;
    Script_BufInit(&var_830, &var_850, &var_800, 0x800);
    int32_t i = 0xffffffff;
    int32_t edi = a1;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    sub_4bf1c0(&var_850, a1, ~i - 1);
    int32_t var_878 = 0;
    char* result;

    if (!sub_4b9ca0(&var_830, &result))
    {
        sub_4befc0(&var_850);
        return 0;
    }

    sub_4befc0(&var_850);
    return result;
}
