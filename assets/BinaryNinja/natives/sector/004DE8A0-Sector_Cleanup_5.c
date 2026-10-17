// Original IGI.EXE function: Sector_Cleanup_5 (VA 0x004DE8A0; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_5.h"
void Sector_Cleanup_5(int32_t* context, int32_t param_2)

{
    int32_t* i_1 = context;
    int32_t* i = i_1;

    if (!i_1)
        return;

    do
    {
        (*(((Render_DrawSplineMesh_4() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(i, param_2);
        int32_t j = 0;

        if (i[0x4e] > 0)
        {
            do
            {
                void* dest_val = *(*(i[0x4d] + (j << 2)) * i[0x50] + i[0x4c]);
                uint32_t data_8 = Render_DrawSplineMesh_4();
                int32_t entity_3 = 0;
                entity_3 = *(dest_val + 0x1c);
                int32_t data_12 = *(((data_8 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (data_12)
                    data_12(dest_val, param_2);

                j += 1;
            } while (j < i[0x4e]);

            i_1 = context;
        }

        if (i != i_1)
        {
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        }
        else
        {
            void* source_val = i[0x52];

            if (!source_val)
                break;

            i = *(source_val + 8);

            if (!*i)
                break;
        }
    } while (i);
}
