// Original IGI.EXE function: Vehicle_DeployGear_10 (VA 0x0043F820; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_DeployGear_10.h"
float* Vehicle_DeployGear_10(float* context, double* param_2)

{
    double item_18;
    WeaponType_UpdateAnim(&item_18, param_2, 0);
    double item_30;
    WeaponType_UpdateAnim(&item_30, param_2, 1);
    double item_48 = item_30 - item_18;
    double item_28;
    double item_10;
    double item_40 = item_28 - item_10;
    double item_20;
    double item_8;
    double item_38 = item_20 - item_8;
    Sys_FreeMemory_11(&item_48);
    float item_54 = item_48;
    float item_50 = item_40;
    float item_4c = item_38;
    return WeaponType_SetCategory(context, &item_54);
}
