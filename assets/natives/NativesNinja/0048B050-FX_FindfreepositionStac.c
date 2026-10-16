#include "0048B050-FX_FindfreepositionStac.h"
/* 0x0048b050 FX_FindfreepositionStac full linked: callers=5 callees=10 */
❓  void* __stdcall sub_48b050(void** a1 @ 0x1430, int32_t* a2, char a3, void* a4)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x142c);
    int32_t* edi = a1;
    int32_t arg_42c;
    int32_t* ebx = &arg_42c;
    __return_addr = nullptr;
    *edi = 0;
    int32_t* arg_10 = &arg_42c;

    if (*(a2[0xedb] + 0x5c) >= 0x400)
        return Warning_Show("FindFreePosition stack not large enough");

    int32_t* eax_2 = sub_453200(a2);

    if (!eax_2)
        return Warning_Show("No nodes near target");

    void arg_14;
    sub_451380(&arg_14, a2);
    char var_1c = 1;
    g_5c8bb4 = *eax_2;
    g_5c8bac = a2[0xf8b];
    void* eax_5 = sub_48b260(a2, eax_2, a3, var_1c);

    if (eax_5)
    {
        *edi = eax_2;
        return eax_5;
    }

    int32_t esi_1 = *eax_2;
    void* eax_6 = nullptr;
    char arg_2c[0x400];
    __builtin_memset(&arg_2c, 0, 0x400);
    arg_42c = esi_1;
    int32_t arg_4 = 1;
    int32_t arg_430 = 0xffffffff;
    arg_2c[esi_1] = 1;

    if (esi_1 != 0xffffffff)
    {
    label_48b151:
        eax_6 = a4;

        if (__return_addr < eax_6)
        {
            int32_t* eax_9 = sub_4f9720(a2[0xedb], *ebx) + 0x13c;
            int32_t arg_c = 0;
            int32_t __saved_edi;
            int32_t* edi_1 = &(&__saved_edi)[arg_4 + 0x10f];
            int32_t* arg_8 = eax_9;

            while (true)
            {
                if (__return_addr < a4)
                {
                    void* eax_10 = *eax_9;

                    if (eax_10)
                    {
                        int32_t esi_2 = *(eax_10 + 8);

                        if (*ebx == esi_2)
                            esi_2 = *(eax_10 + 0xc);

                        if (!arg_2c[esi_2])
                        {
                            int32_t* eax_12 = sub_4f9720(a2[0xedb], esi_2);
                            eax_6 = sub_48b260(a2, eax_12, a3, 1);

                            if (eax_6)
                            {
                                *a1 = eax_12;
                                break;
                            }

                            ebx = arg_10;
                            *edi_1 = esi_2;
                            edi_1 = &edi_1[1];
                            arg_2c[esi_2] = 1;
                            arg_4 += 1;
                            *edi_1 = 0xffffffff;
                            __return_addr += 1;
                        }
                    }

                    eax_9 = &arg_8[1];
                    bool cond:2_1 = arg_c + 1 < 0x40;
                    arg_c += 1;
                    arg_8 = eax_9;

                    if (cond:2_1)
                        continue;
                }

                int32_t eax_17 = ebx[1];
                ebx = &ebx[1];
                arg_10 = ebx;

                if (eax_17 != 0xffffffff)
                    goto label_48b151;

                return eax_17;
            }
        }
    }

    return eax_6;
}
