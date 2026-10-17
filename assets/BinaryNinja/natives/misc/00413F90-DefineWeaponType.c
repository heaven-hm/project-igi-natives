// IGI native provenance: DefineWeaponType - 0x00413F90 - CFG score 99.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413F90-DefineWeaponType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DefineWeaponType.h"
int32_t DefineWeaponType(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , long double param_8 , int32_t param_9, float param_10 )

// Sig: unknown DefineWeaponType(unknown param1, unknown param2)
// Note: Registered at 0x413E52 via registrar 0x4B8890 (push 0x413F90 +
// 'DefineWeaponType'), argc bounds (0, -1). Large (2165-byte) config parser;
// name corroborated by semantics consistent with cataloged WeaponType_Open /
// *ParseConfigFile family.  Verified: r2 forced-analysis confirmed exact start
// (size 2165); P3 byte-level name<->address binding at registrar callsite
// 0x413E52 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=55f13a150373436d3a68f7b8756852c048244c7749999f8ba7bfdccdb9cef313;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    int32_t saved_obj = 0;
    float item_b0 = param_10;
    int32_t saved_ebx_3 = Script_GetArg(item_b0, saved_obj);
    int32_t entity_val = g_57b18c;
    *(entity_val * 0x6e8 + &g_56e258) = saved_ebx_3;
    int32_t temp_4 = 0;

    if (entity_val > 0)
    {
        int32_t* source_1 = &g_56e258;

        while (true)
        {
            if (saved_ebx_3 == *source_1)
            {
                int32_t saved_ebx_2 = saved_ebx_3;
                item_b0 = "Weapon ID %d not unique";
                Error_Show(item_b0);

                while (true)
                    /* nop */
            }
            else
            {
                temp_4 += 1;
                source_1 = &source_1[0x1ba];

                if (temp_4 >= entity_val)
                    break;
            }
        }
    }

    if (g_5391b4 < saved_ebx_3)
        g_5391b4 = saved_ebx_3;

    item_b0 = 1.79366203e-43.0f;
    void item_80;
    Sys_ResolveSymbol_23(param_10, 1, &item_80, item_b0);
    TaskType_Set(&item_80, *(g_57b18c * 0x6e8 + &g_56e258));
    void* dest_val = &item_80;
    int32_t i = 0xffffffff;
    int32_t temp_8 = g_57b18c * 0x6e8;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_6 = ~i;
    int32_t source_3;
    int32_t dest_3;
    dest_3 = memcpy(temp_8 + 0x56e268, dest_val - entity_6, entity_6 & 0xfffffffc);
    memcpy(dest_3, source_3, entity_6 & 3);
    Sys_ResolveSymbol_23(param_10, 2, temp_8 + 0x56e368, 0x100);
    Sys_ResolveSymbol_23(param_10, 3, g_57b18c * 0x6e8 + &g_56e568, 0x100);
    Sys_ResolveSymbol_23(param_10, 4, g_57b18c * 0x6e8 + &g_56e468, 0x100);
    int32_t data_8 = g_57b18c;
    item_b0 = 7.00649232e-45.0f;
    *(data_8 * 0x6e8 + &g_56e934) = 1;
    *(g_57b18c * 0x6e8 + &g_56e868) = Script_GetArg(param_10, item_b0);
    *(g_57b18c * 0x6e8 + &g_56e86c) = Script_GetArg(param_10, 6);
    *(g_57b18c * 0x6e8 + &g_56e870) = Script_GetArg(param_10, 7);
    *(g_57b18c * 0x6e8 + &g_56e25c) = Script_GetArg(param_10, 8);
    *(g_57b18c * 0x6e8 + &g_56e894) = Script_GetArg(param_10, 9);
    Profile_ValueSet(param_10, 1.40129846e-44.0f);
    *(g_57b18c * 0x6e8 + &g_56e8ac) = context;
    Profile_ValueSet(param_10, 1.54142831e-44.0f);
    *(g_57b18c * 0x6e8 + &g_56e8b0) = param_2;
    Profile_ValueSet(param_10, 1.68155816e-44.0f);
    int32_t data_17 = g_57b18c;
    item_b0 = 1.821688e-44.0f;
    *(data_17 * 0x6e8 + &g_56e8b4) = param_3;
    Profile_ValueSet(param_10, item_b0);
    *(g_57b18c * 0x6e8 + &g_56e8b8) = param_4;
    *(g_57b18c * 0x6e8 + &g_56e898) = Script_GetArg(param_10, 0xe);
    *(g_57b18c * 0x6e8 + &g_56e89c) = Script_GetArg(param_10, 0xf);
    *(g_57b18c * 0x6e8 + &g_56e8a0) = Script_GetArg(param_10, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8a4) = Script_GetArg(param_10, 0x11);
    Profile_ValueSet(param_10, 2.52233724e-44.0f);
    *(g_57b18c * 0x6e8 + &g_56e8bc) = param_5;
    Profile_ValueSet(param_10, 2.66246708e-44.0f);
    *(g_57b18c * 0x6e8 + &g_56e8c0) = param_6;
    Profile_ValueSet(param_10, 2.80259693e-44.0f);
    int32_t data_28 = g_57b18c;
    item_b0 = 2.94272678e-44.0f;
    *(data_28 * 0x6e8 + &g_56e8c4) = param_7;
    Profile_ValueSet(param_10, item_b0);
    *(g_57b18c * 0x6e8 + &g_56e8c8) = param_8;
    Profile_ValueSet(param_10, 3.08285662e-44.0f);
    int32_t data_32 = g_57b18c;
    *(data_32 * 0x6e8 + &g_56e8cc) = context;
    int32_t source_5 = data_32 * 0x6e8;
    Profile_ValueSet(param_10, 3.22298647e-44.0f);
    *(source_5 + 0x56e8d0) = param_2;
    Sys_ResolveSymbol_23(param_10, 0x18, source_5 + 0x56e668, 0x100);
    int32_t source_7 = g_57b18c * 0x6e8;
    Profile_ValueSet(param_10, 3.50324616e-44.0f);
    *(source_7 + 0x56e8a8) = param_3;
    Sys_ResolveSymbol_23(param_10, 0x1a, source_7 + 0x56e768, 0x100);
    item_b0 = 3.78350585e-44.0f;
    int32_t data_35 = Script_GetArg(param_10, item_b0);
    int32_t entity_59 = g_57b18c;
    *(entity_59 * 0x6e8 + &g_56e260) = data_35;
    int32_t source_9 = entity_59 * 0x6e8;
    *(source_9 + 0x56e264) = Script_GetArg(param_10, 0x1c);
    Sys_ResolveSymbol_23(param_10, 0x1d, source_9 + 0x56e874, 0x10);
    Sys_ResolveSymbol_23(param_10, 0x1e, g_57b18c * 0x6e8 + &g_56e884, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8d4) = Script_GetArg(param_10, 0x1f);
    int32_t data_43 = Script_GetArg(param_10, 0x20);
    int32_t entity_65 = g_57b18c;
    item_b0 = 4.62428493e-44.0f;
    *(entity_65 * 0x6e8 + &g_56e8d8) = data_43;
    *(g_57b18c * 0x6e8 + &g_56e8dc) = Script_GetArg(param_10, item_b0);
    *(g_57b18c * 0x6e8 + &g_56e8e0) = Script_GetArg(param_10, 0x22);
    *(g_57b18c * 0x6e8 + &g_56e8e4) = Script_GetArg(param_10, 0x23);
    *(g_57b18c * 0x6e8 + &g_56e8e8) = Script_GetArg(param_10, 0x24);
    *(g_57b18c * 0x6e8 + &g_56e8ec) = Script_GetArg(param_10, 0x25);
    *(g_57b18c * 0x6e8 + &g_56e8f0) = Script_GetArg(param_10, 0x26);
    *(g_57b18c * 0x6e8 + &g_56e8f8) = Script_GetArg(param_10, 0x27);
    int32_t data_51 = Script_GetArg(param_10, 0x28);
    int32_t entity_81 = g_57b18c;
    item_b0 = 5.7453237e-44.0f;
    *(entity_81 * 0x6e8 + &g_56e8fc) = data_51;
    *(g_57b18c * 0x6e8 + &g_56e8f4) = Script_GetArg(param_10, item_b0);
    int32_t data_53 = Script_GetArg(param_10, 0x2a);
    int32_t entity_85 = g_57b18c;
    *(entity_85 * 0x6e8 + &g_56e900) = data_53;
    int32_t source_11 = entity_85 * 0x6e8;
    *(source_11 + 0x56e904) = Script_GetArg(param_10, 0x2b);
    Sys_ResolveSymbol_23(param_10, 0x2c, source_11 + 0x56e908, 0x10);
    Sys_ResolveSymbol_23(param_10, 0x2d, g_57b18c * 0x6e8 + &g_56e918, 0x10);
    Profile_ValueSet(param_10, 6.44597294e-44.0f);
    int32_t data_60 = g_57b18c;
    float dest_4 = 6.72623263e-44.0f;
    item_b0 = 6.58610278e-44.0f;
    *(data_60 * 0x6e8 + &g_56e928) = param_4;
    int32_t source_13 = data_60 * 0x6e8;
    *(source_13 + 0x56e92c) = Script_GetArg(param_10, item_b0);
    *(source_13 + &g_56e938) = 0;
    int32_t item_9c;
    void* item_98;

    if (*(source_13 + 0x56e92c) != 0x181)
    {
        int32_t entity_93 = 0;
        entity_93 = *(source_13 + 0x56e92c);
        int32_t data_68 = *(((*g_5391ac * 0x180 + entity_93) << 2) + &g_a96ae0);

        if (data_68)
        {
            item_b0 = &item_9c;
            data_68(0, item_b0);
            void* data_70 = Mem_Alloc(item_9c, 4);
            int32_t entity_94 = g_57b18c;
            item_98 = data_70;
            float item_94_1 = param_10;
            float item_90_1 = 6.72623263e-44.0f;
            int32_t entity_96 = entity_94 * 0x6e8;
            *(entity_96 + &g_56e938) = data_70;
            int32_t data_71 = 0;
            data_71 = *(entity_96 + 0x56e92c);
            int32_t data_72 = 0;
            data_72 = g_5391ad;
            (*(((data_71 + data_72 * 0x180) << 2) + &g_a96ae0))(0, &item_98);
            dest_4 = item_90_1;
        }
    }

    int32_t source_14 = g_57b18c;
    item_b0 = dest_4;
    int32_t source_16 = source_14 * 0x6e8;
    *(source_16 + 0x56e930) = Script_GetArg(param_10, item_b0);
    *(source_16 + 0x56e93c) = 0;

    if (*(source_16 + 0x56e930) != 0x181)
    {
        int32_t data_76 = 0;
        int32_t entity_100 = 0;
        data_76 = g_5391af;
        entity_100 = *(source_16 + 0x56e930);
        int32_t data_80 = *(((data_76 * 0x180 + entity_100) << 2) + &g_a96ae0);

        if (data_80)
        {
            int32_t* saved_ebx_1 = &item_9c;
            item_b0 = 0.0f;
            data_80(item_b0, saved_ebx_1);
            void* data_82 = Mem_Alloc(item_9c, 4);
            int32_t entity_101 = g_57b18c;
            item_98 = data_82;
            float item_94_2 = param_10;
            int32_t entity_103 = entity_101 * 0x6e8;
            *(entity_103 + 0x56e93c) = data_82;
            int32_t data_83 = 0;
            data_83 = *(entity_103 + 0x56e930);
            int32_t item_90_2 = dest_4 + 1;
            (*(((data_83 + *g_5391b0 * 0x180) << 2) + &g_a96ae0))(0, &item_98);
        }
    }

    g_57b18c += 1;
    item_98 = 1;
    int32_t item_90_3 = 0;
    int32_t item_8c = 0x3ff00000;
    char* item_88 = &g_567c74;
    memcpy(param_9, &item_98, 0x18);
    return param_9;
}
