// Original IGI.EXE function: AIConfig_UnableToCreateHumana (VA 0x00406DF0; static CFG gate PASS, CFG score 0.982).
#include "AIConfig_UnableToCreateHumana.h"
void* AIConfig_UnableToCreateHumana(void* context)

{
    struct status_msg* ctx = QTask_HandleInput(context, AIConfig_GetDetectionRange(), 0);

    if (!ctx)
        return Warning_Show("Unable to create HumanAIConfig task");

    g_5690d0 = ctx;
    memset(&ctx->head[9], 0, 0x15c);
    void* flags;

    if (!Config_Compile(ctx, "LOCAL:common/ai/settings.qsc", 0))
    {
        int32_t i = 0;
        uint32_t* dest_1 = &ctx->head[9];

        do
        {
            for (int32_t j = 0; j < 3; )
            {
                int32_t item_4_1 = AI_UpdatePatrol_4(i);
                flags = Config_SavePlayerProfile_2(j);
                ADJ(dest_1)->head[9] = QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                j += 1;
                dest_1 = &dest_1[1];
            }

            i += 1;
        } while (i < 0x1d);

        return QTask_InitContext_2(ctx, Script_ParseEnumReal32_8(), 0);
    }

    uint32_t data_10 = ctx->head[2];
    int32_t source_1 = *data_10;
    int32_t source_2 = -(source_1);
    int32_t i_1 = (source_2 - source_2) & data_10;
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
    struct status_msg** source_4 = &ctx->head[9];
    context = nullptr;

    do
    {
        for (int32_t j_1 = 0; j_1 < 3; )
        {
            if (!*source_4)
            {
                int32_t item_4_2 = AI_UpdatePatrol_4(i_2);
                flags = Config_SavePlayerProfile_2(j_1);
                struct status_msg* data_17 =
                    QTask_HandleInput(ctx, AIConfig_SetDifficulty(), &flags);
                *source_4 = data_17;
                uint32_t data_19 = Script_ParseEnumReal32_8();
                int32_t temp_3 = 0;
                temp_3 = data_17->head[7];
                (*(((data_19 * 0x180 + temp_3) << 2) + &g_a96ae0))(data_17, 0);
                i_2 = context;
            }

            j_1 += 1;
            source_4 = &source_4[1];
        }

        i_2 += 1;
        context = i_2;
    } while (i_2 < 0x1d);

    return i_2;
}
