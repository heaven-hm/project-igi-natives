// IGI native provenance: ToggleBox_Setup - 0x0041E130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041E130-ToggleBox_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ToggleBox_Setup.h"
int32_t ToggleBox_Setup(int32_t context)

{
    int32_t source_val = context;
    void* item_10;
    void* dest_val;

    if (!*(source_val + 0xa4))
    {
        void* data_1 = *(source_val + 0x98);
        item_10 = data_1;
        dest_val = data_1;
    }
    else
    {
        dest_val = *(source_val + 0x94);
        item_10 = dest_val;
    }

    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    int32_t* data_8 = *(source_val + 0x9c);

    if (data_8 && *(source_val + 0xa0))
    {
        int32_t data_9 = Sys_AllocateMemory_22(data_8);
        int32_t data_11;
        int32_t temp_2;
        temp_2 = HIGHD(*(source_val + 0x2c) - data_9);
        data_11 = LOWD(*(source_val + 0x2c) - data_9);
        int32_t context_5 = ((data_11 - temp_2) >> 1) + *(source_val + 0x24);
        int32_t data_14;
        int32_t temp_4;
        temp_4 = HIGHD(Sys_CheckHeap_21(*(source_val + 0x9c)));
        data_14 = LOWD(Sys_CheckHeap_21(*(source_val + 0x9c)));
        int32_t data_17;
        int32_t temp_5;
        temp_5 = HIGHD(*(source_val + 0x28));
        data_17 = LOWD(*(source_val + 0x28));
        int32_t dest_4 = ((data_17 + (temp_5 & 3)) >> 2) - ((data_14 - temp_4) >> 1) + *(source_val + 0x20);
        int32_t data_21;
        int32_t temp_8;
        temp_8 = HIGHD(Sys_CheckHeap_21(*(source_val + 0xa0)));
        data_21 = LOWD(Sys_CheckHeap_21(*(source_val + 0xa0)));
        int32_t data_25;
        int32_t temp_9;
        temp_9 = HIGHD(*(source_val + 0x28) * 3);
        data_25 = LOWD(*(source_val + 0x28) * 3);
        int32_t data_27 = dest_4 + (g_c28b44 >> 1) - 0x140;
        int32_t temp_14 = (g_c28b44 >> 1) + ((data_25 + (temp_9 & 3)) >> 2)
            - ((data_21 - temp_8) >> 1) + *(source_val + 0x20) - 0x140;
        int32_t entity_10 = context_5 + (g_c28b48 >> 1) - 0xf0;
        *(*(source_val + 0x9c) + 0x14) = 0;
        *(*(source_val + 0x9c) + 0x18) = 0;
        *(*(source_val + 0x9c) + 0x1c) = 0;
        void* data_31 = *(source_val + 0x9c);
        *(data_31 + 0x24) |= 0x80000;
        *(*(source_val + 0x9c) + 0x10) = context;
        *(*(source_val + 0x9c) + 4) = data_27;
        long double fpu_val_7_4 = entity_10;
        *(*(source_val + 0x9c) + 8) = fpu_val_7_4;
        Sys_CloseFileStream_18(*(source_val + 0x9c));
        *(*(source_val + 0xa0) + 0x14) = 0;
        *(*(source_val + 0xa0) + 0x18) = 0;
        *(*(source_val + 0xa0) + 0x1c) = 0;
        void* data_35 = *(source_val + 0xa0);
        *(data_35 + 0x24) |= 0x80000;
        *(*(source_val + 0xa0) + 0x10) = context;
        *(*(source_val + 0xa0) + 4) = temp_14;
        *(*(source_val + 0xa0) + 8) = fpu_val_7_4;
        Sys_CloseFileStream_18(*(source_val + 0xa0));
        dest_val = item_10;
    }

    char data_38 = *(source_val + 0x4d);
    float item_10_1 = 64.0f;

    if (!data_38)
        item_10_1 = 0.0f;

    float item_c_2 = 64.0f;

    if (!data_38)
        item_c_2 = 0.0f;

    float context_6 = context;
    float item_3c = item_10_1;
    float item_40 = item_10_1;
    int32_t entity_17 = *(dest_val + 0x24);
    int32_t item_44 = entity_17;
    int32_t entity_18 = *(dest_val + 0x20);
    int32_t item_48 = entity_18;
    Sys_DispatchOpcode_14((g_c28b44 >> 1) + entity_18 - 0x140, (g_c28b48 >> 1) + entity_17 - 0xf0,
        *(dest_val + 0x28), *(dest_val + 0x2c), item_c_2, 128.0f, item_10_1, context_6, 0x3f800000, 0x80000, 0);
    return Menu_DrawWidget_14(source_val, 0.5f, context_6, *(source_val + 0x4d));
}
