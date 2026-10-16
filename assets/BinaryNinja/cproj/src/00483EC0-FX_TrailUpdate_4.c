#include "gi_platform.h"
#include "00483EC0-FX_TrailUpdate_4.h"
int32_t* FX_TrailUpdate_4(void* a1, float a2, float a3)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) * 9.76562515e-05.0f;
    int32_t v_380 = 1;
    int32_t v_37c = 1;
    int32_t v_464 = 1;
    long double x87_r7_2 = x87_r7_1 * 4096.0f;
    int32_t v_460 = 1;
    long double x87_r6_1 = -(x87_r7_2);
    float v_470 = x87_r6_1;
    double v_3e8 = x87_r6_1;
    long double x87_r6_3 = -((*(int32_t*)(uintptr_t)(a1 + 0x110)));
    float v_434 = x87_r6_3;
    double v_3e0 = x87_r6_3;
    double v_430;
    memcpy(&v_430, a1 + 0x70, 0x18);
    double v_3d0 = x87_r7_2;
    double v_3c8 = x87_r6_3;
    double v_3b0 = x87_r6_3;
    double v_3a8 = x87_r7_2;
    double v_398 = v_434;
    double v_390 = v_470;
    int32_t* objC = (*(int32_t*)(uintptr_t)(a1 + 0x68));
    int32_t* v_388 = nullptr;
    int32_t v_384 = 0;
    float objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    int32_t v_46c = *objC;
    float tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    int32_t v_400;
    __builtin_memset(&v_400, 0, 0x18);
    int32_t v_3d8 = 0;
    int32_t v_3d4 = 0;
    int32_t v_3c0 = 0;
    int32_t v_3bc = 0;
    int32_t v_3b8 = 0;
    int32_t v_3b4 = 0;
    int32_t v_3a0 = 0;
    int32_t v_39c = 0;
    float v_45c;
    int32_t objC2 = Sys_ReadFileBlock_12(&v_45c, tmpD1, 0.0f, objC1);
    float v_458;
    float v_454;
    float v_450;
    float v_44c;
    float v_448;
    float v_444;
    float v_440;
    float v_43c;
    double v_428;
    double v_420;
    double v_418;
    double v_410;
    char v_408;
    int32_t v_3f0;

    for (int32_t i = 0; i < 0x78; )
    {
        long double x87_r7_6 = v_454 * *(&v_3f0 + i);
        long double x87_r6_5 = v_45c * *(&v_400 + i);
        i += 0x18;
        long double x87_r7_8 = x87_r7_6 + x87_r6_5 + v_458 * *(&v_410 + i);
        long double x87_r6_11 =
            v_448 * *(&v_408 + i) + v_450 * *(&v_418 + i) + v_44c * *(&v_410 + i);
        long double x87_r5_8 =
            v_43c * *(&v_408 + i) + v_444 * *(&v_418 + i) + v_440 * *(&v_410 + i);
        v_418 =
            (*(int32_t*)(uintptr_t)(a1 + 0xb8)) * x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0xbc)) * x87_r5_8 + (*(int32_t*)(uintptr_t)(a1 + 0xb4)) * x87_r7_8;
        v_410 =
            (*(int32_t*)(uintptr_t)(a1 + 0xc4)) * x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0xc8)) * x87_r5_8 + (*(int32_t*)(uintptr_t)(a1 + 0xc0)) * x87_r7_8;
        long double x87_r4_16 =
            (*(int32_t*)(uintptr_t)(a1 + 0xd0)) * x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0xd4)) * x87_r5_8 + (*(int32_t*)(uintptr_t)(a1 + 0xcc)) * x87_r7_8;
        char v_258;
        *(&v_258 + i) = v_430 + v_418;
        char v_250;
        *(&v_250 + i) = v_428 + v_410;
        char v_248;
        *(&v_248 + i) = v_420 + x87_r4_16;
    }

    int32_t v_484_1 = objC2;
    int32_t v_48c_1 = objC2;
    Sys_ReadFileBlock_12(&v_45c, a2 + (*(int32_t*)(uintptr_t)(a1 + 0x108)), 0.0f, a3 + (*(int32_t*)(uintptr_t)(a1 + 0x10c)));

    for (int32_t i_1 = 0; i_1 < 0x78; )
    {
        int32_t v_3f8;
        long double x87_r7_16 = v_458 * *(&v_3f8 + i_1);
        long double x87_r6_20 = v_454 * *(&v_3f0 + i_1);
        i_1 += 0x18;
        long double x87_r7_18 = x87_r7_16 + x87_r6_20 + v_45c * *(&v_418 + i_1);
        long double x87_r6_26 =
            v_44c * *(&v_410 + i_1) + v_448 * *(&v_408 + i_1) + v_450 * *(&v_418 + i_1);
        long double x87_r5_17 =
            v_440 * *(&v_410 + i_1) + v_43c * *(&v_408 + i_1) + v_444 * *(&v_418 + i_1);
        v_418 =
            (*(int32_t*)(uintptr_t)(a1 + 0xb8)) * x87_r6_26 + (*(int32_t*)(uintptr_t)(a1 + 0xbc)) * x87_r5_17 + (*(int32_t*)(uintptr_t)(a1 + 0xb4)) * x87_r7_18;
        v_410 =
            (*(int32_t*)(uintptr_t)(a1 + 0xc4)) * x87_r6_26 + (*(int32_t*)(uintptr_t)(a1 + 0xc8)) * x87_r5_17 + (*(int32_t*)(uintptr_t)(a1 + 0xc0)) * x87_r7_18;
        long double x87_r4_32 =
            (*(int32_t*)(uintptr_t)(a1 + 0xd0)) * x87_r6_26 + (*(int32_t*)(uintptr_t)(a1 + 0xd4)) * x87_r5_17 + (*(int32_t*)(uintptr_t)(a1 + 0xcc)) * x87_r7_18;
        char v_2d0;
        *(&v_2d0 + i_1) = v_418 + v_430;
        char v_2c8;
        *(&v_2c8 + i_1) = v_410 + v_428;
        char v_2c0;
        *(&v_2c0 + i_1) = x87_r4_32 + v_420;
    }

    double v_318;
    char v_2a0;
    memcpy(&v_318, &v_2a0, 0x60);
    double v_378;
    char v_240;
    memcpy(&v_378, &v_240, 0x18);
    char v_360;
    memcpy(&v_360, &v_378, 0x48);
    char valA = Level_LoadObjects_4();
    char v_1c8;
    int32_t* result = DynObj_FindSymbol_11(Level_StartMission_4(), &v_1c8, &v_378, &v_318, 4, valA,
        &v_470, 0xffffffff);
    int32_t** srcS1 = &v_388;
    char v_188;
    float* tmpD2 = &v_188;

    for (int32_t i_2 = 0; i_2 < 0x60; )
    {
        if (tmpD2[6])
        {
            char v_370;
            char v_310;
            long double x87_r7_24 = (*(&v_310 + i_2) - *(&v_370 + i_2)) * tmpD2[-1]
                + (*(&v_318 + i_2) - *(&v_378 + i_2)) * tmpD2[-2];
            char v_368;
            char v_308;
            long double x87_r7_25 = x87_r7_24 + (*(&v_308 + i_2) - *(&v_368 + i_2)) * *tmpD2;
            long double f1_1 = 0.0f;
            x87_r7_25 - f1_1;
            result = (x87_r7_25 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_25, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_25 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_27 = *(tmpD2 - 0x38) - v_430;
                long double x87_r6_37 = *(tmpD2 - 0x30) - v_428;
                long double x87_r5_26 = *(tmpD2 - 0x28) - v_420;
                v_470 = x87_r5_26 * (*(int32_t*)(uintptr_t)(a1 + 0xcc)) + x87_r6_37 * (*(int32_t*)(uintptr_t)(a1 + 0xc0))
                    + x87_r7_27 * (*(int32_t*)(uintptr_t)(a1 + 0xb4));
                long double x87_r7_31 = (x87_r5_26 * (*(int32_t*)(uintptr_t)(a1 + 0xd4)) + x87_r6_37 * (*(int32_t*)(uintptr_t)(a1 + 0xc8))
                    + x87_r7_27 * (*(int32_t*)(uintptr_t)(a1 + 0xbc))) * v_440 + (x87_r5_26 * (*(int32_t*)(uintptr_t)(a1 + 0xd0))
                    + x87_r6_37 * (*(int32_t*)(uintptr_t)(a1 + 0xc4)) + x87_r7_27 * (*(int32_t*)(uintptr_t)(a1 + 0xb8))) * v_44c;
                long double x87_r7_33 = (x87_r7_31 + v_470 * v_458) * -1.04999995.0f;
                long double f2_1 = 4096.0f;
                x87_r7_33 - f2_1;
                (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r7_33;
                (*(int32_t*)(uintptr_t)(a1 + 0x114)) = x87_r7_33;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [ctxB+0x114], fp0} */;
                long double x87_r6_46;

                if (*(&((x87_r7_33 < f2_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r7_33, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_46 = 4096.0f;
                else
                    x87_r6_46 = (*(int32_t*)(uintptr_t)(a1 + 0x110));

                (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r6_46;
                long double f4_1 = 4096.0f;
                x87_r7_33 - f4_1;

                if (*(&((x87_r7_33 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_33, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r7_33 = 4096.0f;

                result = *srcS1;
                (*(int32_t*)(uintptr_t)(a1 + 0x114)) = x87_r7_33;
                (&v_464)[result] = 0;
            }
        }

        i_2 += 0x18;
        tmpD2 = &tmpD2[0x1c];
        srcS1 = &srcS1[1];
    }

    bool cond_2 = !v_464;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = a3 + (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = a2 + (*(int32_t*)(uintptr_t)(a1 + 0x108));

    if (!cond_2 && v_460)
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114)) + 341.333344.0f;

    long double x87_r7_41 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
    long double f3 = 10240.0f;
    x87_r7_41 - f3;
    result = (x87_r7_41 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_41, f3) ? 1 : 0) << 0xa
        | (x87_r7_41 == f3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = 0x46200000;
        return result;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114));
    return result;
}
