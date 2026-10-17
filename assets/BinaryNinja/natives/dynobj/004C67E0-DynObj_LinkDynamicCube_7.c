// Original IGI.EXE function: DynObj_LinkDynamicCube_7 (VA 0x004C67E0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_7.h"
int32_t DynObj_LinkDynamicCube_7(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    int32_t data_3 = (context ^ param_4) | (param_2 ^ param_5) | (param_3 ^ param_6);

    if (!data_3)
        return 0x2000;

    int32_t eflags;
    int32_t data_5;
    data_5 = __bsr_gprv_memv(data_3);
    int32_t result = 1 << (data_5 & 0x1f);

    if (result < 0x2000)
        return 0x2000;

    if (result <= 0x40000000)
        return result;

    return 0x40000000;
}
