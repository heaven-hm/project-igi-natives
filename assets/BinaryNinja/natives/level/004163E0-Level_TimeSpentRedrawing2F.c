#include "Level_TimeSpentRedrawing2F.h"
void* Level_TimeSpentRedrawing2F()

{
    int32_t saved_dst = 1;
    int32_t saved_src = Flow_RequestEvent_2();
    int32_t v_10;
    void v_c;
    QTask_CloseEvent_3(&v_10, &v_c);
    int32_t __saved_edi_1 = StatusScreen_GetEvent();
    int32_t __saved_esi_1 = SoundSys_StopSoundSample_9();
    int32_t v_8;
    QTask_CloseEvent_3(&v_8, &v_c);

    if (v_10)
    {
        __saved_esi_1 = v_8 / v_10 * 100f;
        SoundSys_Update3DPosition_11("Time spent redrawing: %.2f%%\n");
    }

    if (WeaponType_GetConfig_2(0x19) && Level_InitTextures_5(0))
    {
        int32_t dstD1 = 0;

        if (Weapons_CountGet() > 0)
        {
            int32_t valA13;

            do
            {
                int32_t* valA7 = HumanPlayer_TakeDamage_10(dstD1);
                int32_t tmpD1 = 0;
                v_8 = *valA7;
                int32_t valA8 = valA7[0x192];
                tmpD1 = valA8 <= 0;
                int32_t v_4_1 = (tmpD1 - 1) & valA8;
                int32_t objC2 = 0;
                objC2 = *(Level_InitTextures_5(0) + 0x1c);
                int32_t srcS3 = *(((objC2 + AI_UpdateOrders_29() * 0x180) << 2) + &g_a96ae0);

                if (srcS3)
                    srcS3(Level_InitTextures_5(0), &v_8);

                dstD1 += 1;
                valA13 = Weapons_CountGet();
            } while (dstD1 < valA13);
        }

        int32_t valA14 = Weapon_FireBullet_8("AMMO_ID_M203");
        Weapon_EjectShell_8(Level_InitTextures_5(0) + 0x340, valA14, 0xa);
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
