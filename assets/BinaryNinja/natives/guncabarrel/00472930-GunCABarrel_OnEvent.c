// Original IGI.EXE function: GunCABarrel_OnEvent (VA 0x00472930; static CFG gate PASS, CFG score 1.000).
#include "GunCABarrel_OnEvent.h"
void* GunCABarrel_OnEvent(double* a1, void* a2)

{
    if (*(a2 + 8) == 5)
    {
        for (int32_t i = 0; i < 6; i += 1)
        {
            double v_20;
            WeaponType_UpdateAnim(&v_20, a1, i);
            float tmpD1 = a1[0x10];
            float valA1 = *(a1 + 0x8c);
            v_20 = v_20 + a1[4];
            double v_18 = v_18 + a1[5];
            double v_10 = v_10 + a1[6];
            float v_28_2 = -(tmpD1);
            float v_24_2 = -(valA1);
            float v_2c = -(*(a1 + 0x74)) * 113f;
            float v_28_3 = v_28_2 * 113f;
            float v_24_3 = v_24_2 * 113f;
            Weapon_EjectMagazine_5(Script_FormatString(), &v_20, &v_2c, &a1[0xe], "113_01_1");
        }

        DynObj_CreateMagicObject_5(a1, DynObj_Missing("101_02_1"));
    }

    if (*(a2 + 8) != 6)
        return a2;

    void* valA4 = DynObj_Missing("101_05_1");

    if (valA4)
        return DynObj_CreateMagicObject_5(a1, valA4);

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
