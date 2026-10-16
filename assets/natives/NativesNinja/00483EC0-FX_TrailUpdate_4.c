#include "00483EC0-FX_TrailUpdate_4.h"
/* 0x00483ec0 FX_TrailUpdate_4 full linked: callers=1 callees=10 */
int32_t* sub_483ec0(void* a1, float a2, float a3)

{
    long double x87_r7_1 = *(a1 + 0x110) * 9.76562515e-05f;
    int32_t var_380 = 1;
    int32_t var_37c = 1;
    int32_t var_464 = 1;
    long double x87_r7_2 = x87_r7_1 * 4096f;
    int32_t var_460 = 1;
    long double x87_r6_1 = -(x87_r7_2);
    float var_470 = x87_r6_1;
    double var_3e8 = x87_r6_1;
    long double x87_r6_3 = -(*(a1 + 0x110));
    float var_434 = x87_r6_3;
    double var_3e0 = x87_r6_3;
    double var_430;
    memcpy(&var_430, a1 + 0x70, 0x18);
    double var_3d0 = x87_r7_2;
    double var_3c8 = x87_r6_3;
    double var_3b0 = x87_r6_3;
    double var_3a8 = x87_r7_2;
    double var_398 = var_434;
    double var_390 = var_470;
    int32_t* ecx = *(a1 + 0x68);
    int32_t* var_388 = nullptr;
    int32_t var_384 = 0;
    float ecx_1 = *(a1 + 0x10c);
    int32_t var_46c = *ecx;
    float edx_1 = *(a1 + 0x108);
    int32_t var_400;
    __builtin_memset(&var_400, 0, 0x18);
    int32_t var_3d8 = 0;
    int32_t var_3d4 = 0;
    int32_t var_3c0 = 0;
    int32_t var_3bc = 0;
    int32_t var_3b8 = 0;
    int32_t var_3b4 = 0;
    int32_t var_3a0 = 0;
    int32_t var_39c = 0;
    float var_45c;
    int32_t ecx_2 = sub_4b38e0(&var_45c, edx_1, 0f, ecx_1);
    float var_458;
    float var_454;
    float var_450;
    float var_44c;
    float var_448;
    float var_444;
    float var_440;
    float var_43c;
    double var_428;
    double var_420;
    double var_418;
    double var_410;
    void var_408;
    int32_t var_3f0;

    for (int32_t i = 0; i < 0x78; )
    {
        long double x87_r7_6 = var_454 * *(&var_3f0 + i);
        long double x87_r6_5 = var_45c * *(&var_400 + i);
        i += 0x18;
        long double x87_r7_8 = x87_r7_6 + x87_r6_5 + var_458 * *(&var_410 + i);
        long double x87_r6_11 =
            var_448 * *(&var_408 + i) + var_450 * *(&var_418 + i) + var_44c * *(&var_410 + i);
        long double x87_r5_8 =
            var_43c * *(&var_408 + i) + var_444 * *(&var_418 + i) + var_440 * *(&var_410 + i);
        var_418 =
            *(a1 + 0xb8) * x87_r6_11 + *(a1 + 0xbc) * x87_r5_8 + *(a1 + 0xb4) * x87_r7_8;
        var_410 =
            *(a1 + 0xc4) * x87_r6_11 + *(a1 + 0xc8) * x87_r5_8 + *(a1 + 0xc0) * x87_r7_8;
        long double x87_r4_16 =
            *(a1 + 0xd0) * x87_r6_11 + *(a1 + 0xd4) * x87_r5_8 + *(a1 + 0xcc) * x87_r7_8;
        void var_258;
        *(&var_258 + i) = var_430 + var_418;
        void var_250;
        *(&var_250 + i) = var_428 + var_410;
        void var_248;
        *(&var_248 + i) = var_420 + x87_r4_16;
    }

    int32_t var_484_1 = ecx_2;
    int32_t var_48c_1 = ecx_2;
    sub_4b38e0(&var_45c, a2 + *(a1 + 0x108), 0f, a3 + *(a1 + 0x10c));

    for (int32_t i_1 = 0; i_1 < 0x78; )
    {
        int32_t var_3f8;
        long double x87_r7_16 = var_458 * *(&var_3f8 + i_1);
        long double x87_r6_20 = var_454 * *(&var_3f0 + i_1);
        i_1 += 0x18;
        long double x87_r7_18 = x87_r7_16 + x87_r6_20 + var_45c * *(&var_418 + i_1);
        long double x87_r6_26 =
            var_44c * *(&var_410 + i_1) + var_448 * *(&var_408 + i_1) + var_450 * *(&var_418 + i_1);
        long double x87_r5_17 =
            var_440 * *(&var_410 + i_1) + var_43c * *(&var_408 + i_1) + var_444 * *(&var_418 + i_1);
        var_418 =
            *(a1 + 0xb8) * x87_r6_26 + *(a1 + 0xbc) * x87_r5_17 + *(a1 + 0xb4) * x87_r7_18;
        var_410 =
            *(a1 + 0xc4) * x87_r6_26 + *(a1 + 0xc8) * x87_r5_17 + *(a1 + 0xc0) * x87_r7_18;
        long double x87_r4_32 =
            *(a1 + 0xd0) * x87_r6_26 + *(a1 + 0xd4) * x87_r5_17 + *(a1 + 0xcc) * x87_r7_18;
        void var_2d0;
        *(&var_2d0 + i_1) = var_418 + var_430;
        void var_2c8;
        *(&var_2c8 + i_1) = var_410 + var_428;
        void var_2c0;
        *(&var_2c0 + i_1) = x87_r4_32 + var_420;
    }

    double var_318;
    void var_2a0;
    memcpy(&var_318, &var_2a0, 0x60);
    double var_378;
    void var_240;
    memcpy(&var_378, &var_240, 0x18);
    void var_360;
    memcpy(&var_360, &var_378, 0x48);
    char eax = Level_LoadObjects_4();
    void var_1c8;
    int32_t* result = sub_4cc2a0(Level_StartMission_4(), &var_1c8, &var_378, &var_318, 4, eax,
        &var_470, 0xffffffff);
    int32_t** esi_1 = &var_388;
    void var_188;
    float* edx_2 = &var_188;

    for (int32_t i_2 = 0; i_2 < 0x60; )
    {
        if (edx_2[6])
        {
            void var_370;
            void var_310;
            long double x87_r7_24 = (*(&var_310 + i_2) - *(&var_370 + i_2)) * edx_2[-1]
                + (*(&var_318 + i_2) - *(&var_378 + i_2)) * edx_2[-2];
            void var_368;
            void var_308;
            long double x87_r7_25 = x87_r7_24 + (*(&var_308 + i_2) - *(&var_368 + i_2)) * *edx_2;
            long double temp1_1 = 0f;
            x87_r7_25 - temp1_1;
            result = (x87_r7_25 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_25, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_25 == temp1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_27 = *(edx_2 - 0x38) - var_430;
                long double x87_r6_37 = *(edx_2 - 0x30) - var_428;
                long double x87_r5_26 = *(edx_2 - 0x28) - var_420;
                var_470 = x87_r5_26 * *(a1 + 0xcc) + x87_r6_37 * *(a1 + 0xc0)
                    + x87_r7_27 * *(a1 + 0xb4);
                long double x87_r7_31 = (x87_r5_26 * *(a1 + 0xd4) + x87_r6_37 * *(a1 + 0xc8)
                    + x87_r7_27 * *(a1 + 0xbc)) * var_440 + (x87_r5_26 * *(a1 + 0xd0)
                    + x87_r6_37 * *(a1 + 0xc4) + x87_r7_27 * *(a1 + 0xb8)) * var_44c;
                long double x87_r7_33 = (x87_r7_31 + var_470 * var_458) * -1.04999995f;
                long double temp2_1 = 4096f;
                x87_r7_33 - temp2_1;
                *(a1 + 0x110) = x87_r7_33;
                *(a1 + 0x114) = x87_r7_33;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [ebx+0x114], st0} */;
                long double x87_r6_46;

                if (*(&((x87_r7_33 < temp2_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r7_33, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_46 = 4096f;
                else
                    x87_r6_46 = *(a1 + 0x110);

                *(a1 + 0x110) = x87_r6_46;
                long double temp4_1 = 4096f;
                x87_r7_33 - temp4_1;

                if (*(&((x87_r7_33 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_33, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r7_33 = 4096f;

                result = *esi_1;
                *(a1 + 0x114) = x87_r7_33;
                (&var_464)[result] = 0;
            }
        }

        i_2 += 0x18;
        edx_2 = &edx_2[0x1c];
        esi_1 = &esi_1[1];
    }

    bool cond:2 = !var_464;
    *(a1 + 0x10c) = a3 + *(a1 + 0x10c);
    *(a1 + 0x108) = a2 + *(a1 + 0x108);

    if (!cond:2 && var_460)
        *(a1 + 0x114) = *(a1 + 0x114) + 341.333344f;

    long double x87_r7_41 = *(a1 + 0x114);
    long double temp3 = 10240f;
    x87_r7_41 - temp3;
    result = (x87_r7_41 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_41, temp3) ? 1 : 0) << 0xa
        | (x87_r7_41 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        *(a1 + 0x114) = 0x46200000;
        return result;
    }

    *(a1 + 0x114) = *(a1 + 0x114);
    return result;
}
