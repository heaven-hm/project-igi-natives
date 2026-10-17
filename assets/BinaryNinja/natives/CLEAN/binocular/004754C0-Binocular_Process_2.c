// IGI native provenance: Binocular_Process_2 - 0x004754C0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004754C0-Binocular_Process_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Process_2.h"
int32_t Binocular_Process_2(float context, int32_t* param_2)

{
    char data_val = *(context + 0xf0);

    if (!data_val)
    {
        memcpy(context + 0x20, *param_2, 0x18);
        memcpy(context + 0x70, param_2[1], 0x28);
        return data_val;
    }

    long double fpu7 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context + 0xa0);
    else
        fpu_val_7_1 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context + 0xa0);
        else
            fpu_val_7_3 = *(context + 0x9c);
    }
    else
        fpu_val_7_3 = *(context + 0x98);

    long double fpu_val_7_6 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    int32_t data_4 = WorldObject_CommitTransform(Level_StartMission_4(), context, *param_2, fpu_val_7_6);
    memcpy(context + 0x70, param_2[1], 0x28);
    return data_4;
}
