#include "0040DBF0-HumanPlayer_CheckGround_6.h"
/* 0x0040dbf0 HumanPlayer_CheckGround_6 full linked: callers=0 callees=2 */
void HumanPlayer_CheckGround_6(void* a1, void* a2)

{
    *(a2 + 0x664) = *(a2 + 0x664) * 0.99000001f;
    *(a2 + 0x668) = *(a2 + 0x668) * 0.99000001f;
    *(a2 + 0x66c) = (*(a2 + 0x66c) - 44.6008873f) * 0.99000001f;

    if (!(*(a1 + 8) & 4))
        return;

    void* eax_1 = *(a2 + 0xdb4);
    *(a2 + 0xd7a) = 1;
    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (eax_1)
    {
        sub_4e6c00(eax_1);
        *(a2 + 0xdb4) = 0;
    }

    int32_t* ecx_1 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_3 = *ecx_1;
    *(a1 + 0x14) = eax_3;
    eax_3(a1, a2);
}
