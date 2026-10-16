#include "004C0780-DynObj_RegisterSymbol_3.h"
/* 0x004c0780 DynObj_RegisterSymbol_3 full linked: callers=1 callees=7 */
int32_t __convention("regparm") sub_4c0780(int32_t a1, int32_t a2, int32_t a3, void* a4, int32_t* a5)

{
    int32_t var_4 = a3;
    int32_t* ebp = a5;
    int32_t edi = 0;
    int32_t* ebx = ebp[2];

    if (*ebx)
    {
        void* edi_1 = &ebx[2];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx = ~i;
        int32_t esi_2;
        int32_t edi_4;
        edi_4 = memcpy(a4 + 8, edi_1 - ecx, ecx & 0xfffffffc);
        memcpy(edi_4, esi_2, ecx & 3);
        *(a4 + 0x2c4) = ebx[0xb1];
        sub_4af960(ebx);
        sub_4b0d10(ebx);
        return 1;
    }

    int32_t i_1;

    do
    {
        int32_t* eax_2 = ebp[1];

        if (**eax_2)
        {
            a5 = nullptr;
            int32_t* j_1 = **ebp;
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    if (sub_4b0270(&var_4, nullptr, *ebp[1], &j_1[0x42], &j_1[0xa42], 0))
                    {
                        int32_t eax_7 = var_4;

                        if (eax_7 >= edi)
                        {
                            edi = eax_7;
                            a5 = j_1;

                            if (j_1[0x1242])
                                break;
                        }
                    }

                    j_1 = j;
                    j = *j;
                } while (j);

                if (a5)
                {
                    int32_t eax_10 = edi;

                    if (edi >= 0x2bc)
                        eax_10 = 0x2bc;

                    sub_4a5500(a4 + 8, *ebp[1], eax_10);
                    int32_t eax_12 = edi;

                    if (edi >= 0x2bc)
                        eax_12 = 0x2bc;

                    *(eax_12 + a4 + 8) = 0;
                    int32_t* eax_13 = ebp[1];
                    *eax_13 += edi;
                    *(a4 + 0x2c4) = a5[0x1243];
                    return 1;
                }
            }

            break;
        }

        i_1 = sub_4bf1e0(eax_2);
    } while (i_1);
    return 0;
}
