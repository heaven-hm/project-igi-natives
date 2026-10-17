// IGI native provenance: HumanPlayer_UpdateHealth_8 - 0x0040F760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F760-HumanPlayer_UpdateHealth_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateHealth_8.h"
int32_t HumanPlayer_UpdateHealth_8(int32_t* context, int32_t param_2)

{
    int32_t* source_val = context;
    int32_t flagP = 0;
    int32_t* data_1;
    int32_t* entity_val;
    data_1 = Table_GetAt(&source_val[0x131], 0);
    int32_t temp_val;

    if (!data_1)
        context = 0xffffffff;
    else
    {
        data_1 = HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
        entity_val = *data_1;
        context = entity_val;
    }

    if (source_val[0x352] == 0xffffffff || param_2)
        flagP = 1;
    else
    {
        long double fpu_val_7_1 = source_val[0x81];
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fpu_val_7_2 = source_val[0x59];
            long double f3_1 = 0.0f;
            fpu_val_7_2 - f3_1;

            if (*(&((fpu_val_7_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                flagP = 1;
        }
    }

    long double fpu_val_7_3 = source_val[0x82];
    long double f0 = 0.0f;
    fpu_val_7_3 - f0;
    long double fpu_val_7_4;
    long double f2_1;

    if (!(*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        fpu_val_7_4 = source_val[0x5a];
        f2_1 = 0.0f;
        fpu_val_7_4 - f2_1;
    }

    int32_t i;
    int32_t dest_1;

    if (*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        if (flagP)
            goto label_40f805;

    label_40f837:
        dest_1 = source_val[0x79];
        i = HumanPlayer_UpdateMotion_11(source_val, dest_1);

        if (i)
        {
            i = HumanPlayer_PlayFootstep(i);

            if (!i)
                dest_1 = 0xffffffff;
            else
            {
                i = 0;

                if (g_56df18 > 0)
                {
                    int32_t* entity_2 = &g_56df1c;

                    do
                    {
                        if (*entity_2 == dest_1)
                            source_val[0x352] = i;

                        i += 1;
                        entity_2 = &entity_2[1];
                    } while (i < g_56df18);
                }
            }
        }
    }
    else
    {
        flagP = 0xffffffff;
    label_40f805:
        void* data_5 = source_val[0x379];

        if (!data_5)
        {
            int32_t context_1 = g_56df18;

            if (!context_1)
                goto label_40f837;

            while (true)
            {
                context_1 -= 1;
                int32_t dest_3 = source_val[0x352] + flagP;
                source_val[0x352] = dest_3;
                int32_t entity_3 = g_56df18;

                if (dest_3 >= entity_3)
                    source_val[0x352] = 0;
                else if (dest_3 < 0)
                    source_val[0x352] = entity_3 - 1;

                dest_1 = *((source_val[0x352] << 2) + &g_56df1c);
                int32_t* data_7 = HumanPlayer_UpdateMotion_11(source_val, dest_1);

                if (data_7)
                {
                    i = HumanPlayer_PlayFootstep(data_7);

                    if (i)
                        break;
                }

                if (!context_1)
                    goto label_40f837;
            }

            goto label_40f824;
        }

        i = HumanPlayer_LoadParameters_13(data_5, temp_val, entity_val, data_5);
        dest_1 = *i;
        source_val[0x379] = 0;
    label_40f824:

        if (dest_1 == 0xffffffff)
            goto label_40f837;
    }

    if (dest_1 != context)
    {
        i = HumanPlayer_UpdateMotion_11(source_val, dest_1);

        if (i)
            source_val[0x353] = dest_1;
    }

    return i;
}
