#include "0048EB60-FX_ExplosionSpawn_21.h"
/* 0x0048eb60 FX_ExplosionSpawn_21 full linked: callers=0 callees=6 */
int32_t* sub_48eb60(void* a1, int32_t* a2)

{
    float* esi_1 = a2[0xa] + 8;
    uint32_t eax = Frames_GetUpdateCounter();
    int32_t var_18 = esi_1[1] - eax;
    char* var_1c = "Fall flat - %d";
    int32_t var_20 = 0xffffffff;
    void* var_24 = a1;
    sub_48ef70(a1, 2, 1f);

    if (esi_1[1] < 0)
        esi_1[1] = Frames_GetUpdateCounter() - *esi_1 * -30f;

    int32_t* result = Frames_GetUpdateCounter();

    if (result <= esi_1[1])
        return result;

    return sub_450ff0(a1, a2);
}
