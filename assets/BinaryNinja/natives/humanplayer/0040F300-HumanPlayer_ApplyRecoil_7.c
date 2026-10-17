// Original IGI.EXE function: HumanPlayer_ApplyRecoil_7 (VA 0x0040F300; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_7.h"
int32_t HumanPlayer_ApplyRecoil_7(void* context, void* param_2)

{
    if (*(param_2 + 0xd4c) != 0xffffffff)
    {
        void* temp_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 4;
        int32_t entity_2 = *(temp_1 + 0x10);
        *(context + 0x14) = entity_2;
        return entity_2(context, param_2);
    }

    char result = AI_CheckSector_22(*(param_2 + 0x4ec));

    if (!result)
        return result;

    *(param_2 + 0x4d0) = 1;
    int32_t temp_2 = *(context + 0x10);
    *(context + 0x10) = 1;
    void* entity_3 = *(context + 4);
    *(context + 0xc) = temp_2;
    int32_t entity_4 = *(entity_3 + 4);
    *(context + 0x14) = entity_4;
    return entity_4(context, param_2);
}
