#include "gi_platform.h"
#include "00488040-FX_ExplosionSpawn_10.h"
uint32_t FX_ExplosionSpawn_10(struct status_msg* a1, void* a2)

{
    int32_t kind;
    kind = a1->head[7];
    struct status_msg* valA = QTask_HandleInput(a2, kind, 0);
    uint32_t objC = a1->head[8];

    if (objC > 0)
        Script_LevelqtaskidDAlready(objC, valA);

    int32_t* valA1 = a1->head[9];
    int32_t i = 0;

    if (*valA1 > 0)
    {
        int32_t flagP1 = 0;

        do
        {
            void** srcS2 = valA1[2] + flagP1;
            a2 = *srcS2 + valA;
            char valA3 = Script_ParseEnumInt32_9();
            Script_ParseEnumString_8((*(int32_t*)(uintptr_t)(a1->head[0xa] + (i << 2))), srcS2[1], valA3, &a2);
            valA1 = a1->head[9];
            i += 1;
            flagP1 += 0x10;
        } while (i < *valA1);
    }

    struct status_msg* result = Camera_ApplyPostProcess_33(&a1->head[2]);

    if (result)
    {
        result = a1->head[2];

        for (uint32_t i_1 = result->head[0]; i_1; i_1 = *i_1)
        {
            FX_ExplosionSpawn_10(result, valA);
            result = i_1;
        }
    }

    return result;
}
