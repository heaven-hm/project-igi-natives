#include "gi_platform.h"
#include "00406DF0-AIConfig_UnableToCreateHumana.h"
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
        uint32_t* dstD1 = &ctx->head[9];

        do
        {
            for (int32_t j = 0; j < 3; )
            {
                int32_t v_4_1 = AI_UpdatePatrol_4(i);
                flags = Config_SavePlayerProfile_2(j);
                ADJ(dstD1)->head[9] = QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                j += 1;
                dstD1 = &dstD1[1];
            }

            i += 1;
        } while (i < 0x1d);

        return QTask_InitContext_2(ctx, Script_ParseEnumReal32_8(), 0);
    }

    uint32_t valA10 = ctx->head[2];
    int32_t srcS1 = *valA10;
    int32_t srcS2 = -(srcS1);
    int32_t i_1 = (srcS2 - srcS2) & valA10;
    QTask_InitContext_2(ctx, Script_ParseEnumReal32_8(), 0);

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
    struct status_msg** srcS4 = &ctx->head[9];
    a1 = nullptr;

    do
    {
        for (int32_t j_1 = 0; j_1 < 3; )
        {
            if (!*srcS4)
            {
                int32_t v_4_2 = AI_UpdatePatrol_4(i_2);
                flags = Config_SavePlayerProfile_2(j_1);
                struct status_msg* valA17 =
                    QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                *srcS4 = valA17;
                uint32_t valA19 = Script_ParseEnumReal32_8();
                int32_t tmpD3 = 0;
                tmpD3 = valA17->head[7];
                ((int(*)())(uintptr_t)(*(((valA19 * 0x180 + tmpD3) << 2) + &g_a96ae0)))(valA17, 0);
                i_2 = a1;
            }

            j_1 += 1;
            srcS4 = &srcS4[1];
        }

        i_2 += 1;
        a1 = i_2;
    } while (i_2 < 0x1d);

    return i_2;
}
