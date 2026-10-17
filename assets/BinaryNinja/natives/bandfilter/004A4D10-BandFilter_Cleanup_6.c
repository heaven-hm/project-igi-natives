// IGI native provenance: BandFilter_Cleanup_6 - 0x004A4D10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A4D10-BandFilter_Cleanup_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Cleanup_6.h"
int32_t BandFilter_Cleanup_6(int32_t context)

{
    int32_t dest_val = context;
    void* data_1 = Sys_AllocateMemory_19(sub_4a4c90, 0x10, *(dest_val + 0x2c));
    *(data_1 + 4) = g_935c08;
    *(data_1 + 0xc) = dest_val;
    char data_2 = QHash_ValueGet();

    if (!data_2)
        QHash_ValueSet();

    int32_t item_3c = g_936038;
    int32_t temp_2 = item_3c / 0x18;
    int32_t f1 = temp_2 / 0x3c % 0x3c;
    int32_t item_5c_1 = item_3c % 0x18;
    int32_t item_60 = temp_2 % 0x3c;
    int32_t item_64 = f1;
    int32_t item_68 = f1 / 0x3c;
    void item_34;
    int32_t entity_2 = Game_DataSymbolLoad(&item_34, "%2.2d : %2.2d : %2.2d : %2.2d");
    int32_t item_60_1 = entity_2;
    int32_t item_64_1 = entity_2;
    int32_t** data_20 = Sys_OpenFileStream_18(*(dest_val + 0x30),
        g_bcabc0 * 0.899999976f + g_bcabb8 - g_936030,
        g_bcabc4 * 0.800000012f + g_bcabbc - g_936034, &item_34);
    int32_t entity_3 = data_20[9];
    data_20[5] = 0x42c80000;
    data_20[6] = 0x42c80000;
    data_20[7] = 0x42c80000;
    data_20[9] = entity_3 | 0x40000;
    data_20[3] = *(dest_val + 0x2c);
    Sys_CloseFileStream_18(data_20);
    Sys_ReadFileBlock_18(data_20);

    if (!data_2)
        Sys_DispatchOpcode_2();

    long double fpu_val_7_10 = *(dest_val + 0x4c);
    long double f2 = 0.75f;
    fpu_val_7_10 - f2;
    int32_t item_44 = 0;

    if (!(*(&((fpu_val_7_10 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f2 ? 1 : 0) << 0xe) + 1) & 1))
        item_44 = 0x3f800000;

    float item_48 = g_bcabc0 * 0.0700000003f;
    item_3c = Sys_ExecuteBytecode_17(dest_val + 0x34);
    long double fpu_val_7_14 = Sys_CloseFileStream_17(dest_val + 0x34);
    int32_t item_7c = item_44;
    float item_40 = g_bcabc0 * 0.100000001f + g_936028 + g_bcabb8;
    long double fpu_val_6_7 = g_bcabc4 * 0.200000003f + g_93602c + g_bcabbc;
    context = fpu_val_6_7;
    item_3c = fpu_val_6_7 + item_3c / fpu_val_7_14 * item_48;
    float item_48_1 = item_40 + item_48;
    float item_8c = item_40;
    return Qsprite_Register4Az(dest_val + 0x34, item_40, item_3c, item_48_1, item_3c, item_40, context,
        item_48_1, context, 128.0f, 128.0f, 128.0f, *(dest_val + 0x2c), item_44, 0, 0x10c0000, 0);
}
