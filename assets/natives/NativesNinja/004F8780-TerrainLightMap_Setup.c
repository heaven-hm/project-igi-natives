#include "004F8780-TerrainLightMap_Setup.h"
/* 0x004f8780 TerrainLightMap_Setup full linked: callers=0 callees=37 */
int32_t sub_4f8780(int32_t* a1)

{
    int32_t var_338 = 0;
    int32_t var_334 = 0xc1c00000;
    int32_t eax_1 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t result = sub_48f250();

    if (!result)
        return result;

    int32_t eax_2 = *(a1 + 0xc7);
    bool cond:0_1 = *(a1 + 0xca);
    *(a1 + 0xcd) = 1;
    char var_381;

    if (!cond:0_1)
    {
        char eax_4 = QHash_ValueGet();
        var_381 = eax_4;

        if (!eax_4)
            QHash_ValueSet();

        int32_t* eax_5 = a1[0x43];

        if (eax_5)
        {
            QTask_FindType(eax_5);
            a1[0x43] = 0;
        }

        if (!*(a1 + 0xc7))
        {
            int32_t eax_7 = 0;
            int32_t ecx_2 = *(a1[0x1a] + 0xdec);
            *(a1 + 0xc7) = 1;

            if (ecx_2 > 0)
            {
                int32_t* edx_1 = &g_bc00a0;

                while (*edx_1)
                {
                    eax_7 += 1;
                    edx_1 = &edx_1[1];

                    if (eax_7 >= ecx_2)
                        break;
                }
            }

            a1[0x36] = eax_7;
            *((eax_7 << 2) + &g_bc00a0) = a1;

            if (eax_7 == ecx_2)
                ecx_2 += 1;

            if (ecx_2 < 0x800)
            {
                *(a1[0x1a] + 0xdec) = ecx_2;
                int32_t eax_9 = a1[0x37];

                if (!*(a1[0x1a] + 0xdf8))
                {
                    if (eax_9 != 0xffffffff)
                    {
                        void var_208;
                        void var_188;
                        void var_108;
                        void var_88;
                        sub_516b20(0xb97c20, &var_188, &var_208, &var_108, &var_88);
                        int32_t var_3b0_1 = a1[0x37];
                        void* var_3b4_1 = &var_108;
                        void* var_3b8_1 = &var_208;
                        void* var_3bc_1 = &var_188;
                        void var_288;
                        Game_DataSymbolLoad(&var_288, "%s%slightmap/%s%d.lmp");
                        int32_t eax_12;
                        int32_t edx_4;
                        eax_12 = sub_4b5b60(&var_288);

                        if (eax_12)
                        {
                            void* var_3a0_2 = &var_288;
                            int32_t* eax_13;
                            int32_t ecx_8;
                            eax_13 = Resource_Load(eax_12, edx_4, &var_288, nullptr);
                            int32_t esi_1 = a1[0x35];

                            if (sub_4b2670(ecx_8) > 1)
                                sub_4b2610(1);

                            if (sub_4b2670(sub_4b23b0(a1[0x42], *(a1[0x1a] + 0xdf4), esi_1,
                                    esi_1, esi_1, 1, 0, 0, eax_13)) > 1)
                                sub_4b2610(0xffffffff);

                            Resource_Unload(&var_288);
                        }
                    }
                }
                else if (eax_9 != 0xffffffff)
                {
                    int32_t eax_11 = eax_9 * 0x2c;

                    if (*(eax_11 + &g_b81b24))
                        a1[0x42] = eax_11 + &g_b81b28;
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

    double var_368;
    memcpy(&var_368, &a1[0x1c], 0x18);
    double var_358;
    double var_330;
    double var_320;
    void var_2f8;
    int32_t var_2e0;
    int32_t var_2a0;

    if (!*(a1 + 0xca))
    {
        int32_t eax_18 = 0;
        memcpy(&var_330, &a1[0x1c], 0x18);
        var_320 = var_320 + 268435456.0;
        var_2a0 = 0;
        int32_t esi_4 = 0;

        while (true)
        {
            if (esi_4 < 5)
            {
                sub_4cb9f0(a1[0x1a], &var_2f8, &var_330, 1, &var_338, 0xff, nullptr, 0x80000000);
                eax_18 = var_2a0;
                esi_4 += 1;

                if (!eax_18)
                    continue;
            }
            else if (!eax_18)
                break;

            var_358 = var_2e0;
            int32_t var_2dc;
            *(&var_358 + 4) = var_2dc;
            break;
        }
    }

    void* eax_20 = a1[0x1a];
    int32_t ecx_15 = -(eax_1);
    var_368 = *(eax_20 + 0xde0) + var_368;
    double var_360;
    double var_360_1 = *(eax_20 + 0xde4) + var_360;
    double var_358_1 = *(eax_20 + 0xde8) + var_358;
    int64_t var_380 = var_368;
    long double x87_r7_10 = var_380 & ecx_15;
    *(a1 + 0x88) = x87_r7_10;
    var_380 = var_360_1;
    long double x87_r6_2 = var_380 & ecx_15;
    double var_300_1 = x87_r6_2;
    *(a1 + 0x90) = x87_r6_2;
    var_380 = var_358_1;
    int32_t var_370_3 = var_380 & ecx_15;
    long double x87_r6_4 = var_370_3;
    var_380 = x87_r6_4;
    *(a1 + 0x98) = x87_r6_4;
    long double x87_r6_5 = eax_1;
    memcpy(&var_368, &a1[0x22], 0x18);
    *(a1 + 0xa0) = x87_r6_5 + x87_r7_10;
    *(a1 + 0xa8) = x87_r6_5 + var_300_1;
    *(a1 + 0xb0) = x87_r6_5 + var_380;
    long double x87_r6_6 = x87_r6_5 * 0.5;
    var_368 = x87_r6_6 + var_368;
    double var_360_2 = x87_r6_6 + var_360_1;
    long double x87_r7_12 = x87_r6_6 + var_358_1;
    double var_358_2 = x87_r7_12;
    var_368 = var_368 - *(eax_20 + 0xde0);
    double var_360_3 = var_360_2 - *(eax_20 + 0xde4);
    double var_358_3 = x87_r7_12 - *(eax_20 + 0xde8);
    *(a1 + 0x88) = *(a1 + 0x88) - *(eax_20 + 0xde0);
    *(a1 + 0x90) = *(a1 + 0x90) - *(eax_20 + 0xde4);
    *(a1 + 0x98) = *(a1 + 0x98) - *(eax_20 + 0xde8);
    *(a1 + 0xa0) = *(a1 + 0xa0) - *(eax_20 + 0xde0);
    *(a1 + 0xa8) = *(a1 + 0xa8) - *(eax_20 + 0xde4);
    long double x87_r7_24 = *(eax_20 + 0xde8);
    *(a1 + 0xc7) = 1;
    *(a1 + 0xb0) = *(a1 + 0xb0) - x87_r7_24;

    if (!eax_2)
        sub_4c7350(eax_20, a1, &var_368, &a1[0x22], &a1[0x28], 4);

    sub_4c6e70(a1[0x1a], a1, &var_368, &a1[0x22], &a1[0x28]);

    if (!*(a1 + 0xca))
    {
        int32_t eax_26 = a1[0x35];
        int32_t ecx_17;

        if (eax_26 == 0x100)
            ecx_17 = 7;
        else if (eax_26 == 0x80)
            ecx_17 = 6;
        else if (eax_26 == 0x40)
            ecx_17 = 5;
        else if (eax_26 == 0x20)
            ecx_17 = 4;
        else if (eax_26 == 0x10)
            ecx_17 = 3;
        else if (eax_26 != 8)
        {
            Error_Show("Illegal shift size");

            while (true)
                /* nop */
        }
        else
            ecx_17 = 2;

        int32_t eax_27 = a1[0x2e];
        a1[0x2f] = 0x1e - eax_27 - ecx_17;
        void var_318;
        memcpy(&var_318, &a1[8], 0x18);
        double var_308;
        long double x87_r7_26 = var_308;
        var_370_3 = x87_r7_26;
        var_380 = x87_r7_26;
        int32_t var_388_1 = 0x20;
        int32_t var_378_2 = 0x40000000 >> (eax_27 & 0x1f);
        var_378_2 = var_378_2;
        bool cond:4_1;

        do
        {
            memcpy(&var_330, &var_318, 0x18);
            long double st0_1 = sub_4b4770(0xa76cd0);
            var_330 = (st0_1 + st0_1 - 1f) * var_378_2 + var_330;
            long double st0_2 = sub_4b4770(0xa76cd0);
            double var_328 = (st0_2 + st0_2 - 1f) * var_378_2 + var_328;
            var_320 = var_320 + 268435456.0;
            sub_4cb9f0(a1[0x1a], &var_2f8, &var_330, 1, &var_338, 0xff, nullptr, 0x80000000);

            if (var_2a0)
            {
                long double x87_r7_40 = var_2e0;
                long double temp1_1 = var_370_3;
                x87_r7_40 - temp1_1;

                if (*(&((x87_r7_40 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    var_370_3 = x87_r7_40;

                long double temp2_1 = var_380;
                x87_r7_40 - temp2_1;

                if (!(*(&((x87_r7_40 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    var_380 = x87_r7_40;
            }

            cond:4_1 = var_388_1 != 1;
            var_388_1 -= 1;
        } while (cond:4_1);
        int32_t var_388_2 = 0;
        void var_350;
        memcpy(&var_350, &var_318, 0x18);
        double var_340_1 = var_308 - var_378_2;
        long double x87_r7_44 = var_370_3;
        long double temp3_1 = var_340_1;
        x87_r7_44 - temp3_1;

        if (*(&((x87_r7_44 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_44, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_44 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_49;
            long double temp4_1;

            do
            {
                if (!var_388_2)
                {
                    a1[0x43] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                    var_388_2 = 1;
                }

                double var_340_2 = var_340_1 - var_378_2;
                sub_4f8fe0(a1[0x43], a1, &var_350);
                var_340_1 = var_340_2 - var_378_2;
                x87_r7_49 = var_370_3;
                temp4_1 = var_340_1;
                x87_r7_49 - temp4_1;
            } while (*(&((x87_r7_49 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1);
        }

        memcpy(&var_350, &var_318, 0x18);
        double var_340_3 = var_378_2 + var_308;
        long double x87_r7_52 = var_380;
        long double temp5_1 = var_340_3;
        x87_r7_52 - temp5_1;

        if (!(*(&((x87_r7_52 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_52, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_52 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_57;
            long double temp6_1;

            do
            {
                if (!var_388_2)
                {
                    a1[0x43] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                    var_388_2 = 1;
                }

                double var_340_4 = var_340_3 + var_378_2;
                sub_4f8fe0(a1[0x43], a1, &var_350);
                var_340_3 = var_340_4 + var_378_2;
                x87_r7_57 = var_380;
                temp6_1 = var_340_3;
                x87_r7_57 - temp6_1;
            } while (!(*(&((x87_r7_57 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_57, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_57 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
        }

        if (!var_381)
            sub_4b0d50();
    }

    return sub_4f8ef0(a1);
}
