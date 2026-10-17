// IGI native provenance: HumanAI_InvokeStateAnimation_458EB0 - 0x00458EB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458EB0-HumanAI_InvokeStateAnimation_458EB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeStateAnimation_458EB0.h"

int32_t HumanAI_InvokeStateAnimation_458EB0(void* arg1, void* arg2)

{
    int32_t base_val = *(arg1 + 8);

    if (!(base_val & 4))
    {
        void* data_val = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t eax_1 = *(data_val + 0x74);
        *(arg1 + 0x14) = eax_1;
        return eax_1(arg1, arg2);
    }

    if (base_val & 0x10000)
    {
        void* edx_2 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1e;
        int32_t eax_4 = *(edx_2 + 0x78);
        *(arg1 + 0x14) = eax_4;
        return eax_4(arg1, arg2);
    }

    if (base_val & 0x20000)
    {
        void* edx_4 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x21;
        int32_t eax_7 = *(edx_4 + 0x84);
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

    if (!(base_val & 1) || *(&base_val + 1) & 2)
        return result;

    *(arg1 + 0xc) = *(arg1 + 0x10);

    if (!(base_val & 0x2000000))
    {
        void* eax_13 = *(arg1 + 4);
        *(arg1 + 0x10) = 0x13;
        int32_t eax_14 = *(eax_13 + 0x4c);
        *(arg1 + 0x14) = eax_14;
        return eax_14(arg1, arg2);
    }

    void* eax_10 = *(arg1 + 4);
    *(arg1 + 0x10) = 0x18;
    int32_t eax_11 = *(eax_10 + 0x60);
    *(arg1 + 0x14) = eax_11;
    return eax_11(arg1, arg2);
}
