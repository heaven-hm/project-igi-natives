// IGI native provenance: Weapon_ComputeAccuracy_2 - 0x00472050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472050-Weapon_ComputeAccuracy_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy_2.h"
int32_t Weapon_ComputeAccuracy_2(void* context)

{
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    float item_b0;
    float item_70;
    Sys_ResolveSymbol_10(context + 0x7c, &item_70, &item_b0);
    long double fpu7 = data_val;
    float item_a4 = fpu7 * 0.625f;
    float item_a0 = entity_val * 0.791666687f;
    float item_9c = fpu7 * 0.28125f;
    long double fpu_val_7_2 = Sys_AllocateMemory_22(*(context + 0x24));
    float item_98 = fpu_val_7_2 + fpu_val_7_2 + 26.0f;
    float item_94 = item_9c * 0.5f;
    float item_90 = item_98 * 0.5f;
    float item_a8 = item_9c * 0.015625f;
    long double fpu_val_7_11 = item_b0;
    long double f0 = 0.0f;
    fpu_val_7_11 - f0;

    if (*(&((fpu_val_7_11 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        item_b0 = item_b0 + 6.28318548f;

    int32_t i = 0;
    float item_c0 = item_9c * item_b0 * 0.159154937f;
    float item_88 = item_90 + item_a0;

    do
    {
        int32_t* source_1 = nullptr;
        long double fpu_val_7_19;

        if (!(i & 0xf))
        {
            fpu_val_7_19 = 12.0f;
            source_1 = *(context + (i >> 4 << 2) + 0x24);
        }
        else if (i & 7)
            fpu_val_7_19 = 4.0f;
        else
            fpu_val_7_19 = 8.0f;

        long double fpu_val_7_20 = fpu_val_7_19 * 0.5f;
        float item_bc_2 = fpu_val_7_20 + item_90 + item_a0;
        float item_8c_1 = item_c0 + item_a4;
        float item_b4_1 = item_88 - fpu_val_7_20;
        Sys_ExecuteBytecode_15(item_8c_1, item_b4_1, 0x3f800000, item_8c_1, item_bc_2, 0x3f800000, 0.0f, 64.0f, 0.0f, 0.0f,
            64.0f, 0.0f, 0x3f800000, 0, 0);

        if (source_1)
        {
            float item_b8_1 = Sys_CheckHeap_21(source_1);
            long double fpu_val_7_23 = Sys_AllocateMemory_22(source_1);
            long double fpu_val_6_13 = item_8c_1 - item_b8_1 * 0.5f;
            source_1[1] = fpu_val_6_13;
            source_1[2] = item_b4_1 - fpu_val_7_23 - 2.0f;
            Sys_CloseFileStream_18(source_1);
            source_1[1] = fpu_val_6_13;
            source_1[2] = item_bc_2 + 2.0f;
            Sys_CloseFileStream_18(source_1);
        }

        long double fpu_val_7_28 = item_c0 + item_a8;
        item_c0 = fpu_val_7_28;
        long double f1_1 = item_9c;
        fpu_val_7_28 - f1_1;

        if (!(*(&((fpu_val_7_28 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_28, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_28 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
            item_c0 = item_c0 - item_9c;

        i += 1;
    } while (i < 0x40);

    float item_6c;
    int32_t* item_74 = &item_6c;
    int32_t item_58 = 0x3f800000;
    float item_c0_1 = item_94 + item_a4;
    int32_t item_54 = 0;
    int32_t item_50 = 0x42800000;
    int32_t item_4c = 0;
    int32_t item_60 = 0;
    int32_t item_5c = 0;
    int32_t item_64 = 0x3f800000;
    float item_48;
    memcpy(&item_48, &item_6c, 0x24);
    float item_24;
    memcpy(&item_24, &item_6c, 0x24);
    float item_68 = item_a0 + 4.0f;
    long double fpu_val_7_36 = item_c0_1 - 4.0f;
    float item_a8_1 = fpu_val_7_36;
    item_48 = fpu_val_7_36;
    long double fpu_val_7_38 = item_c0_1 + 4.0f;
    item_6c = item_c0_1;
    item_24 = fpu_val_7_38;
    float item_44 = item_a0;
    int32_t data_12 = g_a84a54;
    int32_t item_80 = 0x800000;
    int32_t item_84 = 0;
    int32_t item_7c = 0;
    int32_t item_78 = 3;
    g_a84a50 = 0;
    float item_20 = item_a0;
    (*((data_12 << 2) + &g_a94e84))(&item_84);
    long double fpu_val_7_40 = item_98 + item_a0;
    item_6c = item_c0_1;
    item_48 = item_a8_1;
    int32_t temp_4 = g_a84a54;
    item_24 = fpu_val_7_38;
    float item_68_1 = fpu_val_7_40 - 4.0f;
    float item_44_1 = fpu_val_7_40;
    float item_20_1 = fpu_val_7_40;
    return (*((temp_4 << 2) + &g_a94e84))(&item_84);
}
