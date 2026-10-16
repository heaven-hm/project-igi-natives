#include "0048E300-FX_FireBallUpdate_20.h"
/* 0x0048e300 FX_FireBallUpdate_20 full linked: callers=2 callees=3 */
❓  int32_t* __stdcall sub_48e300(void* a1 @ 0x1408, int32_t* a2, int32_t a3, int32_t a4, int32_t a5)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x1404);
    int32_t* i = a2;
    int32_t arg_404;
    int32_t* ebp = &arg_404;
    __return_addr = nullptr;

    if (i && a4)
    {
        int32_t edx_1 = *i;
        i = nullptr;
        int32_t ebx_1 = 1;
        char arg_4[0x400];
        __builtin_memset(&arg_4, 0, 0x400);
        arg_404 = edx_1;
        int32_t arg_408 = 0xffffffff;
        arg_4[edx_1] = 1;

        if (edx_1 != 0xffffffff)
        {
            do
            {
                void* eax_1 = sub_4f9720(*(a1 + 0x3b6c), *ebp);
                int32_t eax_2 = a4(a1, eax_1, a5);

                if (eax_2)
                {
                    eax_2 = 1;
                    return eax_2;
                }

                int32_t edi_2 = 0;
                int32_t __saved_edi;
                int32_t* eax_3 = &(&__saved_edi)[ebx_1 + 0x105];
                int32_t* esi_2 = eax_1 + 0x13c;

                while (__return_addr < a3)
                {
                    void* edx_4 = *esi_2;

                    if (edx_4)
                    {
                        int32_t ecx_4 = *(edx_4 + 8);

                        if (*ebp == ecx_4)
                            ecx_4 = *(edx_4 + 0xc);

                        if (!arg_4[ecx_4])
                        {
                            arg_4[ecx_4] = 1;
                            *eax_3 = ecx_4;
                            ebx_1 += 1;
                            eax_3 = &eax_3[1];
                            __return_addr += 1;
                            *eax_3 = 0xffffffff;
                        }
                    }

                    edi_2 += 1;
                    esi_2 = &esi_2[1];

                    if (edi_2 >= 0x40)
                        break;
                }

                i = ebp[1];
                ebp = &ebp[1];
            } while (i != 0xffffffff);
        }
    }

    i = 0;
    return i;
}
