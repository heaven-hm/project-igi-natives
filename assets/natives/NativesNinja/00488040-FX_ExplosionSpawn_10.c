#include "00488040-FX_ExplosionSpawn_10.h"
/* 0x00488040 FX_ExplosionSpawn_10 full linked: callers=2 callees=6 */
uint32_t sub_488040(struct status_msg* a1, void* a2)

{
    int32_t kind;
    kind = a1->head[7];
    struct status_msg* eax = QTask_HandleInput(a2, kind, 0);
    uint32_t ecx = a1->head[8];

    if (ecx > 0)
        sub_4f1090(ecx, eax);

    int32_t* eax_1 = a1->head[9];
    int32_t i = 0;

    if (*eax_1 > 0)
    {
        int32_t ebp_1 = 0;

        do
        {
            void** esi_2 = eax_1[2] + ebp_1;
            a2 = *esi_2 + eax;
            char eax_3 = sub_4f1ba0();
            sub_4f1af0(*(a1->head[0xa] + (i << 2)), esi_2[1], eax_3, &a2);
            eax_1 = a1->head[9];
            i += 1;
            ebp_1 += 0x10;
        } while (i < *eax_1);
    }

    struct status_msg* result = sub_4af9b0(&a1->head[2]);

    if (result)
    {
        result = a1->head[2];

        for (uint32_t i_1 = result->head[0]; i_1; i_1 = *i_1)
        {
            sub_488040(result, eax);
            result = i_1;
        }
    }

    return result;
}
