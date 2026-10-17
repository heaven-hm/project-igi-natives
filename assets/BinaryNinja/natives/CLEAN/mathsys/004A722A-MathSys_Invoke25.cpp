// IGI native provenance: MathSys_Invoke25 - 0x004A722A - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A722A-MathSys_Invoke25.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke25.h"

char* MathSys_Invoke25(char* arg1)

{
    char* result_val = arg1;
    char 544280_1 = g_544280;
    char context_val = *result_val;

    if (context_val)
    {
        while (context_val != 544280_1)
        {
            context_val = result_val[1];
            result_val = &result_val[1];

            if (!context_val)
                break;
        }
    }

    char* result = &result_val[1];

    if (*result_val)
    {
        while (true)
        {
            context_val = *result;

            if (!context_val)
                break;

            if (context_val == 0x65)
                break;

            if (context_val == 0x45)
                break;

            result = &result[1];
        }

        char* result_1 = result;

        do
            result -= 1;
         while (*result == 0x30);

        if (*result == 544280_1)
            result -= 1;

        do
        {
            544280_1 = *result_1;
            result = &result[1];
            result_1 = &result_1[1];
            *result = 544280_1;
        } while (544280_1);
    }

    return result;
}
