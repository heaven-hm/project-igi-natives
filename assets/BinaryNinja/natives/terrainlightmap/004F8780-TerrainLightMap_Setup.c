// Original IGI.EXE function: TerrainLightMap_Setup (VA 0x004F8780; static CFG gate PASS, CFG score 0.937).
#include "TerrainLightMap_Setup.h"
int32_t TerrainLightMap_Setup(int32_t* context)

{
    int32_t item_338 = 0;
    int32_t item_334 = 0xc1c00000;
    int32_t data_1 = 0x40000000 >> (context[0x2e] & 0x1f) << 1;
    int32_t result = FX_FragmentSimulate_25();

    if (!result)
        return result;

    int32_t data_2 = *(context + 0xc7);
    bool flag_0_1 = *(context + 0xca);
    *(context + 0xcd) = 1;
    char item_381;

    if (!flag_0_1)
    {
        char data_4 = QHash_ValueGet();
        item_381 = data_4;

        if (!data_4)
            QHash_ValueSet();

        int32_t* data_5 = context[0x43];

        if (data_5)
        {
            QTask_FindType(data_5);
            context[0x43] = 0;
        }

        if (!*(context + 0xc7))
        {
            int32_t data_7 = 0;
            int32_t entity_2 = *(context[0x1a] + 0xdec);
            *(context + 0xc7) = 1;

            if (entity_2 > 0)
            {
                int32_t* temp_1 = &g_bc00a0;

                while (*temp_1)
                {
                    data_7 += 1;
                    temp_1 = &temp_1[1];

                    if (data_7 >= entity_2)
                        break;
                }
            }

            context[0x36] = data_7;
            *((data_7 << 2) + &g_bc00a0) = context;

            if (data_7 == entity_2)
                entity_2 += 1;

            if (entity_2 < 0x800)
            {
                *(context[0x1a] + 0xdec) = entity_2;
                int32_t data_9 = context[0x37];

                if (!*(context[0x1a] + 0xdf8))
                {
                    if (data_9 != 0xffffffff)
                    {
                        void item_208;
                        void item_188;
                        void item_108;
                        void item_88;
                        Terrain_UpdateWaterWaves_4(0xb97c20, &item_188, &item_208, &item_108, &item_88);
                        int32_t item_3b0_1 = context[0x37];
                        void* item_3b4_1 = &item_108;
                        void* item_3b8_1 = &item_208;
                        void* item_3bc_1 = &item_188;
                        void item_288;
                        Game_DataSymbolLoad(&item_288, "%s%slightmap/%s%d.lmp");
                        int32_t data_12;
                        int32_t temp_4;
                        data_12 = Sys_AllocateMemory_16(&item_288);

                        if (data_12)
                        {
                            void* item_3a0_2 = &item_288;
                            int32_t* data_13;
                            int32_t entity_8;
                            data_13 = Resource_Load(data_12, temp_4, &item_288, nullptr);
                            int32_t source_1 = context[0x35];

                            if (Sys_PushStack_8(entity_8) > 1)
                                Sys_ExecuteBytecode_8(1);

                            if (Sys_PushStack_8(Sys_FreeMemory_8(context[0x42], *(context[0x1a] + 0xdf4), source_1,
                                    source_1, source_1, 1, 0, 0, data_13)) > 1)
                                Sys_ExecuteBytecode_8(0xffffffff);

                            Resource_Unload(&item_288);
                        }
                    }
                }
                else if (data_9 != 0xffffffff)
                {
                    int32_t data_11 = data_9 * 0x2c;

                    if (*(data_11 + &g_b81b24))
                        context[0x42] = data_11 + &g_b81b28;
                }
            }
            else
            {
                Error_Show("Too many lightmaps whene generated");

                while (true)
                    /* nop */
            }
        }
    }

    double item_368;
    memcpy(&item_368, &context[0x1c], 0x18);
    double item_358;
    double item_330;
    double item_320;
    void item_2f8;
    int32_t item_2e0;
    int32_t item_2a0;

    if (!*(context + 0xca))
    {
        int32_t data_18 = 0;
        memcpy(&item_330, &context[0x1c], 0x18);
        item_320 = item_320 + 268435456.0;
        item_2a0 = 0;
        int32_t source_4 = 0;

        while (true)
        {
            if (source_4 < 5)
            {
                DynObj_UpdateDynTree_10(context[0x1a], &item_2f8, &item_330, 1, &item_338, 0xff, nullptr, 0x80000000);
                data_18 = item_2a0;
                source_4 += 1;

                if (!data_18)
                    continue;
            }
            else if (!data_18)
                break;

            item_358 = item_2e0;
            int32_t item_2dc;
            *(&item_358 + 4) = item_2dc;
            break;
        }
    }

    void* data_20 = context[0x1a];
    int32_t entity_15 = -(data_1);
    item_368 = *(data_20 + 0xde0) + item_368;
    double item_360;
    double item_360_1 = *(data_20 + 0xde4) + item_360;
    double item_358_1 = *(data_20 + 0xde8) + item_358;
    int64_t item_380 = item_368;
    long double fpu_val_7_10 = item_380 & entity_15;
    *(context + 0x88) = fpu_val_7_10;
    item_380 = item_360_1;
    long double fpu_val_6_2 = item_380 & entity_15;
    double item_300_1 = fpu_val_6_2;
    *(context + 0x90) = fpu_val_6_2;
    item_380 = item_358_1;
    int32_t item_370_3 = item_380 & entity_15;
    long double fpu_val_6_4 = item_370_3;
    item_380 = fpu_val_6_4;
    *(context + 0x98) = fpu_val_6_4;
    long double fpu_val_6_5 = data_1;
    memcpy(&item_368, &context[0x22], 0x18);
    *(context + 0xa0) = fpu_val_6_5 + fpu_val_7_10;
    *(context + 0xa8) = fpu_val_6_5 + item_300_1;
    *(context + 0xb0) = fpu_val_6_5 + item_380;
    long double fpu_val_6_6 = fpu_val_6_5 * 0.5;
    item_368 = fpu_val_6_6 + item_368;
    double item_360_2 = fpu_val_6_6 + item_360_1;
    long double fpu_val_7_12 = fpu_val_6_6 + item_358_1;
    double item_358_2 = fpu_val_7_12;
    item_368 = item_368 - *(data_20 + 0xde0);
    double item_360_3 = item_360_2 - *(data_20 + 0xde4);
    double item_358_3 = fpu_val_7_12 - *(data_20 + 0xde8);
    *(context + 0x88) = *(context + 0x88) - *(data_20 + 0xde0);
    *(context + 0x90) = *(context + 0x90) - *(data_20 + 0xde4);
    *(context + 0x98) = *(context + 0x98) - *(data_20 + 0xde8);
    *(context + 0xa0) = *(context + 0xa0) - *(data_20 + 0xde0);
    *(context + 0xa8) = *(context + 0xa8) - *(data_20 + 0xde4);
    long double fpu_val_7_24 = *(data_20 + 0xde8);
    *(context + 0xc7) = 1;
    *(context + 0xb0) = *(context + 0xb0) - fpu_val_7_24;

    if (!data_2)
        DynObj_RemoveSymbol_8(data_20, context, &item_368, &context[0x22], &context[0x28], 4);

    DynObj_UpdateDynTree_8(context[0x1a], context, &item_368, &context[0x22], &context[0x28]);

    if (!*(context + 0xca))
    {
        int32_t data_26 = context[0x35];
        int32_t entity_17;

        if (data_26 == 0x100)
            entity_17 = 7;
        else if (data_26 == 0x80)
            entity_17 = 6;
        else if (data_26 == 0x40)
            entity_17 = 5;
        else if (data_26 == 0x20)
            entity_17 = 4;
        else if (data_26 == 0x10)
            entity_17 = 3;
        else if (data_26 != 8)
        {
            Error_Show("Illegal shift size");

            while (true)
                /* nop */
        }
        else
            entity_17 = 2;

        int32_t data_27 = context[0x2e];
        context[0x2f] = 0x1e - data_27 - entity_17;
        void item_318;
        memcpy(&item_318, &context[8], 0x18);
        double item_308;
        long double fpu_val_7_26 = item_308;
        item_370_3 = fpu_val_7_26;
        item_380 = fpu_val_7_26;
        int32_t item_388_1 = 0x20;
        int32_t item_378_2 = 0x40000000 >> (data_27 & 0x1f);
        item_378_2 = item_378_2;
        bool flag_4_1;

        do
        {
            memcpy(&item_330, &item_318, 0x18);
            long double fp0_1 = Sys_AllocateMemory_14(0xa76cd0);
            item_330 = (fp0_1 + fp0_1 - 1.0f) * item_378_2 + item_330;
            long double fp0_2 = Sys_AllocateMemory_14(0xa76cd0);
            double item_328 = (fp0_2 + fp0_2 - 1.0f) * item_378_2 + item_328;
            item_320 = item_320 + 268435456.0;
            DynObj_UpdateDynTree_10(context[0x1a], &item_2f8, &item_330, 1, &item_338, 0xff, nullptr, 0x80000000);

            if (item_2a0)
            {
                long double fpu_val_7_40 = item_2e0;
                long double f1_1 = item_370_3;
                fpu_val_7_40 - f1_1;

                if (*(&((fpu_val_7_40 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_40, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_40 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    item_370_3 = fpu_val_7_40;

                long double f2_1 = item_380;
                fpu_val_7_40 - f2_1;

                if (!(*(&((fpu_val_7_40 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_40, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_40 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    item_380 = fpu_val_7_40;
            }

            flag_4_1 = item_388_1 != 1;
            item_388_1 -= 1;
        } while (flag_4_1);
        int32_t item_388_2 = 0;
        void item_350;
        memcpy(&item_350, &item_318, 0x18);
        double item_340_1 = item_308 - item_378_2;
        long double fpu_val_7_44 = item_370_3;
        long double f3_1 = item_340_1;
        fpu_val_7_44 - f3_1;

        if (*(&((fpu_val_7_44 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_44, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_44 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_49;
            long double f4_1;

            do
            {
                if (!item_388_2)
                {
                    context[0x43] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                    item_388_2 = 1;
                }

                double item_340_2 = item_340_1 - item_378_2;
                Script_CallNativeHandler_21(context[0x43], context, &item_350);
                item_340_1 = item_340_2 - item_378_2;
                fpu_val_7_49 = item_370_3;
                f4_1 = item_340_1;
                fpu_val_7_49 - f4_1;
            } while (*(&((fpu_val_7_49 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_49, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_49 == f4_1 ? 1 : 0) << 0xe) + 1) & 1);
        }

        memcpy(&item_350, &item_318, 0x18);
        double item_340_3 = item_378_2 + item_308;
        long double fpu_val_7_52 = item_380;
        long double f5_1 = item_340_3;
        fpu_val_7_52 - f5_1;

        if (!(*(&((fpu_val_7_52 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_52, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_52 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_57;
            long double f6_1;

            do
            {
                if (!item_388_2)
                {
                    context[0x43] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                    item_388_2 = 1;
                }

                double item_340_4 = item_340_3 + item_378_2;
                Script_CallNativeHandler_21(context[0x43], context, &item_350);
                item_340_3 = item_340_4 + item_378_2;
                fpu_val_7_57 = item_380;
                f6_1 = item_340_3;
                fpu_val_7_57 - f6_1;
            } while (!(*(&((fpu_val_7_57 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_57, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_57 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
        }

        if (!item_381)
            Sys_DispatchOpcode_2();
    }

    return Script_ParseEnumReal32_21(context);
}
