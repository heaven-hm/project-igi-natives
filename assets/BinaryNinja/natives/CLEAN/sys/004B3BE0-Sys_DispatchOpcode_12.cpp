// IGI native provenance: Sys_DispatchOpcode_12 - 0x004B3BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B3BE0-Sys_DispatchOpcode_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_12.h"
float* Sys_DispatchOpcode_12(float* context, float param_2)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(param_2);
    context[2] = 0;
    context[5] = 0;
    context[6] = 0;
    context[7] = 0;
    context[8] = 0x3f800000;
    context[9] = 0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(param_2);
    *context = fp0_1;
    context[1] = -(fp0);
    context[4] = fp0_1;
    context[3] = fp0;
    return context;
}
