#include "PlaceExplosiveTBA_Init_2.h"

int32_t* PlaceExplosiveTBA_Init_2(long double pThis @ st0, int32_t* param @ 0x8)

{
    int32_t esi = param[2];
    char* ebx = *param;
    float edi = param[1];
    *ebx = Script_GetArg(edi, esi);
    ebx[1] = Script_GetArg(edi, esi + 1);
    Sys_ResolveSymbol_23(edi, esi + 2, &ebx[2], 0x18);
    Sys_ResolveSymbol_23(edi, esi + 3, &ebx[0x1a], 0x18);
    Profile_ValueSet(edi, esi + 4);
    *(ebx + 0x54) = pThis * 4096.0;
    Sys_ResolveSymbol_23(edi, esi + 5, &ebx[0x32], 0x20);
    char* edi_1 = &ebx[2];
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    if (~i == 1)
        *(ebx + 0x58) = 0;
    else
        *(ebx + 0x58) = Level_LoadLevel_5(&ebx[2]);

    int32_t i_1 = 0xffffffff;
    char* edi_2 = &ebx[0x1a];

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_2;
        edi_2 = &edi_2[1];
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    if (~i_1 == 1)
    {
        *(ebx + 0x5c) = 0;
        param[3] = esi + 6 - param[2];
        return param;
    }

    *(ebx + 0x5c) = Level_LoadLevel_5(&ebx[0x1a]);
    param[3] = esi + 6 - param[2];
    return param;
}
