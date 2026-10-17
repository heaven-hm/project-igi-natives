// IGI native provenance: PickupTrigger_InvokeInit_46D7D0 - 0x0046D7D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D7D0-PickupTrigger_InvokeInit_46D7D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeInit_46D7D0.h"

int32_t* PickupTrigger_InvokeInit_46D7D0(float arg1)

{
    Qhash_Init(1);
    *(arg1 + 0x10c) = Sys_CheckHeap_22(arg1 + 0x110);
    Qhash_Reset();
    int32_t* result = Weapon_CycleFireMode_7(*(arg1 + 0x10c));

    if (!result)
        return result;

    void* eax_3 = DynObj_Missing(&result[0x52]);

    if (eax_3)
        DynObj_CreateMagicObject_5(arg1, eax_3);

    long double x87_r7_1 = *(arg1 + 0x9c);
    long double x87_r6_1 = *(arg1 + 0xa0);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_2;

    if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_2 = *(arg1 + 0xa0);
    else
        x87_r7_2 = *(arg1 + 0x9c);

    long double x87_r6_2 = *(arg1 + 0x98);
    x87_r6_2 - x87_r7_2;
    long double x87_r7_4;

    if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_5 = *(arg1 + 0x9c);
        long double x87_r6_3 = *(arg1 + 0xa0);
        x87_r6_3 - x87_r7_5;

        if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = *(arg1 + 0xa0);
        else
            x87_r7_4 = *(arg1 + 0x9c);
    }
    else
        x87_r7_4 = *(arg1 + 0x98);

    float var_8_4 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_4;
    WorldObject_CommitTransform(Level_StartMission_4(), arg1, arg1 + 0xf0, var_8_4);
    double* eax_7 = DynObj_UpdateDynTree_4(arg1);
    return Render_BindTexture_14(*(arg1 + 0x68), arg1, eax_7);
}
