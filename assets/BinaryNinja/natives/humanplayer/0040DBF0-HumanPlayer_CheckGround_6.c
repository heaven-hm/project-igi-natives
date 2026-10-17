// Original IGI.EXE function: HumanPlayer_CheckGround_6 (VA 0x0040DBF0; static CFG gate FAIL, CFG score 0.833).
#include "HumanPlayer_CheckGround_6.h"
void HumanPlayer_CheckGround_6(void* a1, void* a2)

{
    *(a2 + 0x664) = *(a2 + 0x664) * 0.99000001f;
    *(a2 + 0x668) = *(a2 + 0x668) * 0.99000001f;
    *(a2 + 0x66c) = (*(a2 + 0x66c) - 44.6008873f) * 0.99000001f;

    if (!(*(a1 + 8) & 4))
        return;

    void* valA1 = *(a2 + 0xdb4);
    *(a2 + 0xd7a) = 1;
    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (valA1)
    {
        SoundSys_SetFrequency_7(valA1);
        *(a2 + 0xdb4) = 0;
    }

    int32_t* objC1 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA3 = *objC1;
    *(a1 + 0x14) = valA3;
    valA3(a1, a2);
}
