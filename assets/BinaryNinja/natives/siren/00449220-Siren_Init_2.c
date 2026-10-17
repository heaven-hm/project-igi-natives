// Original IGI.EXE function: Siren_Init_2 (VA 0x00449220; static CFG gate PASS, CFG score 1.000).
#include "Siren_Init_2.h"

int32_t Siren_Init_2(long double pThis , long double param , int32_t* flags )

{
    int32_t dest_ptr = flags[2];
    char* base_ptr = *flags;
    Sys_ResolveSymbol_23(flags[1], dest_ptr, base_ptr, 0x20);
    Profile_ValueSet(flags[1], dest_ptr + 1);
    *(base_ptr + 0x20) = pThis;
    int32_t result = Profile_ValueSet(flags[1], dest_ptr + 2);
    *(base_ptr + 0x24) = param;
    return result;
}
