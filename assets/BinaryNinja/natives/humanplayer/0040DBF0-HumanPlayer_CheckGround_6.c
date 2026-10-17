// Original IGI.EXE function: HumanPlayer_CheckGround_6 (VA 0x0040DBF0; static CFG gate FAIL, CFG score 0.833).
#include "HumanPlayer_CheckGround_6.h"
void HumanPlayer_CheckGround_6(void* context, void* param_2)

{
    *(param_2 + 0x664) = *(param_2 + 0x664) * 0.99000001f;
    *(param_2 + 0x668) = *(param_2 + 0x668) * 0.99000001f;
    *(param_2 + 0x66c) = (*(param_2 + 0x66c) - 44.6008873f) * 0.99000001f;

    if (!(*(context + 8) & 4))
        return;

    void* data_1 = *(param_2 + 0xdb4);
    *(param_2 + 0xd7a) = 1;
    memset(param_2 + 0x664, 0, 0x18);

    if (data_1)
    {
        SoundSys_SetFrequency_7(data_1);
        *(param_2 + 0xdb4) = 0;
    }

    int32_t* entity_1 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_3 = *entity_1;
    *(context + 0x14) = data_3;
    data_3(context, param_2);
}
