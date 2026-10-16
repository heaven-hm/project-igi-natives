#include "00489BE0-FX_ExplosionSpawn_14.h"
/* 0x00489be0 FX_ExplosionSpawn_14 full linked: callers=2 callees=0 */
int32_t* sub_489be0(void* a1, int32_t a2)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t* result = *(a1 + 0x18);

    for (int32_t* i = *result; i; i = *i)
    {
        if (*(result + 0x2a) && *result[2] == a2)
            return result;

        result = i;
    }

    result = *(a1 + 0x24);
    int32_t* result_1 = *result;

    if (!result_1)
        return nullptr;

    while (true)
    {
        if (*(result + 0x2a) && *result[2] == a2)
            return result;

        result = result_1;
        result_1 = *result_1;

        if (!result_1)
            return nullptr;
    }
}
