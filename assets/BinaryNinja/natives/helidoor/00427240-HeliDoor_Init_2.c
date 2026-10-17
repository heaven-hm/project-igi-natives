// Original IGI.EXE function: HeliDoor_Init_2 (VA 0x00427240; static CFG gate PASS, CFG score 1.000).
#include "HeliDoor_Init_2.h"

int32_t HeliDoor_Init_2(long double pThis , long double param , int32_t* flags )

{
    float dest_ptr = flags[2];
    float* base_ptr = *flags;
    Profile_ValueSet(flags[1], dest_ptr);
    base_ptr[1] = pThis * 4096.0f;
    int32_t result = Profile_ValueSet(flags[1], dest_ptr + 1);
    *base_ptr = param * 4096.0f;
    return result;
}
