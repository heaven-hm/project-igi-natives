// IGI native provenance: AsciiBox_LoadParameters - 0x0041CD20 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041CD20-AsciiBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AsciiBox_LoadParameters.h"
int32_t AsciiBox_LoadParameters(void* context)

{
    if (*(context + 0xdc))
    {
        int32_t data_2 = Menu_FormatScreen_10(*(context + 0xf4));
        int32_t entity_1 = *(context + 0xe8);
        bool flag_0_1 = data_2 <= entity_1;
        int32_t temp_val;

        if (data_2 < entity_1)
        {
            do
            {
                int32_t entity_3 = *(context + 0xe0) - 1;
                *(context + 0xe0) = entity_3;
                char* entity_4 = entity_3 - 1;

                if (*entity_4)
                {
                    char i;

                    do
                    {
                        *(context + 0xe0) = entity_4;
                        i = entity_4[0xffffffff];
                        entity_4 -= 1;
                    } while (i);
                }

                temp_val = *(context + 0xe8) - 1;
                *(context + 0xe8) = temp_val;
            } while (data_2 < temp_val);

            flag_0_1 = data_2 <= temp_val;
        }

        if (!flag_0_1)
        {
            do
            {
                void* entity_7 = *(context + 0xe0) + 1;
                *(context + 0xe0) = entity_7;

                while (*(entity_7 - 1))
                {
                    entity_7 += 1;
                    *(context + 0xe0) = entity_7;
                }

                temp_val = *(context + 0xe8) + 1;
                *(context + 0xe8) = temp_val;
            } while (data_2 > temp_val);
        }
    }

    void* data_3 = *(context + 0xf4);
    int32_t entity_9 = 0;
    entity_9 = *(data_3 + 0x1c);
    (*((entity_9 << 2) + &g_a970e0))(data_3);
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
