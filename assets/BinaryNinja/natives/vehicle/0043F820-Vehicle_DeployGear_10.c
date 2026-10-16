#include "Vehicle_DeployGear_10.h"
float* Vehicle_DeployGear_10(float* a1, double* a2)

{
    double v_18;
    WeaponType_UpdateAnim(&v_18, a2, 0);
    double v_30;
    WeaponType_UpdateAnim(&v_30, a2, 1);
    double v_48 = v_30 - v_18;
    double v_28;
    double v_10;
    double v_40 = v_28 - v_10;
    double v_20;
    double v_8;
    double v_38 = v_20 - v_8;
    Sys_FreeMemory_11(&v_48);
    float v_54 = v_48;
    float v_50 = v_40;
    float v_4c = v_38;
    return WeaponType_SetCategory(a1, &v_54);
}
