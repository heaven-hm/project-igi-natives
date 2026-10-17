// IGI native provenance: MoveRigidObj_LoadParameters - 0x0051F810 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051F810-MoveRigidObj_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MoveRigidObj_LoadParameters.h"
int32_t* MoveRigidObj_LoadParameters(uint32_t context)

{
    *(context + 0x1a8) = 0;
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    *(context + 0x1ac) = 0xbff00000;
    *(context + 0xe8) = CarGun_Create(nullptr, context);
    *(context + 0x180) = 0;
    Script_ExecuteLevelScript_6(context + 0x1b4);
    DynObj_LookupHashItem_6(g_a44344, context, 0);
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
    DynObj_LinkDynamicCube_8(g_a44344, context, &item_20, fpu_val_7_6, 2);
    int32_t* entity_2 = context + 0x158;
    int32_t* result = context + 0xf8;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        result[-2] = 0;
        result[-1] = 0;
        *result = 0;
        result[1] = 0;
        result[2] = 0;
        result[3] = 0;
        entity_2[-2] = 0;
        *entity_2 = 0;
        entity_2[2] = 0;
        memset(&result[0xa], 0, 0x18);
        entity_2[4] = 0xbf800000;
        entity_2[6] = 0xbf800000;
        entity_2[8] = 0xbf800000;
        entity_2 = &entity_2[1];
        result = &result[6];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(context + 0x204) = 0;
    return result;
}
