// Original IGI.EXE function: Sector_Cleanup_5 (VA 0x004DE8A0; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_5.h"
void Sector_Cleanup_5(int32_t* a1, int32_t a2)

{
    int32_t* i_1 = a1;
    int32_t* i = i_1;

    if (!i_1)
        return;

    do
    {
        (*(((Render_DrawSplineMesh_4() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(i, a2);
        int32_t j = 0;

        if (i[0x4e] > 0)
        {
            do
            {
                void* dstD = *(*(i[0x4d] + (j << 2)) * i[0x50] + i[0x4c]);
                uint32_t valA8 = Render_DrawSplineMesh_4();
                int32_t objC3 = 0;
                objC3 = *(dstD + 0x1c);
                int32_t valA12 = *(((valA8 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (valA12)
                    valA12(dstD, a2);

                j += 1;
            } while (j < i[0x4e]);

            i_1 = a1;
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
            void* srcS = i[0x52];

            if (!srcS)
                break;

            i = *(srcS + 8);

            if (!*i)
                break;
        }
    } while (i);
}
