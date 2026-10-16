#include "004DD1C0-Sector_LoadParameters.h"
/* 0x004dd1c0 Sector_LoadParameters full linked: callers=0 callees=5 */
int32_t sub_4dd1c0(void* a1)

{
    int32_t ecx = g_a5e334;
    int32_t edx = g_a5e330;
    int32_t var_50 = g_a5e35c;
    int32_t eax_1 = g_a5e310;
    void* var_54 = a1;
    int32_t var_4c = ecx;
    int32_t var_48 = edx;
    int32_t var_44 = eax_1;
    (*((sub_4cfc30() << 2) + &g_a94e84))(&var_54);
    void* edx_1 = *(a1 + 0xe8);
    void var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    void var_28;
    memcpy(&var_28, a1 + 0x70, 0x28);
    int32_t* i = *(edx_1 + 8);

    if (*i && i)
    {
        do
        {
            uint32_t eax_4 = sub_4c56f0();
            int32_t ecx_1 = 0;
            ecx_1 = i[7];
            (*(((eax_4 * 0x180 + ecx_1) << 2) + &g_a96ae0))(i, &var_40);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        do
        {
            uint32_t eax_10 = sub_4c56f0();
            int32_t ecx_2 = 0;
            ecx_2 = i_1[7];
            int32_t eax_14 = *(((eax_10 * 0x180 + ecx_2) << 2) + &g_a96ae0);

            if (eax_14)
                eax_14(i_1, &var_40);

            i_1 = *i_1;

            if (!i_1)
                break;

            if (!*i_1)
                break;
        } while (i_1);
    }

    int32_t result = *(a1 + 0x138);
    int32_t esi_2 = 0;

    if (result > 0)
    {
        do
        {
            void* eax_16 = *(*(*(a1 + 0x134) + (esi_2 << 2)) * *(a1 + 0x140) + *(a1 + 0x130));
            int32_t ecx_5 = 0;
            ecx_5 = *(eax_16 + 0x1c);
            int32_t ecx_6 = *((ecx_5 << 2) + &g_a982e0);

            if (ecx_6)
                ecx_6(eax_16, 0);

            result = *(a1 + 0x138);
            esi_2 += 1;
        } while (esi_2 < result);
    }

    return result;
}
