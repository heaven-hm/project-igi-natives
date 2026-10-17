// Original IGI.EXE function: FX_FragmentSimulate_19 (VA 0x0048BFD0; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_19.h"
int32_t FX_FragmentSimulate_19(int32_t* context, void* param_2)

{
    int32_t* source_val = context;
    void* flagP = source_val[0xf79];
    int32_t context_val = *(param_2 + 0x18);
    *(param_2 + 0x18) = 0;
    Combat_SetAimMode(source_val[0xeaa], source_val, 0xffffffff);

    if (source_val[0xf7a] == 0xffffffff)
    {
        int32_t item_18_1 = 0x3fd33333;
        void* data_2 = Script_ExecuteLevelScript_23(source_val[0xedb], source_val[0xf8b]);

        if (!Script_FormatString_23(DynObj_UpdateDynTree_4(source_val[5]), data_2, 4.17232506e-08.0f, 0))
            return 4;
    }

    int16_t data_6;
    data_6 = *(flagP + 0x29);

    if (!data_6)
    {
        *(param_2 + 0x18) = context_val + 1;

        if ((context_val + 1) % 0x1e > 0xf)
        {
            context = nullptr;
            FX_FindfreepositionStac(&context, source_val, 0, 5);
            int32_t* data_30 = context;

            if (data_30 && *data_30 != source_val[0xf8b])
            {
                source_val[0xf7c] = 0;
                source_val[0xf7a] = *data_30;
                *(param_2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t entity_6 = 0;
        entity_6 = *(param_2 + 0x18) > source_val[0xf54];
        return entity_6 + 6;
    }

    long double fpu7 = *(param_2 + 8);
    long double f2 = *(source_val + 0x3db0);
    fpu7 - f2;

    if (*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
            | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        return 3;

    if (!FX_ExplosionSpawn_19(source_val))
    {
        long double fpu_val_7_1 = source_val[0xf64];
        long double f4 = *(param_2 + 8);
        fpu_val_7_1 - f4;

        if (*(&((fpu_val_7_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f4) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f4 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_2 = source_val[0xf65];
            long double f6_1 = *(param_2 + 8);
            fpu_val_7_2 - f6_1;
            int16_t data_9 = (fpu_val_7_2 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f6_1 ? 1 : 0) << 0xe;

            if (!(*(&data_9 + 1) & 0x41))
            {
                data_9 = *(source_val + 0x3dfd);

                if (data_9)
                {
                    long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                    long double f8_1 = source_val[0xf62];
                    fp0_1 - f8_1;

                    if (*(&((fp0_1 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_1, f8_1) ? 1 : 0) << 0xa
                            | (fp0_1 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        return 1;
                }
            }
        }

        Combat_SetAimMode(source_val[0xeaa], source_val, 1);
        return 0;
    }

    long double fpu_val_7_4 = *(param_2 + 8);
    long double f3 = *(source_val + 0x3dc0);
    fpu_val_7_4 - f3;

    if (!(*(&((fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        context = nullptr;
        FX_FindfreepositionStac(&context, source_val, 1, 5);
        int32_t* data_16 = context;

        if (data_16)
        {
            int32_t data_17 = *data_16;

            if (data_17 != source_val[0xf8b])
            {
                source_val[0xf7a] = data_17;
                return 5;
            }
        }
    }

    long double fpu_val_7_5 = source_val[0xf64];
    long double f5 = *(param_2 + 8);
    fpu_val_7_5 - f5;

    if (*(&((fpu_val_7_5 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f5 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_6 = source_val[0xf65];
        long double f7_1 = *(param_2 + 8);
        fpu_val_7_6 - f7_1;
        int16_t data_15 = (fpu_val_7_6 < f7_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_6, f7_1) ? 1 : 0) << 0xa | (fpu_val_7_6 == f7_1 ? 1 : 0) << 0xe;

        if (!(*(&data_15 + 1) & 0x41))
        {
            data_15 = *(source_val + 0x3dfd);

            if (data_15)
            {
                long double fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double f9_1 = source_val[0xf63];
                fp0_2 - f9_1;

                if (*(&((fp0_2 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f9_1) ? 1 : 0) << 0xa
                        | (fp0_2 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    return 1;
            }
        }
    }

    if (AI_UpdateOrders_2(source_val[0xeaa], 0) >= 3)
    {
        Combat_SetAimMode(source_val[0xeaa], source_val, 2);
        return 6;
    }

    Combat_SetAimMode(source_val[0xeaa], source_val, 0);
    return 2;
}
