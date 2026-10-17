// Original IGI.EXE function: WeaponType_CycleWeapon (VA 0x004149B0; static CFG gate PASS, CFG score 1.000).
#include "WeaponType_CycleWeapon.h"
int32_t WeaponType_CycleWeapon(int32_t a1, double* a2)

{
    int32_t v_74 = a1;
    int32_t v_80 = 0;
    int32_t v_7c = 0xc1390000;
    char valA1 = Level_CheckQTaskID_3();
    void v_78;
    void v_70;
    DynObj_LookupHashItem_10(Level_StartMission_4(), &v_70, a2, 1, &v_80, valA1, &v_78, 0xffffffff);
    int32_t result_1;
    int32_t result = result_1;
    int32_t v_58;
    int32_t v_54;

    if (result)
    {
        a2[2] = v_58;
        *(a2 + 0x14) = v_54;
    }
    else
    {
        v_80 = -(v_80);
        char valA3 = Level_CheckQTaskID_3();
        DynObj_LookupHashItem_10(Level_StartMission_4(), &v_70, a2, 1, &v_80, valA3, &v_78, 0xffffffff);
        result = result_1;

        if (result)
        {
            a2[2] = v_58;
            *(a2 + 0x14) = v_54;
        }
    }
    return result;
}
