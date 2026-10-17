// IGI native provenance: HumanPlayer_ApplyRecoil_6 - 0x0040E4D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040E4D0-HumanPlayer_ApplyRecoil_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyRecoil_6.h"
int32_t HumanPlayer_ApplyRecoil_6(void* context, void* param_2)

{
    int32_t result = *(context + 8);

    if (result & 0x20000)
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x2f;
        int32_t data_1 = *(entity_1 + 0xbc);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (result & 0x10000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x2e;
        int32_t data_4 = *(entity_2 + 0xb8);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (!(result & 1))
        return result;

    HumanPlayer_LoadParameters_6(param_2);
    int32_t* entity_3 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_7 = *entity_3;
    *(context + 0x14) = data_7;
    return data_7(context, param_2);
}
