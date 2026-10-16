#include "00490C40-Display_SyncVSync_2.h"
/* 0x00490c40 Display_SyncVSync_2 full linked: callers=1 callees=5 */
bool sub_490c40(void* a1, int32_t a2, int32_t a3)

{
    int32_t var_430 = 0x400;
    void var_400;
    sub_4b1f30(&var_400, a2);
    char* edi = ".qsc";
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    void* edi_2 = &var_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_2;
        edi_2 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t esi_1;
    int32_t edi_4;
    edi_4 = memcpy(edi_2 - 1, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_4, esi_1, ecx & 3);
    *(a1 + 0x168) = 1;
    sub_497570(0x5c8fb4, 1);
    void* eax_1 = *(a1 + 0x154);
    int32_t var_418 = 0;
    int32_t var_414 = 0;
    float var_410 = *(eax_1 + 4);
    int32_t eax_2 = *(eax_1 + 8);

    if (eax_2 < 0)
        eax_2 = -(eax_2);

    float var_40c = eax_2;
    sub_497680(0x5c8fb4, &var_418);
    return a3(a1, &var_400);
}
