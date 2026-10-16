#include "004DE8A0-Sector_Cleanup_5.h"
/* 0x004de8a0 Sector_Cleanup_5 full linked: callers=0 callees=3 */
void sub_4de8a0(int32_t* a1, int32_t a2)

{
    int32_t* i_1 = a1;
    int32_t* i = i_1;

    if (!i_1)
        return;

    do
    {
        (*(((sub_4d14d0() * 0x180 + sub_4c48c0()) << 2) + &g_a96ae0))(i, a2);
        int32_t j = 0;

        if (i[0x4e] > 0)
        {
            do
            {
                void* edi = *(*(i[0x4d] + (j << 2)) * i[0x50] + i[0x4c]);
                uint32_t eax_8 = sub_4d14d0();
                int32_t ecx_3 = 0;
                ecx_3 = *(edi + 0x1c);
                int32_t eax_12 = *(((eax_8 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (eax_12)
                    eax_12(edi, a2);

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
            void* esi = i[0x52];

            if (!esi)
                break;

            i = *(esi + 8);

            if (!*i)
                break;
        }
    } while (i);
}
