#include "FX_ExplosionSpawn_14.h"
int32_t* FX_ExplosionSpawn_14(void* a1, int32_t a2)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
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
