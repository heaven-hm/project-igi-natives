// Original IGI.EXE function: BoneMagicObj_LoadParameters (VA 0x00531620; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_LoadParameters.h"
int32_t BoneMagicObj_LoadParameters(void* context)

{
    Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
    float item_c;
    Render_TransformVertices_5(nullptr, &item_c, context + 0x68);
    *(context + 0x120) = item_c + *(context + 0x120);
    float item_8;
    *(context + 0x124) = item_8 + *(context + 0x124);
    float item_4;
    *(context + 0x128) = item_4 + *(context + 0x128);
    int32_t result = Render_ClipMesh_5(0, context + 0x68);
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
            result = *((data_5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    return result;
}
