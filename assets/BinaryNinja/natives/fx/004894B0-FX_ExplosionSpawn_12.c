// Original IGI.EXE function: FX_ExplosionSpawn_12 (VA 0x004894B0; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_12.h"
int32_t FX_ExplosionSpawn_12()

{
    void* data_val = g_bc2360;
    int32_t temp_val = 0;
    int32_t data_3 = -(*(data_val + 0x68)) - *(data_val + 0x74) * -30.0f;
    temp_val = data_3 <= 0;
    return data_3 & (temp_val - 1);
}
