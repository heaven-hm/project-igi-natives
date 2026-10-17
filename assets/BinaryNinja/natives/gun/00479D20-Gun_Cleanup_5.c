// Original IGI.EXE function: Gun_Cleanup_5 (VA 0x00479D20; static CFG gate PASS, CFG score 0.987).
#include "Gun_Cleanup_5.h"
int32_t Gun_Cleanup_5(int32_t* context, int32_t* param_2)

{
    int32_t source_val = *param_2;
    int32_t* context_val = context[0x4a];
    int32_t entity_val = g_c28b44;
    int32_t temp_val = g_c28b48;
    float item_180 = 0.0f;
    float item_17c = 0.0f;

    switch (context_val[0x186] - 1)
    {
        case 0:
        case 4:
        {
            Weapon_CheckAmmo_5(context, source_val);
            break;
        }
        case 1:
        {
            Weapon_FireBullet_6(context, source_val);
            break;
        }
        case 2:
        {
            Weapon_ReloadClip_6(context, source_val);
            break;
        }
        case 3:
        {
            Weapon_ComputeAccuracy_6(context, source_val);
            break;
        }
    }

    if (context_val[0x186])
    {
        int32_t* item_190_5 = &context_val[0x44];
        void item_104;
        Game_DataSymbolLoad(&item_104, "weapons/strings/%s");
        int32_t data_4;
        void* entity_1;
        data_4 = Sys_CheckHeap_16(&item_104);
        int32_t* data_5;

        if (!data_4)
            data_5 = &context_val[0x44];
        else
        {
            void* item_194_5 = &item_104;
            data_5 = Resource_Load(data_4, &item_104, entity_1, nullptr);
        }

        Sys_FreeMemory_18(*(source_val + 0x4e0), data_5);
        int32_t data_7 = Sys_CheckHeap_21(*(source_val + 0x4e0));
        long double fpu_val_7_8 = Sys_AllocateMemory_22(*(source_val + 0x4e0));
        *(*(source_val + 0x4e0) + 4) = entity_val * 0.984375f - data_7;
        *(*(source_val + 0x4e0) + 8) = temp_val * 0.895833313f - 2.0f - fpu_val_7_8;
        Sys_CloseFileStream_18(*(source_val + 0x4e0));
        item_180 = Sys_CheckHeap_21(*(source_val + 0x4e0));
    }

    int32_t data_13 = *context_val - 1;

    if (data_13 <= 0x29)
    {
        int32_t temp_4 = 0;
        temp_4 = lookup_table_47a234[data_13];
        int32_t* dest_2;

        switch (temp_4)
        {
            case 0:
            {
                dest_2 = source_val + 0x254;
                goto label_479f3c;
            }
            case 1:
            {
                dest_2 = source_val + 0x20c;
                goto label_479f3c;
            }
            case 2:
            {
                dest_2 = source_val + 0x2cc;
                goto label_479f3c;
            }
            case 3:
            {
                dest_2 = source_val + 0x1c4;
            label_479f3c:

                if (dest_2)
                {
                    Sys_ResolveSymbol_14(dest_2, entity_val * 0.984375f - Sys_CloseFileStream_17(dest_2),
                        temp_val * 0.895833313f - 2.0f - 2.0f - Sys_ExecuteBytecode_17(dest_2)
                            - Sys_AllocateMemory_22(*(source_val + 0x4e0)),
                        128.0f, 128.0f, 128.0f, 0, 0, 0);
                    item_17c = Sys_CloseFileStream_17(dest_2);
                }
                break;
            }
            case 4:
            {
                dest_2 = source_val + 0x374;
                goto label_479f3c;
            }
            case 5:
            {
                dest_2 = source_val + 0x2e4;
                goto label_479f3c;
            }
            case 6:
            {
                dest_2 = source_val + 0x32c;
                goto label_479f3c;
            }
            case 7:
            {
                dest_2 = source_val + 0x284;
                goto label_479f3c;
            }
            case 8:
            {
                dest_2 = source_val + 0x314;
                goto label_479f3c;
            }
            case 9:
            {
                dest_2 = source_val + 0x224;
                goto label_479f3c;
            }
            case 0xa:
            {
                dest_2 = source_val + 0x2b4;
                goto label_479f3c;
            }
            case 0xb:
            {
                dest_2 = source_val + 0x344;
                goto label_479f3c;
            }
            case 0xc:
            {
                dest_2 = source_val + 0x23c;
                goto label_479f3c;
            }
            case 0xd:
            {
                dest_2 = source_val + 0x2fc;
                goto label_479f3c;
            }
            case 0xe:
            {
                dest_2 = source_val + 0x1dc;
                goto label_479f3c;
            }
            case 0xf:
            {
                dest_2 = source_val + 0x26c;
                goto label_479f3c;
            }
            case 0x10:
            {
                dest_2 = source_val + 0x1f4;
                goto label_479f3c;
            }
            case 0x11:
            {
                dest_2 = source_val + 0x35c;
                goto label_479f3c;
            }
        }
    }

    int32_t result = context_val[0x186];

    if (result)
    {
        g_a84a50 = 0;
        float item_14c;
        float* item_150_1 = &item_14c;
        g_a84a58 = 0;
        int32_t item_134_1 = 0;
        int32_t item_130;
        strncpy(&item_130, "fff?", 8);
        int32_t item_138_1 = 0x3f000000;
        int32_t item_140_1 = 0;
        int32_t item_13c_1 = 0;
        item_14c = entity_val * 0.984375f;
        int32_t item_144_1 = 0x3f800000;
        int32_t item_110_1 = 0;
        int32_t item_10c;
        strncpy(&item_10c, "fff?", 8);
        long double fpu_val_7_27 = temp_val * 0.895833313f;
        int32_t item_114_1 = 0x3f000000;
        int32_t item_11c_1 = 0;
        int32_t item_118_1 = 0;
        int32_t item_120_1 = 0x3f800000;
        int32_t item_160 = 1;
        int32_t item_158_1 = 0xffffffff;
        float item_148_1 = fpu_val_7_27;
        long double fpu_val_6_1 = item_180;
        long double f0_1 = item_17c;
        fpu_val_6_1 - f0_1;
        int32_t item_154_1 = 2;
        int32_t item_15c_1 = 0x80000;
        long double fpu_val_6_3;

        fpu_val_6_3 = *(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? item_17c : item_180 + 3.0f;

        float item_128_1 = item_14c - fpu_val_6_3;
        float item_124_1 = fpu_val_7_27;
        result = (*((g_a84a54 << 2) + &g_a94e84))(&item_160);
    }

    if (context_val[0x185] != 1)
        return result;

    float item_168_1 = g_c28b44 * 0.5f;
    float item_164_1 = g_c28b48 * 0.5f;
    float item_180_4 = Sys_CloseFileStream_17(source_val + 0x74) * 0.5f;
    int32_t data_22;
    int32_t entity_6;
    data_22 = Sys_ExecuteBytecode_17(source_val + 0x74);
    int32_t item_17c_6 = data_22;
    int32_t item_1ac_1 = entity_6;
    item_17c_6 = item_17c_6 * 0.5f;
    int32_t item_17c_7 = item_17c_6;
    float item_1ac_2 = item_164_1 - item_17c_7;
    item_17c_7 = item_180_4;
    int32_t item_1b0_1 = item_17c_7;
    return Sys_CheckHeap_14(source_val + 0x74, item_168_1 - item_17c_7, item_1ac_2, 128.0f, 128.0f, 128.0f, 0, 0, 0,
        0x3f800000);
}
