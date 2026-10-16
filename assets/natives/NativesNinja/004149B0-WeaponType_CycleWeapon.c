#include "004149B0-WeaponType_CycleWeapon.h"
/* 0x004149b0 WeaponType_CycleWeapon full linked: callers=1 callees=6 */
int32_t WeaponType_CycleWeapon(int32_t a1, double* a2)

{
    int32_t var_74 = a1;
    int32_t var_80 = 0;
    int32_t var_7c = 0xc1390000;
    char eax_1 = Level_CheckQTaskID_3();
    void var_78;
    void var_70;
    sub_4cabf0(Level_StartMission_4(), &var_70, a2, 1, &var_80, eax_1, &var_78, 0xffffffff);
    int32_t result_1;
    int32_t result = result_1;
    int32_t var_58;
    int32_t var_54;

    if (result)
    {
        a2[2] = var_58;
        *(a2 + 0x14) = var_54;
    }
    else
    {
        var_80 = -(var_80);
        char eax_3 = Level_CheckQTaskID_3();
        sub_4cabf0(Level_StartMission_4(), &var_70, a2, 1, &var_80, eax_3, &var_78, 0xffffffff);
        result = result_1;

        if (result)
        {
            a2[2] = var_58;
            *(a2 + 0x14) = var_54;
        }
    }
    return result;
}
