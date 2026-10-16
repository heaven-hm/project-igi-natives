#include "00428390-Missile_Run.h"
/* 0x00428390 Missile_Run full linked: callers=0 callees=19 */
int32_t Missile_Run(int32_t* a1)

{
    void* ebp = *(a1[0x6d] + 0x2d4);
    int32_t* eax_1 = a1[0x218];

    if (eax_1)
    {
        int32_t eax_2 = *eax_1;

        if (eax_2)
            memcpy(&a1[0x20a], eax_2 + 0x20, 0x18);
    }

    int32_t eax_3 = *(ebp + 0x11c);

    if (!eax_3)
    {
        void* var_ac_1 = &a1[0x20a];
        Menu_UpdateLanguage_19(a1);
    }
    else if (eax_3 == 1)
        Menu_FormatScreen_19(a1);
    else if (eax_3 == 2)
        Menu_DrawWidget_19(a1, &a1[0x20a]);
    else if (eax_3 == 3)
        Menu_HandleInput_19(a1, &a1[0x20a]);
    else if (eax_3 == 4)
        Menu_PlayMusic_19(a1);

    long double x87_r7 = a1[0x219];
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40) && *(ebp + 0x118))
        Menu_LeaveMenus_19(a1);

    Menu_UpdateLanguage_20(a1);
    Menu_RequestScreen_19(a1);
    sub_4f4660(a1);
    int32_t* i = a1[2];

    if (*i && i)
    {
        int32_t edx_2 = g_afa7e0;

        do
        {
            int32_t* esi_2 = *i;
            void* eax_10;

            if (!esi_2)
                eax_10 = nullptr;
            else
            {
                int32_t eax_7 = *esi_2;
                int32_t eax_8 = -(eax_7);
                eax_10 = (eax_8 - eax_8) & esi_2;
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

    int32_t result = a1[0x6e];
    int32_t var_98;
    void var_90;
    double var_88[0x3];
    int32_t var_70[0x16];

    if (!result)
    {
        if (!(*(g_bc2360 + 0x68) & 0x1f))
        {
            memcpy(&var_88, &a1[8], 0x18);
            int32_t* var_8c_2 = a1;
            var_98 = 0;
            int32_t var_94_2 = 0xc14f4000;
            sub_4cabf0(Level_StartMission_4(), &var_70, &var_88, 1, &var_98, 0xc, &var_90,
                0xffffffff);
            int32_t result_1;
            result = result_1;

            if (!result)
                return QTask_FindType(a1);
        }

        return result;
    }

    int32_t eax_13 = 0;
    char* ecx_2 = a1 + 0x1d6;

    while (!*ecx_2)
    {
        eax_13 += 1;
        ecx_2 = &ecx_2[0x38];

        if (eax_13 >= 0x16)
            break;
    }

    memcpy(&var_88, &a1[8], 0x18);
    int32_t* var_8c_1 = a1;
    var_98 = 0;
    int32_t var_94_1 = 0xc0c80000;
    sub_4cabf0(Level_StartMission_4(), &var_70, &var_88, 1, &var_98, 0xc, &var_90, 0xffffffff);
    sub_480fe0(&var_88, 1, 1, 0x40a00000, 0x46200000, 0x45e00000, 0x45c00000, 0xa, 5, &var_70,
        "1009_01_1", "explo_03_l", 0x15, 2, 0x47c80000, a1[0x225]);
    return QTask_FindType(a1);
}
