// IGI native provenance: VehiclePhysics_Invoke17 - 0x0042FA60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FA60-VehiclePhysics_Invoke17.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke17.h"

int32_t VehiclePhysics_Invoke17(void* arg1, float arg2)

{
    int32_t* eax_4 = arg2;
    void* dest_ptr = *eax_4;
    Script_SpawnNewTask_17(arg1, eax_4);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    int16_t eax_1;
    eax_1 = *(dest_ptr + 0x74);
    x87_r6 - x87_r7;
    *(arg1 + 0x744) = eax_1;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    float var_c_2 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    return WorldObject_CommitTransform(Level_StartMission_4(), arg1, dest_ptr + 0x10, var_c_2);
}
