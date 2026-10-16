#include "0044F380-Env_ActivateEntity_12.h"
/* 0x0044f380 Env_ActivateEntity_12 full linked: callers=1 callees=1 */
void* sub_44f380(void* a1)

{
    int32_t i = 0;
    *(a1 + 0x818) = a1 + 0x810;
    int32_t* edi = a1 + 0x87c;
    *(a1 + 0x810) = a1 + 0x814;
    *(a1 + 0x814) = 0;
    int32_t* eax_1 = a1 + 0x6f0;

    do
    {
        i += 1;
        *eax_1 = &eax_1[1];
        eax_1[2] = eax_1;
        eax_1[1] = 0;
        *(a1 + i + 0x8e3) = 0;
        *edi = 0;
        edi = &edi[1];
        eax_1 = &eax_1[3];
    } while (i < 0x18);

    int32_t* edi_1 = a1 + 0xf0;
    int32_t i_2 = 0x20;
    void* result;
    int32_t i_1;

    do
    {
        edi_1[1] = 0;
        *edi_1 = 0;
        result = sub_4af8f0(a1 + 0x810, edi_1);
        edi_1 = &edi_1[0xc];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    *(a1 + 0x8e0) = 0;
    return result;
}
