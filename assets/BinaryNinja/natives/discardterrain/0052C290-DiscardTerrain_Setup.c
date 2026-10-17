// Original IGI.EXE function: DiscardTerrain_Setup (VA 0x0052C290; static CFG gate FAIL, CFG score 0.833).
#include "DiscardTerrain_Setup.h"
int32_t DiscardTerrain_Setup(int32_t context, char* param_2)

{
    void* data_val = *(context + 0x68);
    int32_t flagP = 0x40000000 >> (*(context + 0x150) & 0x1f);
    memcpy(context + 0x138, context + 0xf0, 0x18);
    *(context + 0x138) = *(data_val + 0xde0) + *(context + 0x138);
    int32_t flagP1 = flagP << 1;
    int32_t entity_2 = -(flagP1);
    *(context + 0x140) = *(data_val + 0xde4) + *(context + 0x140);
    *(context + 0x148) = *(data_val + 0xde8) + *(context + 0x148);
    long double fpu_val_7_7 = *(context + 0x138) & entity_2;
    *(context + 0x108) = fpu_val_7_7;
    long double fpu_val_6_1 = *(context + 0x140) & entity_2;
    *(context + 0x110) = fpu_val_6_1;
    long double fpu_val_6_3 = *(context + 0x148) & entity_2;
    *(context + 0x118) = fpu_val_6_3;
    long double fpu_val_6_4 = flagP1;
    memcpy(context + 0x138, context + 0x108, 0x18);
    *(context + 0x120) = fpu_val_7_7 + fpu_val_6_4;
    *(context + 0x128) = fpu_val_6_1 + fpu_val_6_4;
    *(context + 0x130) = fpu_val_6_3 + fpu_val_6_4;
    long double fpu_val_7_9 = fpu_val_6_4 * 0.5;
    long double fpu_val_6_12 = fpu_val_7_9 + *(context + 0x138);
    *(context + 0x138) = fpu_val_6_12;
    long double fpu_val_6_14 = fpu_val_7_9 + *(context + 0x140);
    *(context + 0x140) = fpu_val_6_14;
    long double fpu_val_7_10 = fpu_val_7_9 + *(context + 0x148);
    *(context + 0x148) = fpu_val_7_10;
    *(context + 0x138) = fpu_val_6_12 - *(data_val + 0xde0);
    *(context + 0x140) = fpu_val_6_14 - *(data_val + 0xde4);
    *(context + 0x148) = fpu_val_7_10 - *(data_val + 0xde8);
    *(context + 0x108) = *(context + 0x108) - *(data_val + 0xde0);
    *(context + 0x110) = *(context + 0x110) - *(data_val + 0xde4);
    *(context + 0x118) = *(context + 0x118) - *(data_val + 0xde8);
    *(context + 0x120) = *(context + 0x120) - *(data_val + 0xde0);
    *(context + 0x128) = *(context + 0x128) - *(data_val + 0xde4);
    *(context + 0x130) = *(context + 0x130) - *(data_val + 0xde8);
    long double fpu_val_7_25 = flagP1 * 0.000116257448f;
    *(context + 0x98) = fpu_val_7_25;
    *(context + 0x9c) = fpu_val_7_25;
    *(context + 0xa0) = fpu_val_7_25;
    int32_t result = DynObj_UpdateDynTree_8(data_val, context, context + 0x138, context + 0x108, context + 0x120);

    if (!param_2 || !*param_2)
    {
        int32_t* i_1 = *(context + 8);

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t entity_4 = g_afa7e0;

                do
                {
                    int32_t* temp_1 = *i;
                    void* data_4;

                    if (!temp_1)
                        data_4 = nullptr;
                    else
                    {
                        int32_t data_1 = *temp_1;
                        int32_t data_2 = -(data_1);
                        data_4 = (data_2 - data_2) & temp_1;
                    }

                    *((entity_4 << 2) + &g_afa6e0) = data_4;
                    g_afa7e0 = entity_4 + 1;
                    uint32_t data_6 = Script_ParseEnumReal32_8();
                    int32_t entity_6 = 0;
                    entity_6 = i[7];
                    result = *(((data_6 * 0x180 + entity_6) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, param_2);

                    entity_4 = g_afa7e0 - 1;
                    g_afa7e0 = entity_4;
                    i = *((entity_4 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
