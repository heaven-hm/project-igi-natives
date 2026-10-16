#include "004163E0-Level_TimeSpentRedrawing2F.h"
/* 0x004163e0 Level_TimeSpentRedrawing2F full linked: callers=1 callees=20 */
void* Level_TimeSpentRedrawing2F()

{
    int32_t __saved_edi = 1;
    int32_t __saved_esi = Flow_RequestEvent_2();
    int32_t var_10;
    void var_c;
    QTask_CloseEvent_3(&var_10, &var_c);
    int32_t __saved_edi_1 = sub_4e7530();
    int32_t __saved_esi_1 = sub_4e75b0();
    int32_t var_8;
    QTask_CloseEvent_3(&var_8, &var_c);

    if (var_10)
    {
        __saved_esi_1 = var_8 / var_10 * 100f;
        sub_4e7bd0("Time spent redrawing: %.2f%%\n");
    }

    if (WeaponType_GetConfig_2(0x19) && Level_InitTextures_5(0))
    {
        int32_t edi_1 = 0;

        if (Weapons_CountGet() > 0)
        {
            int32_t eax_13;

            do
            {
                int32_t* eax_7 = HumanPlayer_TakeDamage_10(edi_1);
                int32_t edx_1 = 0;
                var_8 = *eax_7;
                int32_t eax_8 = eax_7[0x192];
                edx_1 = eax_8 <= 0;
                int32_t var_4_1 = (edx_1 - 1) & eax_8;
                int32_t ecx_2 = 0;
                ecx_2 = *(Level_InitTextures_5(0) + 0x1c);
                int32_t esi_3 = *(((ecx_2 + sub_46c970() * 0x180) << 2) + &g_a96ae0);

                if (esi_3)
                    esi_3(Level_InitTextures_5(0), &var_8);

                edi_1 += 1;
                eax_13 = Weapons_CountGet();
            } while (edi_1 < eax_13);
        }

        int32_t eax_14 = sub_47cda0("AMMO_ID_M203");
        sub_47ce00(Level_InitTextures_5(0) + 0x340, eax_14, 0xa);
    }

    if (DEBUG_KEYSENABLEINVALID(0x13))
        Flow_SetState(5);

    void* result = DEBUG_KEYSENABLEINVALID(0x17);

    if (result)
    {
        result = g_57babc;
        *(result + 0xe1) ^= 1;
    }

    return result;
}
