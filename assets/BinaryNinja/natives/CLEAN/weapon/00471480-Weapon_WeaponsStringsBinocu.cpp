// IGI native provenance: Weapon_WeaponsStringsBinocu - 0x00471480 - CFG score 98.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471480-Weapon_WeaponsStringsBinocu.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_WeaponsStringsBinocu.h"
int32_t Weapon_WeaponsStringsBinocu(void* context)

{
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    void* item_11c = context;
    void* data_1 = *(context + 0x14);
    long double fpu7 = *(context + 0x7c);
    void* item_118 = data_1;
    int32_t temp_val = *(data_1 + 0x14);
    double item_108;
    memcpy(&item_108, context + 0x60, 0x18);
    double item_13c = fpu7;
    double item_134 = *(context + 0x80);
    double item_12c = *(context + 0x84);
    int32_t item_114 = temp_val;
    int32_t item_110 = 0x3f800000;
    long double fpu_val_7_3;

    if (!FX_SmokeEmit_26())
        fpu_val_7_3 = 1000.0;
    else
        fpu_val_7_3 = 914.40000000000009;

    item_13c = fpu_val_7_3 * item_13c * 4096.0;
    long double fpu_val_7_6;

    if (!FX_SmokeEmit_26())
        fpu_val_7_6 = 1000.0;
    else
        fpu_val_7_6 = 914.40000000000009;

    double item_134_1 = fpu_val_7_6 * item_134 * 4096.0;
    long double fpu_val_7_9;

    if (!FX_SmokeEmit_26())
        fpu_val_7_9 = 1000.0;
    else
        fpu_val_7_9 = 914.40000000000009;

    item_13c = item_108 + item_13c;
    double item_100;
    double item_134_2 = item_100 + item_134_1;
    double item_f8;
    double item_12c_1 = item_f8 + fpu_val_7_9 * item_12c * 4096.0;
    char data_5 = Level_StartMission_2();
    void item_120;
    void item_f0;
    DynObj_FindSymbol_11(Level_StartMission_4(), &item_f0, &item_108, &item_13c, 1, data_5, &item_120, 0xffffffff);
    int32_t data_7;
    void* entity_1;
    int32_t temp_1;
    data_7 = Sys_CheckHeap_16("weapons/strings/Binoculars/range");
    int32_t* dest_val;

    if (!data_7)
        dest_val = "RANGE";
    else
    {
        char* item_17c_1 = "weapons/strings/Binoculars/range";
        dest_val = Resource_Load(data_7, temp_1, entity_1, nullptr);
    }

    char* item_18c_1;
    char* item_188_1;
    double item_15c;
    int32_t item_98;
    void item_80;

    if (!item_98)
    {
        void* data_14 = &g_5402cc;

        if (!FX_SmokeEmit_26())
            data_14 = &g_5402c8;

        void* item_178_1 = data_14;
        int32_t data_15 = FX_SmokeEmit_26();
        int32_t data_16 = -(data_15);
        char item_180 = ((data_16 - data_16) & 0x7d0) + 0x3e8;
        int32_t* item_184_1 = dest_val;
        item_188_1 = "%s: %0.f+%s";
        item_18c_1 = &item_80;
    }
    else
    {
        double item_90;
        item_15c = item_90 * 0.000244140625;
        void* context_1 = &g_5402cc;

        if (!FX_SmokeEmit_26())
            context_1 = &g_5402c8;

        if (!FX_SmokeEmit_26())
        {
            int32_t temp_2 = *(&item_15c + 4);
            item_15c = item_15c;
            *(&item_15c + 4) = temp_2;
        }
        else
            item_15c = item_15c * 3.2808398950000002;

        void* item_178 = context_1;
        int32_t item_17c_2 = *(&item_15c + 4);
        int32_t item_180_1 = item_15c;
        int32_t* item_184 = dest_val;
        item_188_1 = "%s: %0.f%s";
        item_18c_1 = &item_80;
    }

    Game_DataSymbolLoad(item_18c_1, item_188_1);
    Sys_FreeMemory_18(*(context + 0x20), &item_80);
    long double fpu_val_7_18 = data_val;
    float item_160 = fpu_val_7_18;
    *(*(context + 0x20) + 4) = fpu_val_7_18 * 0.378125012f;
    long double fpu_val_7_20 = entity_val;
    float item_154 = fpu_val_7_20;
    *(*(context + 0x20) + 8) = fpu_val_7_20 * 0.550000012f - Sys_AllocateMemory_22(*(context + 0x20));
    Sys_CloseFileStream_18(*(context + 0x20));
    float item_124;
    float item_10c;
    Sys_ResolveSymbol_10(context + 0x7c, &item_124, &item_10c);
    Weapon_ComputeAccuracy_2(context);
    float* source_2 = context + 0x2b54;
    int32_t i_1 = 0xc;
    float item_164_1 = item_160 * 0.125f;
    item_15c = item_154 * 0.762499988f;
    float item_150_3 = item_160 * 0.1875f * 0.0833333358f;
    int32_t i;

    do
    {
        Weapon_CycleFireMode(source_2, context + 0x138);
        Weapon_CheckAmmo(source_2, item_164_1, item_15c, item_150_3 - item_160 * 0.00937500037f,
            item_154 * 0.125f, 0.0f, 0);
        source_2 = &source_2[5];
        i = i_1;
        i_1 -= 1;
        item_164_1 = item_150_3 + item_164_1;
    } while (i != 1);
    item_15c = Sys_CloseFileStream_17(g_5be344 + 0x18);
    float item_164_2 = item_160 / item_15c;
    item_15c = item_154 + item_164_2;
    int32_t dest_1 = item_15c;
    float item_14c_1 = item_160 * 0.5f;
    float item_144_1 = -(item_164_2);
    Sys_FreeMemory_15(g_5be344 + 0x18, item_144_1, item_144_1, item_14c_1, item_144_1, item_144_1, dest_1,
        item_14c_1, dest_1, 128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    item_15c = item_160 + item_164_2;
    int32_t data_26 = item_15c;
    int32_t entity_8 = Sys_FreeMemory_15(g_5be344 + 0x18, data_26, item_144_1, item_14c_1, item_144_1, data_26,
        dest_1, item_14c_1, dest_1, 128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    int32_t data_30;
    int32_t temp_8;
    temp_8 = HIGHD(entity_val);
    data_30 = LOWD(entity_val);
    item_15c = (data_30 - temp_8) >> 1;
    int32_t data_34;
    int32_t temp_9;
    temp_9 = HIGHD(data_val);
    data_34 = LOWD(data_val);
    float item_14c_2 = item_15c;
    item_15c = (data_34 - temp_9) >> 1;
    float item_164_3 = item_15c;
    float item_148_1 = item_160 * 0.09375f;
    int32_t item_180_3 = entity_8;
    int32_t item_184_3 = entity_8;
    int32_t item_1a4_2 = entity_8;
    int32_t entity_9 = Sys_DispatchOpcode_15(0x534070, 5.60519386e-45.0f, item_164_3 - item_148_1, item_14c_2,
        0x3f800000, 0.0f, 100.0f, 0.0f, 0x3f000000, 0.0f, item_160 * 0.015625f, item_154 * 0.020833334f,
        0x80000, 0);
    int32_t item_180_5 = entity_9;
    int32_t item_184_5 = entity_9;
    int32_t item_1a4_4 = entity_9;
    Sys_DispatchOpcode_15(0x534070, 5.60519386e-45.0f, item_148_1 + item_164_3, item_14c_2, 0x3f800000, 0.0f, 100.0f,
        0.0f, 0x3f000000, 0.0f, item_160 * -0.015625f, item_154 * -0.020833334f, 0x80000, 0);
    Sys_ExecuteBytecode_15(0.0f, item_14c_2, 0x3f800000, item_160, item_14c_2, 0x3f800000, 0.0f, 32.0f, 0.0f, 0.0f, 32.0f, 0.0f,
        0x3f000000, 0x80000, 0);
    Sys_ExecuteBytecode_15(item_164_3, 0.0f, 0x3f800000, item_164_3, item_154, 0x3f800000, 0.0f, 32.0f, 0.0f, 0.0f, 32.0f, 0.0f,
        0x3f000000, 0x80000, 0);
    return Weapon_FireBullet_2(context);
}
