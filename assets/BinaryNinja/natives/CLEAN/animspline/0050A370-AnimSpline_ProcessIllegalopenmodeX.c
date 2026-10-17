// IGI native provenance: AnimSpline_ProcessIllegalopenmodeX - 0x0050A370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A370-AnimSpline_ProcessIllegalopenmodeX.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_ProcessIllegalopenmodeX.h"

PSTR AnimSpline_ProcessIllegalopenmodeX(PSTR arg1, int32_t arg2)

{
    int32_t context_val = 0;
    int32_t* result_val = &data_a7b6e8;
    PSTR source_ptr;

    while (true)
    {
        if (!*result_val)
        {
            source_ptr = context_val * 0xac + &data_a7b640;
            break;
        }

        result_val = &result_val[0x2b];
        context_val += 1;

        if (result_val >= 0xa7c1a8)
        {
            source_ptr = arg1;
            break;
        }
    }

    if (!source_ptr)
        return 0;

    char* eax_9;

    if (arg2 == 1)
        eax_9 = &g_536298;
    else if (arg2 == 2)
        eax_9 = &data_54e9bc;
    else if (arg2 == 3)
        eax_9 = &data_54e9c0;
    else
    {
        PSTR var_c = arg1;
        int32_t var_10 = arg2;
        Error_Show("Illegal openmode (%X) for file %s.");

        while (true)
            /* nop */
    }

    int32_t* eax_11 = File_Open(arg1, eax_9);

    if (!eax_11)
        return eax_11;

    *(source_ptr + 0x98) = eax_11;
    *(source_ptr + 0xa4) = arg2;
    *(source_ptr + 0xa8) = 1;
    *(source_ptr + 0x9c) = 0;
    *(source_ptr + 0xa0) = 0;
    return source_ptr;
}
