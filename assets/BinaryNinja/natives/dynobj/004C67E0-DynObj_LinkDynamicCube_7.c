// IGI native provenance: DynObj_LinkDynamicCube_7 - 0x004C67E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C67E0-DynObj_LinkDynamicCube_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
