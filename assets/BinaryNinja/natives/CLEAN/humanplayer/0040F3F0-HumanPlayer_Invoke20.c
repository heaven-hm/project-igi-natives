// IGI native provenance: HumanPlayer_Invoke20 - 0x0040F3F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F3F0-HumanPlayer_Invoke20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke20.h"

int32_t HumanPlayer_Invoke20(void* arg1, void* arg2)

{
    long double x87_r7 = *(arg2 + 0x1e0);
    long double temp0 = 0f;
    x87_r7 - temp0;
    void* base_val = *(arg2 + 0x4ec);
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40) && !(*(arg1 + 8) & 0x20000))
        return result;

    AI_SelectTarget_20(arg2);
    *(base_val + 0x19c) = 0;
    *(base_val + 0x1a0) = 0;
    *(base_val + 0x1a4) = 0;
    int32_t* ecx_1 = *(arg2 + 0x2f0);
    *(arg2 + 0x2f8) = *(arg2 + 0x2fc);
    *(arg2 + 0x2fc) = 0;
    int32_t eax_1 = *ecx_1;
    *(arg2 + 0x300) = eax_1;
    eax_1(arg2 + 0x2ec, arg2);
    AI_SelectTarget_22(*(arg2 + 0x4ec), 0f, 0, 0x3d6e4bae, 0x3d082b3f);
    void* edx_2 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 1;
    int32_t eax_3 = *(edx_2 + 4);
    *(arg1 + 0x14) = eax_3;
    return eax_3(arg1, arg2);
}
