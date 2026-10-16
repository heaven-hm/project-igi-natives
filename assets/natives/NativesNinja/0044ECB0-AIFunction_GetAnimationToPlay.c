#include "0044ECB0-AIFunction_GetAnimationToPlay.h"
/* 0x0044ecb0 AIFunction_GetAnimationToPlay full linked: callers=0 callees=9 */
int32_t AIFunction_GetAnimationToPlay(int32_t a1)

// Sig: int AIFunction_GetAnimationToPlay()
// Note: RETURNS which animation entry the engine decided to play for the
// current event/action (useful to log or override reactions). Per retail table
// takes no script args; machine code also touches an [ebp+8] slot (internal
// context).
{
    struct ai_ctx* eax = g_5bda58;
    int32_t anim_count = eax->anim_count;
    int32_t id_2;

    if (anim_count <= 0)
    {
        Warning_Show("No animation entries defined");
        id_2 = 0xffffffff;
        int32_t var_18_1 = 0;
        int32_t var_14 = 0xbff00000;
        char* var_10 = &g_567c74;
        memcpy(a1, &id_2, 0x18);
        return a1;
    }

    long double x87_r7 = 0.0;
    int32_t var_18;

    if (anim_count > 0)
    {
        double* eax_2 = &eax->entries[0].weight;
        int32_t edx_1 = anim_count;
        int32_t i;

        do
        {
            x87_r7 = x87_r7 + ADJ(eax_2)->entries[0].weight;
            eax_2 = &eax_2[2];
            i = edx_1;
            edx_1 -= 1;
        } while (i != 1);
        int32_t var_28;
        var_28 = x87_r7;
        long double temp1_1 = 0.01;
        x87_r7 - temp1_1;

        if (!(*(&((x87_r7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double st0 = sub_4b4770(Level_SetMission_5());
            struct ai_ctx* edi_2 = g_5bda58;
            long double x87_r7_4 = st0 * var_28;
            int32_t anim_count_1 = edi_2->anim_count;
            int32_t ecx_1 = 0;

            if (anim_count_1 > 0)
            {
                double* esi_1 = &edi_2->entries[0].weight;

                do
                {
                    x87_r7_4 = x87_r7_4 - ADJ(esi_1)->entries[0].weight;
                    long double temp2_1 = 0.0;
                    x87_r7_4 - temp2_1;

                    if (*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        int32_t id_1 = edi_2->entries[ecx_1].id;
                        id_2 = id_1;
                        char* var_10_3 = &g_567c74;
                        var_18 = id_1;
                        memcpy(a1, &id_2, 0x18);
                        return a1;
                    }

                    ecx_1 += 1;
                    esi_1 = &esi_1[2];
                } while (ecx_1 < anim_count_1);
            }

            int32_t id_3 = *(&edi_2->pad[0x3af8] + (ecx_1 << 4));
            id_2 = id_3;
            char* var_10_2 = &g_567c74;
            var_18 = id_3;
            memcpy(a1, &id_2, 0x18);
            return a1;
        }
    }

    int32_t* var_38 = Level_SetMission_5();
    char* var_10_1 = &g_567c74;
    int32_t id = g_5bda58->entries[sub_4b47c0(var_38, anim_count)].id;
    id_2 = id;
    var_18 = id;
    memcpy(a1, &id_2, 0x18);
    return a1;
}
