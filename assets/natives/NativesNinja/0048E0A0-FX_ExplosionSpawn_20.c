#include "0048E0A0-FX_ExplosionSpawn_20.h"
/* 0x0048e0a0 FX_ExplosionSpawn_20 full linked: callers=0 callees=6 */
int32_t* sub_48e0a0(void* a1, int32_t* a2)

{
    void* esi_1 = a2[0xa] + 8;
    uint32_t eax = Frames_GetUpdateCounter();
    int32_t var_18 = *(esi_1 + 0x1c) - eax;
    char* var_1c = "Look at event, %d";
    int32_t var_20 = 0xffffffff;
    void* var_24 = a1;

    if (*(esi_1 + 0x1c) < 0)
        *(esi_1 + 0x1c) = Frames_GetUpdateCounter() - *(esi_1 + 0x18) * -30f;

    int32_t* result = sub_4525b0(a1, esi_1, 0.0349065848f, 0);

    if (result)
    {
        result = Frames_GetUpdateCounter();

        if (result > *(esi_1 + 0x1c))
            return sub_450ff0(a1, a2);
    }

    return result;
}
