// IGI native provenance: Grenade_LoadParameters - 0x004769B0 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004769B0-Grenade_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Grenade_LoadParameters.h"
int32_t* Grenade_LoadParameters(float context)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    *(context + 0x728) = 0;
    *(context + 0x724) = Frames_GetUpdateCounter();
    *(context + 0x72c) = 0;
    *(context + 0x730) = 0;
    DynObj_LookupHashItem_6(Level_StartMission_4(), context, 0);
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

    float item_24_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_18, item_24_2, 2);
    return DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), context);
}
