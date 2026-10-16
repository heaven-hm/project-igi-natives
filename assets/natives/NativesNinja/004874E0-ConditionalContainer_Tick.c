#include "004874E0-ConditionalContainer_Tick.h"
/* 0x004874e0 ConditionalContainer_Tick full linked: callers=0 callees=10 */
int32_t* sub_4874e0(int32_t* a1)

{
    int32_t* edi = a1;
    int32_t ebp = edi[0x44];
    int32_t* eax = sub_4f16c0(&edi[8]);
    int64_t var_c;

    if (eax)
    {
        eax = sub_4f16e0(&edi[8], edi);
        long double x87_r0;
        var_c = x87_r0;
        eax = var_c;
        edi[0x44] = eax;
    }

    eax = edi[0x44];

    if (eax || ebp)
    {
        eax = *(edi + 0x112);

        if (!eax)
        {
            var_c = 0;
            eax = Level_StartMission_4();
            int32_t* i = edi[2];
            *(&var_c + 4) = eax;
            int32_t var_4_1 = 2;

            if (*i && i)
            {
                int32_t ecx_7 = g_afa7e0;

                do
                {
                    int32_t* edx_3 = *i;
                    void* eax_10;

                    if (!edx_3)
                        eax_10 = nullptr;
                    else
                    {
                        int32_t eax_7 = *edx_3;
                        int32_t eax_8 = -(eax_7);
                        eax_10 = (eax_8 - eax_8) & edx_3;
                    }

                    *((ecx_7 << 2) + &g_afa6e0) = eax_10;
                    g_afa7e0 = ecx_7 + 1;
                    uint32_t eax_12 = sub_4cea10();
                    int32_t eax_13 = 0;
                    eax_13 = i[7];
                    eax = *(((eax_12 * 0x180 + eax_13) << 2) + &g_a96ae0);

                    if (eax)
                        eax = eax(i, &var_c);

                    ecx_7 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_7;
                    i = *((ecx_7 << 2) + &g_afa6e0);
                } while (i);
            }

            *(edi + 0x112) = 1;
        }

        int32_t* i_1 = edi[2];

        if (*i_1 && i_1)
        {
            int32_t edx_7 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i_1;
                void* eax_17;

                if (!esi_1)
                    eax_17 = nullptr;
                else
                {
                    int32_t eax_14 = *esi_1;
                    int32_t eax_15 = -(eax_14);
                    eax_17 = (eax_15 - eax_15) & esi_1;
                }

                *((edx_7 << 2) + &g_afa6e0) = eax_17;
                int32_t edx_8 = edx_7 + 1;
                int32_t eax_18 = 0;
                g_afa7e0 = edx_8;
                eax_18 = i_1[7];
                eax = *((eax_18 << 2) + &g_a970e0);

                if (eax)
                {
                    eax = eax(i_1);
                    edx_8 = g_afa7e0;
                }

                i_1 = *((edx_8 << 2) + &g_afa6dc);
                edx_7 = edx_8 - 1;
                g_afa7e0 = edx_7;
            } while (i_1);
        }
    }
    else
    {
        eax = *(edi + 0x112);

        if (eax)
        {
            eax = Level_StartMission_4();
            int32_t* i_2 = edi[2];
            a1 = eax;

            if (*i_2 && i_2)
            {
                int32_t ecx_1 = g_afa7e0;

                do
                {
                    int32_t* edx_1 = *i_2;
                    void* eax_4;

                    if (!edx_1)
                        eax_4 = nullptr;
                    else
                    {
                        int32_t eax_1 = *edx_1;
                        int32_t eax_2 = -(eax_1);
                        eax_4 = (eax_2 - eax_2) & edx_1;
                    }

                    *((ecx_1 << 2) + &g_afa6e0) = eax_4;
                    g_afa7e0 = ecx_1 + 1;
                    uint32_t eax_6 = sub_4cea20();
                    int32_t edx_2 = 0;
                    edx_2 = i_2[7];
                    eax = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);

                    if (eax)
                        eax = eax(i_2, &a1);

                    ecx_1 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_1;
                    i_2 = *((ecx_1 << 2) + &g_afa6e0);
                } while (i_2);
            }

            *(edi + 0x112) = 0;
        }
    }

    eax = edi[0x44];

    if (!eax)
    {
    label_487706:

        if (ebp)
        {
            eax = sub_4f16c0(&edi[0x30]);

            if (eax)
            {
                eax = sub_4f16e0(&edi[0x30], edi);
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
            }
        }
    }
    else if (!ebp)
    {
        eax = sub_4f16c0(&edi[0x1c]);

        if (eax)
        {
            int32_t eax_19 = sub_4f16e0(&edi[0x1c], edi);
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            return eax_19;
        }
    }
    else if (!eax)
        goto label_487706;

    return eax;
}
