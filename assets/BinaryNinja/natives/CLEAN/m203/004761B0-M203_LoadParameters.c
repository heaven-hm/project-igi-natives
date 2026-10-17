// IGI native provenance: M203_LoadParameters - 0x004761B0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 004761B0-M203_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "M203_LoadParameters.h"
struct status_msg* M203_LoadParameters(float context)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), context);
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

    float item_44_3 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_18, item_44_3, 2);
    *(context + 0x114) = 0;
    *(context + 0x118) = 0;
    uint32_t temp_1 = g_5be3ac + 0x18;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_38;
    memcpy(&item_38,
        "\x9a\x99\x19\x44\x9a\x99\x19\x44\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* data_6 = Level_StartMission_4();
    int32_t item_30;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), data_6, temp_1, &item_24, &item_30, &item_38,
        0x49480000, 0x1000008, 0, 0x3dcccccd, 0, 0x14, 0);
    *(context + 0x11c) = result;
    return result;
}
