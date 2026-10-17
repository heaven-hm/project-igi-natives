// Original IGI.EXE function: FX_ExplosionSpawn_6 (VA 0x00485170; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_6.h"
void* FX_ExplosionSpawn_6(int32_t context)

{
    int32_t temp_1 = g_5c89fc;
    int32_t data_val = 0;

    if (temp_1 > 0)
    {
        int32_t* entity_1 = &g_5c1590;

        do
        {
            if (*entity_1 == context)
                return data_val * 0x4a8 + &g_5c1590;

            data_val += 1;
            entity_1 = &entity_1[0x12a];
        } while (data_val < temp_1);
    }

    return 0;
}
