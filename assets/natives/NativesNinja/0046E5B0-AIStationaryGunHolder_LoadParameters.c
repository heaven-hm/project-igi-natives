#include "0046E5B0-AIStationaryGunHolder_LoadParameters.h"
/* 0x0046e5b0 AIStationaryGunHolder_LoadParameters full linked: callers=0 callees=11 */
void* sub_46e5b0(float a1)

{
    char ebx = *(a1 + 0x2698);
    int64_t var_c;

    if (sub_4f16c0(a1 + 0x2644))
    {
        sub_4f16e0(a1 + 0x2644, a1);
        long double x87_r0;
        var_c = x87_r0;
        *(a1 + 0x2694) = var_c;
    }

    if (sub_4f16c0(a1 + 0x25f4))
    {
        sub_4f16e0(a1 + 0x25f4, a1);
🚫🚫🚫        var_c = /* var_c = unimplemented  {fistp qword [esp+0x14], st0} */;
        /* unimplemented  {fistp qword [esp+0x14], st0} */
        *(a1 + 0x2698) = var_c;
    }

    if (*(a1 + 0x2698))
    {
        memcpy(a1 + 0xf0, a1 + 0x20, 0x18);
        memcpy(a1 + 0x108, a1 + 0x70, 0x28);
        *(a1 + 0x160) = 0;
        sub_489750(a1 + 0x168, a1 + 0xf0, a1, *(a1 + 0x2694));
    }
    else if (ebx)
    {
        sub_489b90(a1 + 0x168);
        sub_4896c0(a1 + 0x168, 1, 4, sub_464250(), 4, 8);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t edx_2 = g_afa7e0;

        do
        {
            int32_t* esi_5 = *i;
            void* eax_10;

            if (!esi_5)
                eax_10 = nullptr;
            else
            {
                int32_t eax_7 = *esi_5;
                int32_t eax_8 = -(eax_7);
                eax_10 = (eax_8 - eax_8) & esi_5;
            }

            *((edx_2 << 2) + &g_afa6e0) = eax_10;
            int32_t edx_3 = edx_2 + 1;
            int32_t eax_11 = 0;
            g_afa7e0 = edx_3;
            eax_11 = i[7];
            int32_t eax_12 = *((eax_11 << 2) + &g_a970e0);

            if (eax_12)
            {
                eax_12(i);
                edx_3 = g_afa7e0;
            }

            i = *((edx_3 << 2) + &g_afa6dc);
            edx_2 = edx_3 - 1;
            g_afa7e0 = edx_2;
        } while (i);
    }

    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t ecx_2 = 0;
        ecx_2 = *(result + 0x1c);
        (*((ecx_2 << 2) + &g_a970e0))(result);
        void* ecx_3 = *(a1 + 0xe8);
        result = a1 + 0x70;
        var_c = a1 + 0x20;
        *(&var_c + 4) = result;
        float var_4_1 = a1;
        int32_t* i_1 = *(ecx_3 + 8);

        if (*i_1 && i_1)
        {
            int32_t ecx_4 = g_afa7e0;

            do
            {
                int32_t* edx_5 = *i_1;
                void* eax_16;

                if (!edx_5)
                    eax_16 = nullptr;
                else
                {
                    int32_t eax_13 = *edx_5;
                    int32_t eax_14 = -(eax_13);
                    eax_16 = (eax_14 - eax_14) & edx_5;
                }

                *((ecx_4 << 2) + &g_afa6e0) = eax_16;
                g_afa7e0 = ecx_4 + 1;
                uint32_t eax_18 = MagicObj_GetEventId();
                int32_t eax_19 = 0;
                eax_19 = i_1[7];
                result = *(((eax_18 * 0x180 + eax_19) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, &var_c);

                ecx_4 = g_afa7e0 - 1;
                g_afa7e0 = ecx_4;
                i_1 = *((ecx_4 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
