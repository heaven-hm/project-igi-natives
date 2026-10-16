#include "00406DF0-AIConfig_UnableToCreateHumana.h"
/* 0x00406df0 AIConfig_UnableToCreateHumana full linked: callers=1 callees=18 */
void* AIConfig_UnableToCreateHumana(void* a1)

{
    struct status_msg* ctx = QTask_HandleInput(a1, AIConfig_GetDetectionRange(), 0);

    if (!ctx)
        return Warning_Show("Unable to create HumanAIConfig task");

    g_5690d0 = ctx;
    __builtin_memset(&ctx->head[9], 0, 0x15c);
    void* flags;

    if (!Config_Compile(ctx, "LOCAL:common/ai/settings.qsc", 0))
    {
        int32_t i = 0;
        uint32_t* edi_1 = &ctx->head[9];

        do
        {
            for (int32_t j = 0; j < 3; )
            {
                int32_t var_4_1 = sub_452910(i);
                flags = Config_SavePlayerProfile_2(j);
                ADJ(edi_1)->head[9] = QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                j += 1;
                edi_1 = &edi_1[1];
            }

            i += 1;
        } while (i < 0x1d);

        return QTask_InitContext_2(ctx, sub_4f1a70(), 0);
    }

    uint32_t eax_10 = ctx->head[2];
    int32_t esi_1 = *eax_10;
    int32_t esi_2 = -(esi_1);
    int32_t i_1 = (esi_2 - esi_2) & eax_10;
    QTask_InitContext_2(ctx, sub_4f1a70(), 0);

    while (i_1)
    {
        ctx->head[(*(i_1 + 0x24) + 3) * 3 + *(i_1 + 0x20)] = i_1;
        i_1 = *i_1;

        if (!i_1)
            break;

        if (!*i_1)
            break;
    }

    void* i_2 = nullptr;
    struct status_msg** esi_4 = &ctx->head[9];
    a1 = nullptr;

    do
    {
        for (int32_t j_1 = 0; j_1 < 3; )
        {
            if (!*esi_4)
            {
                int32_t var_4_2 = sub_452910(i_2);
                flags = Config_SavePlayerProfile_2(j_1);
                struct status_msg* eax_17 =
                    QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                *esi_4 = eax_17;
                uint32_t eax_19 = sub_4f1a70();
                int32_t edx_3 = 0;
                edx_3 = eax_17->head[7];
                (*(((eax_19 * 0x180 + edx_3) << 2) + &g_a96ae0))(eax_17, 0);
                i_2 = a1;
            }

            j_1 += 1;
            esi_4 = &esi_4[1];
        }

        i_2 += 1;
        a1 = i_2;
    } while (i_2 < 0x1d);

    return i_2;
}
