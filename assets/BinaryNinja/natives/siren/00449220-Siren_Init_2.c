// Original IGI.EXE function: Siren_Init_2 (VA 0x00449220; static CFG gate PASS, CFG score 1.000).
#include "Siren_Init_2.h"

int32_t Siren_Init_2(long double pThis @ st0, long double param @ st1, int32_t* flags @ 0x8)

{
    int32_t edi = flags[2];
    char* ebx = *flags;
    Sys_ResolveSymbol_23(flags[1], edi, ebx, 0x20);
    Profile_ValueSet(flags[1], edi + 1);
    *(ebx + 0x20) = pThis;
    int32_t result = Profile_ValueSet(flags[1], edi + 2);
    *(ebx + 0x24) = param;
    return result;
}
