// Original IGI.EXE function: Sys_PopStack_18 (VA 0x004B7050; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_18.h"
int32_t Sys_PopStack_18(void* context, int32_t param_2)

{
    int32_t flagP = param_2;
    int32_t dest_val = flagP;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    void* dest_1 = context;
    int32_t data_val = Sys_DispatchOpcode_17(dest_1);
    char* i_1 = nullptr;
    param_2 = 0;

    if (~i - 1 <= 0)
        return 0;

    int32_t result;

    do
    {
        context = i_1[flagP];
        char data_3 = Sys_ResolveSymbol_20(*(dest_1 + 0xc), context, 0);
        int32_t data_1;

        if (!data_3)
            data_1 = data_val;
        else
            data_1 = *(*(dest_1 + 8) + data_3 * 0x24 - 0x14);

        result = param_2 + data_1;
        i_1 = &i_1[1];
        param_2 = result;
    } while (i_1 < ~i - 1);

    return result;
}
