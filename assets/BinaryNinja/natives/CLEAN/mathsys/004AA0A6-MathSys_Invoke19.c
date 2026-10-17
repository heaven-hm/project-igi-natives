// IGI native provenance: MathSys_Invoke19 - 0x004AA0A6 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA0A6-MathSys_Invoke19.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke19.h"

void* __convention("regparm") MathSys_Invoke19(int32_t arg1, char* arg2)

{
    char* data_val = arg2;

    while (data_val & 3)
    {
        char ecx_1 = *data_val;
        data_val = &data_val[1];

        if (ecx_1 == arg1)
            return &data_val[0xffffffff];

        if (!ecx_1)
            return 0;
    }

    int32_t ebx_1 = arg1 | arg1 << 8;
    int32_t ebx_3 = ebx_1 << 0x10 | ebx_1;

    while (true)
    {
        int32_t ecx_2 = *data_val;
        int32_t ecx_3 = ecx_2 ^ ebx_3;
        data_val = &data_val[4];

        if ((ecx_3 ^ 0xffffffff ^ (0x7efefeff + ecx_3)) & 0x81010100)
        {
            int32_t eax_8 = *(data_val - 4);

            if (eax_8 == ebx_3)
                return &data_val[0xfffffffc];

            if (!eax_8)
                break;

            if (*(&eax_8 + 1) == ebx_3)
                return &data_val[0xfffffffd];

            if (!*(&eax_8 + 1))
                break;

            uint16_t eax_9 = eax_8 >> 0x10;

            if (eax_9 == ebx_3)
                return &data_val[0xfffffffe];

            if (!eax_9)
                break;

            if (*(&eax_9 + 1) == ebx_3)
                return &data_val[0xffffffff];

            if (!*(&eax_9 + 1))
                break;
        }
        else
        {
            int32_t eax_5 = (ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100;

            if (eax_5)
            {
                if (eax_5 & 0x1010100)
                    break;

                if (!((0x7efefeff + ecx_2) & 0x80000000))
                    break;
            }
        }
    }

    return 0;
}
