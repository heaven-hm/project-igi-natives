// IGI native provenance: Cabinet_Setup - 0x00444590 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00444590-Cabinet_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Cabinet_Setup.h"
void* Cabinet_Setup(void* context)

{
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    void* data_7 = *(context + 0xe8);

    if (data_7 && *(context + 0x130))
    {
        int32_t entity_1 = 0;
        entity_1 = *(data_7 + 0x1c);
        (*((entity_1 << 2) + &g_a970e0))(data_7);
    }

    void* result = g_bc2360;

    if (*(result + 0x68) <= *(context + 0x124) + 2)
    {
        *(context + 0x120) = *(context + 0x11f);
        return result;
    }

    *(context + 0x11f) = 0;
    *(context + 0x120) = *(context + 0x11f);
    return result;
}
