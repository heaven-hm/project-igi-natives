#include "004B7000-Sys_DispatchOpcode_18.h"
/* 0x004b7000 Sys_DispatchOpcode_18 full linked: callers=8 callees=3 */
int32_t* sub_4b7000(int32_t* a1)

{
    int32_t* result = Mem_Alloc(0x18, 4);

    if (sub_4b6720(result, a1))
        return result;

    sub_4b0d10(result);
    return 0;
}
