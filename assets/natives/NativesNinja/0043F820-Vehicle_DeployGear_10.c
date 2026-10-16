#include "0043F820-Vehicle_DeployGear_10.h"
/* 0x0043f820 Vehicle_DeployGear_10 full linked: callers=6 callees=4 */
float* sub_43f820(float* a1, double* a2)

{
    double var_18;
    WeaponType_UpdateAnim(&var_18, a2, 0);
    double var_30;
    WeaponType_UpdateAnim(&var_30, a2, 1);
    double var_48 = var_30 - var_18;
    double var_28;
    double var_10;
    double var_40 = var_28 - var_10;
    double var_20;
    double var_8;
    double var_38 = var_20 - var_8;
    sub_4b3100(&var_48);
    float var_54 = var_48;
    float var_50 = var_40;
    float var_4c = var_38;
    return WeaponType_SetCategory(a1, &var_54);
}
