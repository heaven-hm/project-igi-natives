// IGI native provenance: Siren_Init_2 - 0x00449220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449220-Siren_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
