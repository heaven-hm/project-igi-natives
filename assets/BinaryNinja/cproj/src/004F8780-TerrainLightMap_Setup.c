#include "gi_platform.h"
#include "004F8780-TerrainLightMap_Setup.h"
int32_t TerrainLightMap_Setup(int32_t* a1)

{
    int32_t v_338 = 0;
    int32_t v_334 = 0xc1c00000;
    int32_t valA1 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t result = FX_FragmentSimulate_25();

    if (!result)
        return result;

    int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + 0xc7));
    bool cond_0_1 = (*(int32_t*)(uintptr_t)(a1 + 0xca));
    (*(int32_t*)(uintptr_t)(a1 + 0xcd)) = 1;
    char v_381;

    if (!cond_0_1)
    {
        char valA4 = QHash_ValueGet();
        v_381 = valA4;

        if (!valA4)
            QHash_ValueSet();

        int32_t* valA5 = a1[0x43];

        if (valA5)
        {
            QTask_FindType(valA5);
            a1[0x43] = 0;
        }

        if (!(*(int32_t*)(uintptr_t)(a1 + 0xc7)))
        {
            int32_t valA7 = 0;
            int32_t objC2 = (*(int32_t*)(uintptr_t)(a1[0x1a] + 0xdec));
            (*(int32_t*)(uintptr_t)(a1 + 0xc7)) = 1;

            if (objC2 > 0)
            {
                int32_t* tmpD1 = &g_bc00a0;

                while (*tmpD1)
                {
                    valA7 += 1;
                    tmpD1 = &tmpD1[1];

                    if (valA7 >= objC2)
                        break;
                }
            }

            a1[0x36] = valA7;
            *((valA7 << 2) + &g_bc00a0) = a1;

            if (valA7 == objC2)
                objC2 += 1;

            if (objC2 < 0x800)
            {
                (*(int32_t*)(uintptr_t)(a1[0x1a] + 0xdec)) = objC2;
                int32_t valA9 = a1[0x37];

                if (!(*(int32_t*)(uintptr_t)(a1[0x1a] + 0xdf8)))
                {
                    if (valA9 != 0xffffffff)
                    {
                        char v_208;
                        char v_188;
                        char v_108;
                        char v_88;
                        Terrain_UpdateWaterWaves_4(0xb97c20, &v_188, &v_208, &v_108, &v_88);
                        int32_t v_3b0_1 = a1[0x37];
                        void* v_3b4_1 = &v_108;
                        void* v_3b8_1 = &v_208;
                        void* v_3bc_1 = &v_188;
                        char v_288;
                        Game_DataSymbolLoad(&v_288, "%s%slightmap/%s%d.lmp");
                        int32_t valA12;
                        int32_t tmpD4;
                        valA12 = Sys_AllocateMemory_16(&v_288);

                        if (valA12)
                        {
                            void* v_3a0_2 = &v_288;
                            int32_t* valA13;
                            int32_t objC8;
                            valA13 = Resource_Load(valA12, tmpD4, &v_288, nullptr);
                            int32_t srcS1 = a1[0x35];

                            if (Sys_PushStack_8(objC8) > 1)
                                Sys_ExecuteBytecode_8(1);

                            if (Sys_PushStack_8(Sys_FreeMemory_8(a1[0x42], (*(int32_t*)(uintptr_t)(a1[0x1a] + 0xdf4)), srcS1,
                                    srcS1, srcS1, 1, 0, 0, valA13)) > 1)
                                Sys_ExecuteBytecode_8(0xffffffff);

                            Resource_Unload(&v_288);
                        }
                    }
                }
                else if (valA9 != 0xffffffff)
                {
                    int32_t valA11 = valA9 * 0x2c;

                    if (*(valA11 + &g_b81b24))
                        a1[0x42] = valA11 + &g_b81b28;
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

    double v_368;
    memcpy(&v_368, &a1[0x1c], 0x18);
    double v_358;
    double v_330;
    double v_320;
    char v_2f8;
    int32_t v_2e0;
    int32_t v_2a0;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xca)))
    {
        int32_t valA18 = 0;
        memcpy(&v_330, &a1[0x1c], 0x18);
        v_320 = v_320 + 268435456.0;
        v_2a0 = 0;
        int32_t srcS4 = 0;

        while (true)
        {
            if (srcS4 < 5)
            {
                DynObj_UpdateDynTree_10(a1[0x1a], &v_2f8, &v_330, 1, &v_338, 0xff, nullptr, 0x80000000);
                valA18 = v_2a0;
                srcS4 += 1;

                if (!valA18)
                    continue;
            }
            else if (!valA18)
                break;

            v_358 = v_2e0;
            int32_t v_2dc;
            *(&v_358 + 4) = v_2dc;
            break;
        }
    }

    void* valA20 = a1[0x1a];
    int32_t objC15 = -(valA1);
    v_368 = *(valA20 + 0xde0) + v_368;
    double v_360;
    double v_360_1 = *(valA20 + 0xde4) + v_360;
    double v_358_1 = *(valA20 + 0xde8) + v_358;
    int64_t v_380 = v_368;
    long double x87_r7_10 = v_380 & objC15;
    (*(int32_t*)(uintptr_t)(a1 + 0x88)) = x87_r7_10;
    v_380 = v_360_1;
    long double x87_r6_2 = v_380 & objC15;
    double v_300_1 = x87_r6_2;
    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = x87_r6_2;
    v_380 = v_358_1;
    int32_t v_370_3 = v_380 & objC15;
    long double x87_r6_4 = v_370_3;
    v_380 = x87_r6_4;
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = x87_r6_4;
    long double x87_r6_5 = valA1;
    memcpy(&v_368, &a1[0x22], 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = x87_r6_5 + x87_r7_10;
    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = x87_r6_5 + v_300_1;
    (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = x87_r6_5 + v_380;
    long double x87_r6_6 = x87_r6_5 * 0.5;
    v_368 = x87_r6_6 + v_368;
    double v_360_2 = x87_r6_6 + v_360_1;
    long double x87_r7_12 = x87_r6_6 + v_358_1;
    double v_358_2 = x87_r7_12;
    v_368 = v_368 - *(valA20 + 0xde0);
    double v_360_3 = v_360_2 - *(valA20 + 0xde4);
    double v_358_3 = x87_r7_12 - *(valA20 + 0xde8);
    (*(int32_t*)(uintptr_t)(a1 + 0x88)) = (*(int32_t*)(uintptr_t)(a1 + 0x88)) - *(valA20 + 0xde0);
    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = (*(int32_t*)(uintptr_t)(a1 + 0x90)) - *(valA20 + 0xde4);
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = (*(int32_t*)(uintptr_t)(a1 + 0x98)) - *(valA20 + 0xde8);
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = (*(int32_t*)(uintptr_t)(a1 + 0xa0)) - *(valA20 + 0xde0);
    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = (*(int32_t*)(uintptr_t)(a1 + 0xa8)) - *(valA20 + 0xde4);
    long double x87_r7_24 = *(valA20 + 0xde8);
    (*(int32_t*)(uintptr_t)(a1 + 0xc7)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = (*(int32_t*)(uintptr_t)(a1 + 0xb0)) - x87_r7_24;

    if (!valA2)
        DynObj_RemoveSymbol_8(valA20, a1, &v_368, &a1[0x22], &a1[0x28], 4);

    DynObj_UpdateDynTree_8(a1[0x1a], a1, &v_368, &a1[0x22], &a1[0x28]);

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xca)))
    {
        int32_t valA26 = a1[0x35];
        int32_t objC17;

        if (valA26 == 0x100)
            objC17 = 7;
        else if (valA26 == 0x80)
            objC17 = 6;
        else if (valA26 == 0x40)
            objC17 = 5;
        else if (valA26 == 0x20)
            objC17 = 4;
        else if (valA26 == 0x10)
            objC17 = 3;
        else if (valA26 != 8)
        {
            Error_Show("Illegal shift size");

            while (true)
                /* nop */
        }
        else
            objC17 = 2;

        int32_t valA27 = a1[0x2e];
        a1[0x2f] = 0x1e - valA27 - objC17;
        char v_318;
        memcpy(&v_318, &a1[8], 0x18);
        double v_308;
        long double x87_r7_26 = v_308;
        v_370_3 = x87_r7_26;
        v_380 = x87_r7_26;
        int32_t v_388_1 = 0x20;
        int32_t v_378_2 = 0x40000000 >> (valA27 & 0x1f);
        v_378_2 = v_378_2;
        bool cond_4_1;

        do
        {
            memcpy(&v_330, &v_318, 0x18);
            long double fp0_1 = Sys_AllocateMemory_14(0xa76cd0);
            v_330 = (fp0_1 + fp0_1 - 1.0f) * v_378_2 + v_330;
            long double fp0_2 = Sys_AllocateMemory_14(0xa76cd0);
            double v_328 = (fp0_2 + fp0_2 - 1.0f) * v_378_2 + v_328;
            v_320 = v_320 + 268435456.0;
            DynObj_UpdateDynTree_10(a1[0x1a], &v_2f8, &v_330, 1, &v_338, 0xff, nullptr, 0x80000000);

            if (v_2a0)
            {
                long double x87_r7_40 = v_2e0;
                long double f1_1 = v_370_3;
                x87_r7_40 - f1_1;

                if (*(&((x87_r7_40 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    v_370_3 = x87_r7_40;

                long double f2_1 = v_380;
                x87_r7_40 - f2_1;

                if (!(*(&((x87_r7_40 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    v_380 = x87_r7_40;
            }

            cond_4_1 = v_388_1 != 1;
            v_388_1 -= 1;
        } while (cond_4_1);
        int32_t v_388_2 = 0;
        char v_350;
        memcpy(&v_350, &v_318, 0x18);
        double v_340_1 = v_308 - v_378_2;
        long double x87_r7_44 = v_370_3;
        long double f3_1 = v_340_1;
        x87_r7_44 - f3_1;

        if (*(&((x87_r7_44 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_44, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_44 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_49;
            long double f4_1;

            do
            {
                if (!v_388_2)
                {
                    a1[0x43] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                    v_388_2 = 1;
                }

                double v_340_2 = v_340_1 - v_378_2;
                Script_CallNativeHandler_21(a1[0x43], a1, &v_350);
                v_340_1 = v_340_2 - v_378_2;
                x87_r7_49 = v_370_3;
                f4_1 = v_340_1;
                x87_r7_49 - f4_1;
            } while (*(&((x87_r7_49 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == f4_1 ? 1 : 0) << 0xe) + 1) & 1);
        }

        memcpy(&v_350, &v_318, 0x18);
        double v_340_3 = v_378_2 + v_308;
        long double x87_r7_52 = v_380;
        long double f5_1 = v_340_3;
        x87_r7_52 - f5_1;

        if (!(*(&((x87_r7_52 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_52, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_52 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_57;
            long double f6_1;

            do
            {
                if (!v_388_2)
                {
                    a1[0x43] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                    v_388_2 = 1;
                }

                double v_340_4 = v_340_3 + v_378_2;
                Script_CallNativeHandler_21(a1[0x43], a1, &v_350);
                v_340_3 = v_340_4 + v_378_2;
                x87_r7_57 = v_380;
                f6_1 = v_340_3;
                x87_r7_57 - f6_1;
            } while (!(*(&((x87_r7_57 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_57, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_57 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
        }

        if (!v_381)
            Sys_DispatchOpcode_2();
    }

    return Script_ParseEnumReal32_21(a1);
}
