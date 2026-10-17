// IGI native provenance: WeaponType_CycleWeapon - 0x004149B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004149B0-WeaponType_CycleWeapon.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_CycleWeapon.h"
int32_t WeaponType_CycleWeapon(int32_t context, double* param_2)

{
    int32_t item_74 = context;
    int32_t item_80 = 0;
    int32_t item_7c = 0xc1390000;
    char data_1 = Level_CheckQTaskID_3();
    void item_78;
    void item_70;
    DynObj_LookupHashItem_10(Level_StartMission_4(), &item_70, param_2, 1, &item_80, data_1, &item_78, 0xffffffff);
    int32_t result_1;
    int32_t result = result_1;
    int32_t item_58;
    int32_t item_54;

    if (result)
    {
        param_2[2] = item_58;
        *(param_2 + 0x14) = item_54;
    }
    else
    {
        item_80 = -(item_80);
        char data_3 = Level_CheckQTaskID_3();
        DynObj_LookupHashItem_10(Level_StartMission_4(), &item_70, param_2, 1, &item_80, data_3, &item_78, 0xffffffff);
        result = result_1;

        if (result)
        {
            param_2[2] = item_58;
            *(param_2 + 0x14) = item_54;
        }
    }
    return result;
}
