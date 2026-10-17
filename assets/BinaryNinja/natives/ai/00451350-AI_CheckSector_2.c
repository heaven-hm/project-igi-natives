// Original IGI.EXE function: AI_CheckSector_2 (VA 0x00451350; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_2.h"
int32_t* AI_CheckSector_2(void* context)

{
    int32_t data_1 = **(*(context + 0x3aa8) + 0xc);

    if (!data_1)
        return 0;

    return FX_ExplosionSpawn_14(context + 0x15f8, data_1);
}
