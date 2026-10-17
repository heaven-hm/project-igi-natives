// IGI native provenance: Sys_FreeMemory_17 - 0x004B6540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6540-Sys_FreeMemory_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_17.h"
int32_t Sys_FreeMemory_17(void* context, int32_t param_2, int32_t param_3, int16_t param_4, int16_t param_5, int16_t param_6, int16_t param_7, int16_t param_8, int32_t param_9, float param_10, float param_11, float param_12, float param_13)

{
    int32_t result = param_2 * 0x24;
    *(*(context + 8) + result + 8) = param_6;
    *(*(context + 8) + result + 0xa) = param_7;
    *(*(context + 8) + result + 0xc) = param_4;
    *(*(context + 8) + result + 0xe) = param_5;
    *(*(context + 8) + result + 0x10) = param_8;
    *(*(context + 8) + result + 4) = param_9;
    (*(context + 8))[param_2 * 9] = *(context + 4) + param_3 * 0x24;
    *(*(context + 8) + result + 0x14) = param_10;
    *(*(context + 8) + result + 0x18) = param_11;
    *(*(context + 8) + result + 0x1c) = param_12;
    *(*(context + 8) + result + 0x20) = param_13;
    return result;
}
