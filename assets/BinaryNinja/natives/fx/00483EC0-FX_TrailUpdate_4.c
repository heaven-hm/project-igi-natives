// IGI native provenance: FX_TrailUpdate_4 - 0x00483EC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00483EC0-FX_TrailUpdate_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_TrailUpdate_4.h"
int32_t* FX_TrailUpdate_4(void* context, float param_2, float param_3)

{
    long double fpu_val_7_1 = *(context + 0x110) * 9.76562515e-05.0f;
    int32_t item_380 = 1;
    int32_t item_37c = 1;
    int32_t item_464 = 1;
    long double fpu_val_7_2 = fpu_val_7_1 * 4096.0f;
    int32_t item_460 = 1;
    long double fpu_val_6_1 = -(fpu_val_7_2);
    float item_470 = fpu_val_6_1;
    double item_3e8 = fpu_val_6_1;
    long double fpu_val_6_3 = -(*(context + 0x110));
    float item_434 = fpu_val_6_3;
    double item_3e0 = fpu_val_6_3;
    double item_430;
    memcpy(&item_430, context + 0x70, 0x18);
    double item_3d0 = fpu_val_7_2;
    double item_3c8 = fpu_val_6_3;
    double item_3b0 = fpu_val_6_3;
    double item_3a8 = fpu_val_7_2;
    double item_398 = item_434;
    double item_390 = item_470;
    int32_t* entity_val = *(context + 0x68);
    int32_t* item_388 = nullptr;
    int32_t item_384 = 0;
    float entity_1 = *(context + 0x10c);
    int32_t item_46c = *entity_val;
    float temp_1 = *(context + 0x108);
    int32_t item_400;
    memset(&item_400, 0, 0x18);
    int32_t item_3d8 = 0;
    int32_t item_3d4 = 0;
    int32_t item_3c0 = 0;
    int32_t item_3bc = 0;
    int32_t item_3b8 = 0;
    int32_t item_3b4 = 0;
    int32_t item_3a0 = 0;
    int32_t item_39c = 0;
    float item_45c;
    int32_t entity_2 = Sys_ReadFileBlock_12(&item_45c, temp_1, 0.0f, entity_1);
    float item_458;
    float item_454;
    float item_450;
    float item_44c;
    float item_448;
    float item_444;
    float item_440;
    float item_43c;
    double item_428;
    double item_420;
    double item_418;
    double item_410;
    void item_408;
    int32_t item_3f0;

    for (int32_t i = 0; i < 0x78; )
    {
        long double fpu_val_7_6 = item_454 * *(&item_3f0 + i);
        long double fpu_val_6_5 = item_45c * *(&item_400 + i);
        i += 0x18;
        long double fpu_val_7_8 = fpu_val_7_6 + fpu_val_6_5 + item_458 * *(&item_410 + i);
        long double fpu_val_6_11 =
            item_448 * *(&item_408 + i) + item_450 * *(&item_418 + i) + item_44c * *(&item_410 + i);
        long double fpu_val_5_8 =
            item_43c * *(&item_408 + i) + item_444 * *(&item_418 + i) + item_440 * *(&item_410 + i);
        item_418 =
            *(context + 0xb8) * fpu_val_6_11 + *(context + 0xbc) * fpu_val_5_8 + *(context + 0xb4) * fpu_val_7_8;
        item_410 =
            *(context + 0xc4) * fpu_val_6_11 + *(context + 0xc8) * fpu_val_5_8 + *(context + 0xc0) * fpu_val_7_8;
        long double fpu_val_4_16 =
            *(context + 0xd0) * fpu_val_6_11 + *(context + 0xd4) * fpu_val_5_8 + *(context + 0xcc) * fpu_val_7_8;
        void item_258;
        *(&item_258 + i) = item_430 + item_418;
        void item_250;
        *(&item_250 + i) = item_428 + item_410;
        void item_248;
        *(&item_248 + i) = item_420 + fpu_val_4_16;
    }

    int32_t item_484_1 = entity_2;
    int32_t item_48c_1 = entity_2;
    Sys_ReadFileBlock_12(&item_45c, param_2 + *(context + 0x108), 0.0f, param_3 + *(context + 0x10c));

    for (int32_t i_1 = 0; i_1 < 0x78; )
    {
        int32_t item_3f8;
        long double fpu_val_7_16 = item_458 * *(&item_3f8 + i_1);
        long double fpu_val_6_20 = item_454 * *(&item_3f0 + i_1);
        i_1 += 0x18;
        long double fpu_val_7_18 = fpu_val_7_16 + fpu_val_6_20 + item_45c * *(&item_418 + i_1);
        long double fpu_val_6_26 =
            item_44c * *(&item_410 + i_1) + item_448 * *(&item_408 + i_1) + item_450 * *(&item_418 + i_1);
        long double fpu_val_5_17 =
            item_440 * *(&item_410 + i_1) + item_43c * *(&item_408 + i_1) + item_444 * *(&item_418 + i_1);
        item_418 =
            *(context + 0xb8) * fpu_val_6_26 + *(context + 0xbc) * fpu_val_5_17 + *(context + 0xb4) * fpu_val_7_18;
        item_410 =
            *(context + 0xc4) * fpu_val_6_26 + *(context + 0xc8) * fpu_val_5_17 + *(context + 0xc0) * fpu_val_7_18;
        long double fpu_val_4_32 =
            *(context + 0xd0) * fpu_val_6_26 + *(context + 0xd4) * fpu_val_5_17 + *(context + 0xcc) * fpu_val_7_18;
        void item_2d0;
        *(&item_2d0 + i_1) = item_418 + item_430;
        void item_2c8;
        *(&item_2c8 + i_1) = item_410 + item_428;
        void item_2c0;
        *(&item_2c0 + i_1) = fpu_val_4_32 + item_420;
    }

    double item_318;
    void item_2a0;
    memcpy(&item_318, &item_2a0, 0x60);
    double item_378;
    void item_240;
    memcpy(&item_378, &item_240, 0x18);
    void item_360;
    memcpy(&item_360, &item_378, 0x48);
    char data_val = Level_LoadObjects_4();
    void item_1c8;
    int32_t* result = DynObj_FindSymbol_11(Level_StartMission_4(), &item_1c8, &item_378, &item_318, 4, data_val,
        &item_470, 0xffffffff);
    int32_t** source_1 = &item_388;
    void item_188;
    float* temp_2 = &item_188;

    for (int32_t i_2 = 0; i_2 < 0x60; )
    {
        if (temp_2[6])
        {
            void item_370;
            void item_310;
            long double fpu_val_7_24 = (*(&item_310 + i_2) - *(&item_370 + i_2)) * temp_2[-1]
                + (*(&item_318 + i_2) - *(&item_378 + i_2)) * temp_2[-2];
            void item_368;
            void item_308;
            long double fpu_val_7_25 = fpu_val_7_24 + (*(&item_308 + i_2) - *(&item_368 + i_2)) * *temp_2;
            long double f1_1 = 0.0f;
            fpu_val_7_25 - f1_1;
            result = (fpu_val_7_25 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_25, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_25 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double fpu_val_7_27 = *(temp_2 - 0x38) - item_430;
                long double fpu_val_6_37 = *(temp_2 - 0x30) - item_428;
                long double fpu_val_5_26 = *(temp_2 - 0x28) - item_420;
                item_470 = fpu_val_5_26 * *(context + 0xcc) + fpu_val_6_37 * *(context + 0xc0)
                    + fpu_val_7_27 * *(context + 0xb4);
                long double fpu_val_7_31 = (fpu_val_5_26 * *(context + 0xd4) + fpu_val_6_37 * *(context + 0xc8)
                    + fpu_val_7_27 * *(context + 0xbc)) * item_440 + (fpu_val_5_26 * *(context + 0xd0)
                    + fpu_val_6_37 * *(context + 0xc4) + fpu_val_7_27 * *(context + 0xb8)) * item_44c;
                long double fpu_val_7_33 = (fpu_val_7_31 + item_470 * item_458) * -1.04999995f;
                long double f2_1 = 4096.0f;
                fpu_val_7_33 - f2_1;
                *(context + 0x110) = fpu_val_7_33;
                *(context + 0x114) = fpu_val_7_33;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [context_val+0x114], fp0} */;
                long double fpu_val_6_46;

                if (*(&((fpu_val_7_33 < f2_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(fpu_val_7_33, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_33 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    fpu_val_6_46 = 4096.0f;
                else
                    fpu_val_6_46 = *(context + 0x110);

                *(context + 0x110) = fpu_val_6_46;
                long double f4_1 = 4096.0f;
                fpu_val_7_33 - f4_1;

                if (*(&((fpu_val_7_33 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_33, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_33 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    fpu_val_7_33 = 4096.0f;

                result = *source_1;
                *(context + 0x114) = fpu_val_7_33;
                (&item_464)[result] = 0;
            }
        }

        i_2 += 0x18;
        temp_2 = &temp_2[0x1c];
        source_1 = &source_1[1];
    }

    bool flag_2 = !item_464;
    *(context + 0x10c) = param_3 + *(context + 0x10c);
    *(context + 0x108) = param_2 + *(context + 0x108);

    if (!flag_2 && item_460)
        *(context + 0x114) = *(context + 0x114) + 341.333344f;

    long double fpu_val_7_41 = *(context + 0x114);
    long double f3 = 10240.0f;
    fpu_val_7_41 - f3;
    result = (fpu_val_7_41 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_41, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_41 == f3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        *(context + 0x114) = 0x46200000;
        return result;
    }

    *(context + 0x114) = *(context + 0x114);
    return result;
}
