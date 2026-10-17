// IGI native provenance: AIStationaryGunHolder_Init_2 - 0x0046E210 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046E210-AIStationaryGunHolder_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIStationaryGunHolder_Init_2.h"

int32_t* AIStationaryGunHolder_Init_2(float pThis)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), pThis, 0);
    long double fpu_val_7 = *(pThis + 0x9c);
    long double fpu_val_6 = *(pThis + 0xa0);
    fpu_val_6 - fpu_val_7;
    memset(pThis + 0x2598, 0, 0x18);
    long double fpu_val_7_1;

    if (!(*(&((fpu_val_6 < fpu_val_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6, fpu_val_7) ? 1 : 0) << 0xa
            | (fpu_val_6 == fpu_val_7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(pThis + 0xa0);
    else
        fpu_val_7_1 = *(pThis + 0x9c);

    long double fpu_val_6_1 = *(pThis + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(pThis + 0x9c);
        long double fpu_val_6_2 = *(pThis + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(pThis + 0xa0);
        else
            fpu_val_7_3 = *(pThis + 0x9c);
    }
    else
        fpu_val_7_3 = *(pThis + 0x98);

    float local_18_2 = Render_ComputeNormals(*(pThis + 0x6c)) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), pThis, pThis + 0x2598, local_18_2, 1);
    *(pThis + 0x25b0) = 0x3f800000;
    *(pThis + 0x25b4) = 0;
    *(pThis + 0x25b8) = 0;
    *(pThis + 0x25bc) = 0;
    *(pThis + 0x25c0) = 0x3f800000;
    *(pThis + 0x25c4) = 0;
    *(pThis + 0x25c8) = 0;
    *(pThis + 0x25cc) = 0;
    *(pThis + 0x25d0) = 0x3f800000;
    *(pThis + 0x25d4) = 0;
    memcpy(pThis + 0x70, pThis + 0x25b0, 0x28);
    *(pThis + 0x25e8) = 0x43b40000;
    *(pThis + 0x25ec) = 0x43b40000;
    *(pThis + 0x25f0) = 0x41200000;
    *(pThis + 0x25d8) = 0;
    *(pThis + 0x2694) = 1;
    Script_ExecuteLevelScript_6(pThis + 0x25f4);
    int32_t* result = Script_ExecuteLevelScript_6(pThis + 0x2644);
    *(pThis + 0x2698) = 0;
    return result;
}
