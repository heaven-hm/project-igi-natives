// Original IGI.EXE function: Config_VerifyContentControlPassword (VA 0x00403CC0; static CFG gate FAIL, CFG score 0.833).
#include "Config_VerifyContentControlPassword.h"
int32_t Config_VerifyContentControlPassword(int32_t context, float param_2 )

// Sig: int Config_VerifyContentControlPassword(char* password)
// Note: Checks a password attempt against the stored content-control password.
// Param: password = string to test. RETURNS non-zero when correct, 0 when
// wrong. Use before unlocking violent-content options.
{
    int32_t context_val;
    int32_t item_3c = context_val;
    char* item_48 = 0x20;
    void item_20;
    char* item_4c = &item_20;
    int32_t item_50 = 0;
    Sys_ResolveSymbol_23(param_2, item_50, item_4c, item_48);
    char* source_val = &g_bc79c8;
    char* data_val = &item_20;
    int32_t data_2;
    char temp_1;
    char context_1;

    while (true)
    {
        temp_1 = *data_val;
        context_1 = *source_val;
        bool c_1 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_2 = 0;
                break;
            }

            temp_1 = data_val[1];
            context_1 = source_val[1];
            c_1 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_val = &data_val[2];
                source_val = &source_val[2];

                if (temp_1)
                    continue;

                data_2 = 0;
                break;
            }
        }

        data_2 = data_val - data_val + 1;
        break;
    }

    int32_t entity_1 = 0;
    char* source_1 = &g_bc79c8;
    entity_1 = !data_2;
    int32_t item_38 = entity_1;
    char* data_3 = &item_20;
    int32_t data_5;

    while (true)
    {
        temp_1 = *data_3;
        context_1 = *source_1;
        bool c_3 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
            {
                data_5 = 0;
                break;
            }

            temp_1 = data_3[1];
            context_1 = source_1[1];
            c_3 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_3 = &data_3[2];
                source_1 = &source_1[2];

                if (temp_1)
                    continue;

                data_5 = 0;
                break;
            }
        }

        data_5 = data_3 - data_3 + 1;
        break;
    }

    float entity_3 = 0.0f;
    char* item_28 = &g_567c74;
    entity_3 = !data_5;
    double item_30 = entity_3;
    memcpy(context, &item_38, 0x18);
    return context;
}
