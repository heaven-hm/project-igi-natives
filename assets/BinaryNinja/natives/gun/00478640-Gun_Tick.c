// IGI native provenance: Gun_Tick - 0x00478640 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478640-Gun_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Tick.h"
uint32_t Gun_Tick(int32_t* context)

{
    void* flagP = context[0x4a];

    if (context[0x51] == 0xfffffffe)
        context[0x51] = *(flagP + 0x648);

    if (context[0x3f])
        return QTask_FindType(context);

    int32_t data_3 = context[0x4f];

    if (data_3)
        context[0x4f] = data_3 - 1;

    int32_t* i = *(context[0x3a] + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* dest_1 = *i;
            void* data_7;

            if (!dest_1)
                data_7 = nullptr;
            else
            {
                int32_t data_4 = *dest_1;
                int32_t data_5 = -(data_4);
                data_7 = (data_5 - data_5) & dest_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_7;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_8 = 0;
            g_afa7e0 = temp_2;
            data_8 = i[7];
            data_3 = *((data_8 << 2) + &g_a970e0);

            if (data_3)
            {
                data_3(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    long double fpu7 = context[0x66];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_6 = context[0x66];
        long double f1_1 = 0.0f;
        fpu_val_7_6 - f1_1;

        if (!(*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_11 = context[0x66] - 60.0 / (60.0 / *(flagP + 0x644) * 30.0);
            context[0x66] = fpu_val_7_11;
            long double f3_1 = 0.0f;
            fpu_val_7_11 - f3_1;

            if (*(&((fpu_val_7_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                context[0x66] = 0;
        }
    }
    else
    {
        long double fpu_val_7_5 = 60.0 / (60.0 / *(flagP + 0x644) * 30.0) + context[0x66];
        context[0x66] = fpu_val_7_5;
        long double f2_1 = 0.0f;
        fpu_val_7_5 - f2_1;

        if (!(*(&((fpu_val_7_5 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            context[0x66] = 0;
    }

    int32_t data_10 = context[0x69];

    if (data_10)
    {
        int32_t entity_1 = context[0x6a];

        if (!entity_1)
        {
            context[0x69] = data_10 + 1;
            int32_t data_12;
            int32_t temp_3;
            temp_3 = HIGHD(0x55555556 * 60.0 / *(flagP + 0x644) * 30.0);
            data_12 = LOWD(0x55555556 * 60.0 / *(flagP + 0x644) * 30.0);
            context[0x6a] = temp_3 + (temp_3 >> 0x1f);
        }
        else
            context[0x6a] = entity_1 - 1;
    }

    uint32_t result = context[0x67];

    if (result)
    {
        int32_t entity_6 = context[0x68];

        if (entity_6)
        {
            context[0x68] = entity_6 - 1;
            return result;
        }

        context[0x67] = result + 1;
        int32_t data_14;
        int32_t temp_5;
        temp_5 = HIGHD(0x66666667 * 60.0 / *(flagP + 0x644) * 30.0);
        data_14 = LOWD(0x66666667 * 60.0 / *(flagP + 0x644) * 30.0);
        int32_t temp_6 = temp_5 >> 2;
        result = temp_6 >> 0x1f;
        context[0x68] = temp_6 + result;
    }

    return result;
}
