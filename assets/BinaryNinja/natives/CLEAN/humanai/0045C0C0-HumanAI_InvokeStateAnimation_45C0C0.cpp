// IGI native provenance: HumanAI_InvokeStateAnimation_45C0C0 - 0x0045C0C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C0C0-HumanAI_InvokeStateAnimation_45C0C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeStateAnimation_45C0C0.h"

int32_t HumanAI_InvokeStateAnimation_45C0C0(void* arg1, void* arg2)

{
    int32_t data_val = *(arg1 + 8);

    if (!(data_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t eax_1 = *(edx_1 + 0x74);
        *(arg1 + 0x14) = eax_1;
        return eax_1(arg1, arg2);
    }

    if (data_val & 0x10000)
    {
        void* edx_3 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1f;
        int32_t eax_4 = *(edx_3 + 0x7c);
        *(arg1 + 0x14) = eax_4;
        return eax_4(arg1, arg2);
    }

    if (data_val & 0x20000)
    {
        void* edx_5 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x22;
        int32_t eax_7 = *(edx_5 + 0x88);
        *(arg1 + 0x14) = eax_7;
        return eax_7(arg1, arg2);
    }

    long double x87_r7 = *(arg2 + 0x1c8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(arg2 + 0x4d1) = 1;

    if (!(data_val & 1) || *(&data_val + 1) & 2)
        return result;

    void* edx_7 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x1a;
    int32_t eax_10 = *(edx_7 + 0x68);
    *(arg1 + 0x14) = eax_10;
    return eax_10(arg1, arg2);
}
