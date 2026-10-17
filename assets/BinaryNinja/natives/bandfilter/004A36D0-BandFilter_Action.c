// Original IGI.EXE function: BandFilter_Action (VA 0x004A36D0; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Action.h"
void* BandFilter_Action(float context)

{
    float dest_val = context;
    void* result = Sys_AllocateMemory_19(sub_4a36b0, 0x10, *(dest_val + 0x20));
    int32_t entity_val = g_935c0c;
    *(result + 0xc) = dest_val;
    *(result + 4) = entity_val;
    long double fpu7 = *(dest_val + 0x28);
    long double f0 = 0.0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        char data_1 = QHash_ValueGet();

        if (!data_1)
            QHash_ValueSet();

        int32_t item_4c_1 = *(dest_val + 0x60);
        void item_34;
        Game_DataSymbolLoad(&item_34, "CAMERA %d");
        void* item_50_1 = &item_34;
        void* item_54_2 = &item_34;
        int32_t** data_2 = Sys_OpenFileStream_18(*(dest_val + 0x70),
            g_bcabc0 * g_93603c + g_936044 + g_bcabb8,
            g_bcabc4 * g_936040 + g_936048 + g_bcabbc, &item_34);
        int32_t temp_3 = data_2[9];
        data_2[5] = 0x42c80000;
        data_2[6] = 0x42c80000;
        data_2[7] = 0x42c80000;
        data_2[9] = temp_3 | 0x40000;
        data_2[3] = *(dest_val + 0x20);
        Sys_CloseFileStream_18(data_2);
        result = Sys_ReadFileBlock_18(data_2);

        if (!data_1)
            Sys_DispatchOpcode_2();
    }

    long double fpu_val_7_10 = *(dest_val + 0x28);
    long double f1 = 0.0f;
    fpu_val_7_10 - f1;
    result = (fpu_val_7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        return result;

    long double fpu_val_7_11 = *(dest_val + 0x20);
    long double f2_1 = g_bcadc0;
    fpu_val_7_11 - f2_1;

    if (*(&((fpu_val_7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        context = g_bcadc0;
    else
        context = *(dest_val + 0x20);

    float item_50_3 = context;
    float item_54_4 = context;
    float item_58_2 = context;
    float item_5c_2 = context;
    float item_60_2 = context;
    int32_t item_3c_3 = g_bcabbc;
    int32_t item_64_1 = item_3c_3;
    int32_t item_68_1 = item_3c_3;
    return Sys_CloseFileStream_14(g_bcabb8, item_3c_3, g_bcabc0, g_bcabc4, *(dest_val + 0x64) * 128.0f,
        *(dest_val + 0x68) * 128.0f, *(dest_val + 0x6c) * 128.0f, 0x80000000, 0, context);
}
