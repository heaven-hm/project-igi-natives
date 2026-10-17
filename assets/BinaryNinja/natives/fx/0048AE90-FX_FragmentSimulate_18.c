// IGI native provenance: FX_FragmentSimulate_18 - 0x0048AE90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048AE90-FX_FragmentSimulate_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_18.h"
int32_t FX_FragmentSimulate_18(int32_t* context, void* param_2)

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

    if (!*(flagP + 0x29))
    {
        *(param_2 + 0x18) = context_val + 1;

        if ((context_val + 1) % 0x1e > 0xf)
        {
            context = nullptr;
            FX_FindfreepositionStac(&context, source_val, 0, 5);
            int32_t* data_20 = context;

            if (data_20 && *data_20 != source_val[0xf8b])
            {
                source_val[0xf7c] = 0;
                source_val[0xf7a] = *data_20;
                *(param_2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t entity_6 = 0;
        entity_6 = *(param_2 + 0x18) > source_val[0xf54];
        return entity_6 + 6;
    }

    if (!FX_ExplosionSpawn_19(source_val))
    {
        Combat_SetAimMode(source_val[0xeaa], source_val, 1);
        return 0;
    }

    long double fpu7 = *(param_2 + 8);
    long double f2 = *(source_val + 0x3dc0);
    fpu7 - f2;

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        context = nullptr;
        FX_FindfreepositionStac(&context, source_val, 1, 5);
        int32_t* data_10 = context;

        if (data_10)
        {
            int32_t data_11 = *data_10;

            if (data_11 != source_val[0xf8b])
            {
                source_val[0xf7a] = data_11;
                return 5;
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
