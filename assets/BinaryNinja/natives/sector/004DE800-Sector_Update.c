// Original IGI.EXE function: Sector_Update (VA 0x004DE800; static CFG gate PASS, CFG score 1.000).
#include "Sector_Update.h"
void* Sector_Update(void* context, int32_t param_2)

{
    Render_SkinBones_15(context);
    void* result = *(context + 0xe8);

    if (result)
    {
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_1 = *i;
                void* data_3;

                if (!temp_1)
                    data_3 = nullptr;
                else
                {
                    int32_t data_val = *temp_1;
                    int32_t data_1 = -(data_val);
                    data_3 = (data_1 - data_1) & temp_1;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_3;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_5 = DynObj_LinkDynamicCube_12();
                int32_t entity_3 = 0;
                entity_3 = i[7];
                result = *(((data_5 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param_2);

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
