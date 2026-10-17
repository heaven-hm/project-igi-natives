// IGI native provenance: Afterburner_Setup - 0x0042BFA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042BFA0-Afterburner_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Afterburner_Setup.h"
int32_t Afterburner_Setup(float context)

{
    float source_val = context;
    void* entity_val = *(source_val + 0x130);
    long double fpu7 = *(entity_val + 0x720);
    long double f1 = 0.810000002f;
    fpu7 - f1;
    long double fpu_val_7_3;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_3 = 0.0f;
    else
        fpu_val_7_3 = (*(entity_val + 0x720) - 0.810000002f) * 2.27272725f;

    long double f2 = *(source_val + 0x138);
    fpu_val_7_3 - f2;

    if (!(*(&((fpu_val_7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        *(source_val + 0x138) = *(source_val + 0x138) * 0.980000019f + fpu_val_7_3 * 0.0199999809f;

    long double fpu_val_7_8 = *(source_val + 0x138) * 1.39999998f;
    long double fpu_val_6_5 = 1.0f;
    fpu_val_6_5 - fpu_val_7_8;

    context = *(&((fpu_val_6_5 < fpu_val_7_8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fpu_val_7_8) ? 1 : 0) << 0xa
        | (fpu_val_6_5 == fpu_val_7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? fpu_val_7_8 : 1.0f;

    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_14(&g_57bd00);
    int32_t* i = *(source_val + 8);
    *(source_val + 0x9c) = fp0 * 0.200000003f + context;

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            result = *((data_5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    return result;
}
