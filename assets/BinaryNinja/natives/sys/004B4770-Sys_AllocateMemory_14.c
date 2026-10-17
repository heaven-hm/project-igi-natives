// IGI native provenance: Sys_AllocateMemory_14 - 0x004B4770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B4770-Sys_AllocateMemory_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_14.h"
long double Sys_AllocateMemory_14(int32_t* context)

{
    int32_t item_4 = 0;
    int32_t temp_1 = context[2] ^ *context >> 7;
    context[2] = temp_1;
    int32_t temp_3 = context[1] ^ temp_1;
    context[1] = temp_3;
    int32_t temp_5 = *context + temp_3;
    *context = temp_5;
    return temp_5 * 1.52587890625e-05;
}
