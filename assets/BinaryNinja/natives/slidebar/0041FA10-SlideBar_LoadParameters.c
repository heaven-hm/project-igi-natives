// IGI native provenance: SlideBar_LoadParameters - 0x0041FA10 - CFG score 95.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041FA10-SlideBar_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SlideBar_LoadParameters.h"
int32_t SlideBar_LoadParameters(float context)

{
    int32_t source_val = context;
    int32_t item_10 = 0;
    int32_t data_val = *(source_val + 0x248);
    void* context_val = *(source_val + 0x98);
    int32_t* dest_val = *(source_val + 0x9c);
    float item_c = *(source_val + 0xa0);

    if (!data_val)
        context = *(source_val + 0xa8);
    else
        context = 1.0f / (data_val - 1);

    int32_t entity_val = 0;
    entity_val = *(context_val + 0x1c);
    (*((entity_val << 2) + &g_a970e0))(context_val);
    int32_t temp_val = 0;
    int32_t* item_28 = dest_val;
    temp_val = dest_val[7];
    (*((temp_val << 2) + &g_a970e0))(item_28);
    int16_t data_4;
    data_4 = *(context_val + 0x4b);
    int32_t data_5;

    if (!data_4)
        data_5 = *(source_val + 0x50);

    long double fpu_val_7_4;

    if (data_4 || data_5 == 0xffffffff)
    {
        long double fpu_val_7_8 = *(source_val + 0xa0);
        long double f0_1 = 0.0;
        fpu_val_7_8 - f0_1;

        if (*(&((fpu_val_7_8 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_4 = item_c;
        else
        {
            item_28 = nullptr;
            SoundSys_AttachLipsync_8("menu_high", 0, 0);
            fpu_val_7_4 = item_c - context;
            item_10 = 1;
        }
    }
    else if (*(dest_val + 0x4b) || data_5 == 0xfffffffe)
    {
        long double fpu_val_7_6 = *(source_val + 0xa0);
        long double f1_1 = 1.0;
        fpu_val_7_6 - f1_1;

        if (!(*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_4 = item_c;
        else
        {
            item_28 = nullptr;
            item_10 = 1;
            SoundSys_AttachLipsync_8("menu_high", 0, 0);
            fpu_val_7_4 = context + item_c;
        }
    }
    else
    {
        void* data_6 = *(source_val + 0x94);

        if (!data_6)
            fpu_val_7_4 = item_c;
        else
        {
            char entity_2 = *(source_val + 0xb4);
            void* flagP2 = *(source_val + 0x20) + 2;
            int32_t dest_2 = *(source_val + 0x24) + 2;
            context = entity_2;
            int32_t data_7;
            char* context_1;

            if (!entity_2)
            {
                dest_2 = dest_2 + *(context_val + 0x2c) + 1;
                context_1 = Sys_CloseFileStream_17(data_6);
                data_7 = *(source_val + 0xac);
            }
            else
            {
                context_1 = *(source_val + 0xac);
                flagP2 = *(context_val + 0x28) + flagP2 + 1;
                data_7 = Sys_ExecuteBytecode_17(data_6);
            }

            int32_t item_8;
            item_28 = &item_8;
            char* item_4;
            Menu_UpdateLanguage_14(source_val, flagP2, dest_2, context_1, data_7, item_28, &item_4);

            if (!*(source_val + 0x4a))
                fpu_val_7_4 = item_c;
            else
            {
                void* data_11 = *(source_val + 0x94);

                if (!context)
                {
                    int32_t data_13 = Sys_ExecuteBytecode_17(data_11);
                    item_10 = 1;
                    fpu_val_7_4 = (item_4 - dest_2) / (*(source_val + 0xac) - data_13);
                }
                else
                {
                    int32_t data_12 = Sys_CloseFileStream_17(data_11);
                    item_10 = 1;
                    fpu_val_7_4 = (item_8 - flagP2) / (*(source_val + 0xac) - data_12);
                }
            }
        }
    }

    float data_17 = *(source_val + 0x248);

    if (data_17)
    {
        item_28 = (data_17 - 1) * fpu_val_7_4 + 0.5f;
        fpu_val_7_4 = Camera_ApplyBandFilter_5(item_28) / (*(source_val + 0x248) - 1);
    }

    long double fpu_val_6_4 = 0.0f;
    fpu_val_6_4 - fpu_val_7_4;

    if (*(&((fpu_val_6_4 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, fpu_val_7_4) ? 1 : 0) << 0xa
        | (fpu_val_6_4 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_6_5 = 1.0f;
        fpu_val_6_5 - fpu_val_7_4;

        if (*(&((fpu_val_6_5 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_5 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_4 = 1.0f;
    }
    else
        fpu_val_7_4 = 0.0f;

    *(source_val + 0xa0) = fpu_val_7_4;
    *(source_val + 0xb0) = Menu_FormatScreen_10(source_val);

    if (item_10 && Script_FormatString_6(source_val + 0x158))
    {
        Script_SpawnNewTask_7(source_val + 0x158, source_val);
        Menu_FormatScreen_5(*(source_val + 0x44));
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(source_val);
}
