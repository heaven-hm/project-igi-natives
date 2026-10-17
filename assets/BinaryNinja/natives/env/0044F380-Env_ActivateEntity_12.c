// Original IGI.EXE function: Env_ActivateEntity_12 (VA 0x0044F380; static CFG gate PASS, CFG score 1.000).
#include "Env_ActivateEntity_12.h"
void* Env_ActivateEntity_12(void* context)

{
    int32_t i = 0;
    *(context + 0x818) = context + 0x810;
    int32_t* dest_val = context + 0x87c;
    *(context + 0x810) = context + 0x814;
    *(context + 0x814) = 0;
    int32_t* data_1 = context + 0x6f0;

    do
    {
        i += 1;
        *data_1 = &data_1[1];
        data_1[2] = data_1;
        data_1[1] = 0;
        *(context + i + 0x8e3) = 0;
        *dest_val = 0;
        dest_val = &dest_val[1];
        data_1 = &data_1[3];
    } while (i < 0x18);

    int32_t* dest_1 = context + 0xf0;
    int32_t i_2 = 0x20;
    void* result;
    int32_t i_1;

    do
    {
        dest_1[1] = 0;
        *dest_1 = 0;
        result = Camera_SetFieldOfView_33(context + 0x810, dest_1);
        dest_1 = &dest_1[0xc];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    *(context + 0x8e0) = 0;
    return result;
}
