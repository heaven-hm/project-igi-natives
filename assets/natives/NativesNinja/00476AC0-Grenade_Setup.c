#include "00476AC0-Grenade_Setup.h"
/* 0x00476ac0 Grenade_Setup full linked: callers=0 callees=9 */
uint32_t sub_476ac0(int32_t* a1)

{
    void* ebx = *(a1[0x6d] + 0x2d4);
    int32_t eax_1 = a1[0x1c8];

    if (eax_1)
    {
        a1[0x1c8] = eax_1 - 1;
        sub_476d90(a1);
        uint32_t result = sub_476cc0(a1);
        int32_t* i = a1[2];

        if (*i && i)
        {
            int32_t edx_1 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_16;

                if (!esi_1)
                    eax_16 = nullptr;
                else
                {
                    int32_t eax_13 = *esi_1;
                    int32_t eax_14 = -(eax_13);
                    eax_16 = (eax_14 - eax_14) & esi_1;
                }

                *((edx_1 << 2) + &g_afa6e0) = eax_16;
                int32_t edx_2 = edx_1 + 1;
                int32_t eax_17 = 0;
                g_afa7e0 = edx_2;
                eax_17 = i[7];
                result = *((eax_17 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_2 = g_afa7e0;
                }

                i = *((edx_2 << 2) + &g_afa6dc);
                edx_1 = edx_2 - 1;
                g_afa7e0 = edx_1;
            } while (i);
        }

        return result;
    }

    int32_t* var_74 = a1;
    int32_t var_80 = eax_1;
    int32_t var_7c = 0xc0a00000;
    char eax_2 = Level_CheckQTaskID_3();
    void var_78;
    int32_t var_70[0x1c];
    sub_4cabf0(Level_StartMission_4(), &var_70, &a1[8], 1, &var_80, eax_2, &var_78, 0xffffffff);
    void* eax_4 = a1[0x1cc];
    int32_t* eax_5;

    if (eax_4)
        eax_5 = *(eax_4 + 0x6e0);

    if (!eax_4 || !eax_5)
    {
        int32_t eax_8 = *(ebx + 4);

        if (!eax_8)
        {
            int32_t var_90_5 = 0;
            int32_t var_94_4 = 0x47200000;
            int32_t var_98_3 = 2;
            int32_t var_9c_3 = 0x15;
            char* var_a0_2 = "explo_02_m";
            char* var_a4_2 = "1009_01_1";
            int32_t var_ac_2 = 1;
            int32_t var_b0_2 = 3;
            int32_t var_b4_2 = 0x45c00000;
            sub_480fe0(&a1[8], 1, 1, 0x3f800000, 0x46a00000, 0, 0x45c00000, 3, 1, &var_70,
                "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (eax_8 == 1)
            sub_47e9a0(&a1[8], &var_70, 0x46a00000, 0x47200000);
    }
    else
    {
        int32_t ecx_1 = *(ebx + 4);

        if (!ecx_1)
        {
            int32_t var_90_4 = 0;
            int32_t var_94_3 = 0x47200000;
            int32_t var_98_2 = 2;
            int32_t var_9c_2 = 0x15;
            char* var_a0_1 = "explo_02_m";
            char* var_a4_1 = "1009_01_1";
            int32_t var_ac_1 = 1;
            int32_t var_b0_1 = 3;
            int32_t var_b4_1 = 0x45c00000;
            int32_t var_b8_1 = ecx_1;
            int32_t var_bc_1 = ecx_1;
            sub_480fe0(&a1[8], 1, 1, *eax_5, eax_5[1] * 4096f, eax_5[2] * 4096f, 0x45c00000, 3,
                1, &var_70, "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (ecx_1 == 1)
        {
            int32_t var_90_1 = ecx_1 - 1;
            int32_t var_94_1 = ecx_1 - 1;
            sub_47e9a0(&a1[8], &var_70, eax_5[1] * 4096f, eax_5[2] * 4096f);
        }
    }

    return QTask_FindType(a1);
}
