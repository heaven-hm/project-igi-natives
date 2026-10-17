// IGI native provenance: GenericPickup_Process - 0x0046C490 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046C490-GenericPickup_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPickup_Process.h"
void* GenericPickup_Process(float context)

{
    void* result = DynObj_Missing(context + 0x108);

    if (result)
        result = DynObj_CreateMagicObject_5(context, result);

    result = *(context + 0x11a);

    if (!result)
        return result;

    long double fpu_val_7_1 = *(context + 0x9c);
    long double fpu_val_6_1 = *(context + 0xa0);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_2;

    if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_2 = *(context + 0xa0);
    else
        fpu_val_7_2 = *(context + 0x9c);

    long double fpu_val_6_2 = *(context + 0x98);
    fpu_val_6_2 - fpu_val_7_2;
    long double fpu_val_7_4;

    if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_5 = *(context + 0x9c);
        long double fpu_val_6_3 = *(context + 0xa0);
        fpu_val_6_3 - fpu_val_7_5;

        if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_4 = *(context + 0xa0);
        else
            fpu_val_7_4 = *(context + 0x9c);
    }
    else
        fpu_val_7_4 = *(context + 0x98);

    float item_8_3 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0xf0, item_8_3);
    double* data_3 = DynObj_UpdateDynTree_4(context);
    return Render_BindTexture_14(Level_StartMission_4(), context, data_3);
}
