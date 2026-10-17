// IGI native provenance: SCamera_Cleanup_3 - 0x004420D0 - CFG score 93.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004420D0-SCamera_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_3.h"
int32_t SCamera_Cleanup_3(float context)

{
    double* source_val = context;
    void* context_val = source_val[0x4ba];
    char* item_30 = context_val + 0x128;
    char* data_1 = DynObj_Missing(item_30);

    if (data_1)
    {
        item_30 = data_1;
        DynObj_CreateMagicObject_5(source_val, item_30);
    }

    double* entity_val = source_val[0x4ba];
    item_30 = nullptr;
    double item_18;
    WeaponType_UpdateAnim(&item_18, entity_val, item_30);
    item_18 = item_18 + *(context_val + 0x20);
    double item_10;
    double item_10_1 = item_10 + *(context_val + 0x28);
    double item_8;
    double item_8_1 = item_8 + *(context_val + 0x30);
    long double fpu_val_7_6 = *(source_val + 0x9c);
    long double fpu6 = source_val[0x14];
    fpu6 - fpu_val_7_6;
    long double fpu_val_7_7;

    if (!(*(&((fpu6 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_6) ? 1 : 0) << 0xa
            | (fpu6 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_7 = source_val[0x14];
    else
        fpu_val_7_7 = *(source_val + 0x9c);

    long double fpu_val_6_1 = source_val[0x13];
    fpu_val_6_1 - fpu_val_7_7;
    long double fpu_val_7_9;

    if (*(&((fpu_val_6_1 < fpu_val_7_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_7) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_10 = *(source_val + 0x9c);
        long double fpu_val_6_2 = source_val[0x14];
        fpu_val_6_2 - fpu_val_7_10;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_10 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_2, fpu_val_7_10) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_9 = source_val[0x14];
        else
            fpu_val_7_9 = *(source_val + 0x9c);
    }
    else
        fpu_val_7_9 = source_val[0x13];

    item_30 = *(source_val + 0x6c);
    long double fpu_val_7_12 = Render_ComputeNormals(item_30) * fpu_val_7_9;
    void* temp_val = source_val[0xd];
    item_30 = fpu_val_7_12;
    WorldObject_CommitTransform(temp_val, source_val, &item_18, item_30);
    double* data_5 = DynObj_UpdateDynTree_4(source_val);
    Render_BindTexture_14(source_val[0xd], source_val, data_5);
    long double fpu_val_7_13 = *(context_val + 0x120);
    source_val[0x1e] = fpu_val_7_13;
    item_30 = *(context_val + 0x108) + *(context_val + 0x124);
    Sys_ReadFileBlock_12(&source_val[0xe], fpu_val_7_13, 0.0f, item_30);
    WeaponType_UpdateAnim(&item_18, source_val, 1);
    item_18 = item_18 + source_val[4];
    double item_10_2 = item_10_1 + source_val[5];
    double item_8_2 = item_8_1 + source_val[6];
    memcpy(&source_val[0x22], &item_18, 0x18);
    memcpy(&source_val[0x25], &source_val[0xe], 0x28);
    int32_t data_9;
    int32_t temp_1;
    temp_1 = HIGHD(*(context_val + 0x154));
    data_9 = LOWD(*(context_val + 0x154));
    source_val[0x2a] = ((data_9 - temp_1) >> 1) * 0.0174532924f;
    int32_t data_13;
    int32_t temp_2;
    temp_2 = HIGHD(*(context_val + 0x156));
    data_13 = LOWD(*(context_val + 0x156));
    int32_t result = (data_13 - temp_2) >> 1;
    source_val[0x2b] = result * 0.0174532924f;
    source_val[0x2c] = *(context_val + 0x158) * 4096.0f;
    return result;
}
