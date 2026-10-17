// IGI native provenance: Elevator_LoadParameters - 0x0043D010 - CFG score 86.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043D010-Elevator_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Elevator_LoadParameters.h"
char* Elevator_LoadParameters(int32_t* context)

{
    int32_t data_val = g_a44344;
    int32_t i = 0;
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    DynObj_LookupHashItem_6(data_val, context, 0);
    long double fpu7 = context[0x27];
    long double fpu6 = context[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = context[0x28];
    else
        fpu_val_7_1 = context[0x27];

    long double fpu_val_6_1 = context[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = context[0x27];
        long double fpu_val_6_2 = context[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = context[0x28];
        else
            fpu_val_7_3 = context[0x27];
    }
    else
        fpu_val_7_3 = context[0x26];

    long double fpu_val_7_6 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(g_a44344, context, &item_20, fpu_val_7_6, 2);
    memset(&context[0x3c], 0, 0x18);
    context[0x48] = 0x3f800000;
    context[0x49] = 0;
    context[0x4a] = 0;
    context[0x4b] = 0;
    context[0x4c] = 0x3f800000;
    context[0x4d] = 0;
    context[0x4e] = 0;
    context[0x4f] = 0;
    context[0x50] = 0x3f800000;
    context[0x51] = 0;
    context[0x60] = 0xffffffff;
    context[0x5c] = 0;
    context[0x61] = 0;
    context[0x64] = 0;
    context[0x65] = 0x40a00000;
    context[0x66] = 0x3f7d70a4;
    context[0x6f] = 0;
    memset(&context[0x67], 0, 0x14);
    int32_t* dest_val = &context[0x71];

    do
    {
        *(context + i + 0x1b0) = 0;
        Script_ExecuteLevelScript_6(dest_val);
        i += 1;
        dest_val = &dest_val[0x14];
    } while (i < 0xa);

    Script_ExecuteLevelScript_6(&context[0x139]);
    Script_ExecuteLevelScript_6(&context[0x14d]);
    Script_ExecuteLevelScript_6(&context[0x161]);
    memcpy(&context[0x42], &context[8], 0x18);
    context[0x70] = 0;
    memcpy(&context[0x52], &context[0x1c], 0x28);
    context[0x175] = 0;
    *(context + 0x5d5) = 0;
    *(context + 0x5d6) = 0;
    *(context + 0x5d7) = 0;
    context[0x176] = 0;
    context[0x190] = 1;
    char* result = context + 0x5d9;
    int32_t i_2 = 3;
    int32_t i_1;

    do
    {
        *result = 0;
        result = &result[0x20];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    context[0x18f] = 0;
    context[0x191] = 0xffffffff;
    context[0x63] = 0;
    *(context + 0x18d) = 0;
    return result;
}
