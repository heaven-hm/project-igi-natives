// IGI native provenance: PickupTrigger_Invoke5 - 0x0046C2B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046C2B0-PickupTrigger_Invoke5.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke5.h"

int32_t PickupTrigger_Invoke5(float arg1)

{
    int32_t* source_ptr = arg1;
    DynObj_QtasklistIsFull(Level_LoadObjects_5(), source_ptr);
    source_ptr[0x3c] = 0;
    source_ptr[0x3e] = 0;
    source_ptr[0x40] = 0;
    source_ptr[0x3d] = 0;
    source_ptr[0x3f] = 0;
    source_ptr[0x41] = 0;
    DynObj_LookupHashItem_6(Level_StartMission_4(), source_ptr, 0);
    long double x87_r7 = source_ptr[0x27];
    long double x87_r6 = source_ptr[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = source_ptr[0x28];
    else
        x87_r7_1 = source_ptr[0x27];

    long double x87_r6_1 = source_ptr[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = source_ptr[0x27];
        long double x87_r6_2 = source_ptr[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = source_ptr[0x28];
        else
            x87_r7_3 = source_ptr[0x27];
    }
    else
        x87_r7_3 = source_ptr[0x26];

    float var_14_3 = Render_ComputeNormals(source_ptr[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_ptr, &source_ptr[0x3c], var_14_3, 2);
    double* eax_6 = DynObj_UpdateDynTree_4(source_ptr);
    int32_t result = Render_ComputeNormals_14(Level_StartMission_4(), source_ptr, eax_6);
    source_ptr[0x46] = 0;
    *(source_ptr + 0x119) = 0;
    *(source_ptr + 0x11a) = 1;
    source_ptr[0x42] = 0;
    return result;
}
