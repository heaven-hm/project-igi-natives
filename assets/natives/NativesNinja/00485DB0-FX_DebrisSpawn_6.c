#include "00485DB0-FX_DebrisSpawn_6.h"
/* 0x00485db0 FX_DebrisSpawn_6 full linked: callers=2 callees=9 */
❓  char* __stdcall sub_485db0(int32_t a1 @ 0x281c, int32_t a2, float a3)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x2818);
    void* eax = sub_485fb0(a1, a2);
    char* ebp = nullptr;
    void* arg_c = 3;
    int32_t arg_4 = 0;
    void* esi_1 = a1 + a2 * 0x102c + 0x20;
    void* arg_10 = esi_1;
    char* eax_6 = *(esi_1 + 0xc);
    char* ebx = esi_1 + 0x2c;
    char* edi_1 = ebx;
    *eax_6 = 0;
    *(&__return_addr + 3) = *eax_6;
    int32_t arg_8 = esi_1 + 0x10;
    bool cond:0_1;

    do
    {
        sub_4b6e90(*arg_8, &g_567c74);
        cond:0_1 = arg_c != 1;
        arg_8 += 4;
        arg_c -= 1;
    } while (cond:0_1);
    char eax_11 = *ebx;
    *(&__return_addr + 2) = eax_11;
    int32_t eax_17;

    if (!eax_11)
    {
    label_485f0e:
        eax_17 = arg_4;
    }
    else
    {
        void arg_18;
        arg_c = &arg_18;

        while (true)
        {
            eax_17 = arg_4;

            if (eax_17 >= 9)
                break;

            *ebx = 0;
            long double x87_r7_1 = sub_4b7050(eax, edi_1);
            long double temp1_1 = a3;
            x87_r7_1 - temp1_1;
            void* eax_14;

            eax_14 = !(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) || *(&__return_addr + 2) == 0xa ? 1
                : nullptr;

            *ebx = *(&__return_addr + 2);

            if (eax_14)
            {
                if (!ebp)
                    ebp = &ebx[0xffffffff];

                char edx_4 = *ebp;
                int32_t i = 0xffffffff;
                *ebp = 0;

                while (i)
                {
                    bool cond:4_1 = 0 != *edi_1;
                    edi_1 = &edi_1[1];
                    i -= 1;

                    if (!cond:4_1)
                        break;
                }

                *(&__return_addr + 2) = edx_4;
                int32_t ecx_6 = ~i;
                int32_t esi_3;
                int32_t edi_4;
                edi_4 = memcpy(arg_c, edi_1 - ecx_6, ecx_6 & 0xfffffffc);
                memcpy(edi_4, esi_3, ecx_6 & 3);
                esi_1 = arg_10;
                *ebp = *(&__return_addr + 2);
                edi_1 = &ebp[1];
                arg_4 += 1;
                arg_c += 0x400;
            }

            if (*ebx == 0x20)
                ebp = ebx;

            char eax_16 = ebx[1];
            ebx = &ebx[1];
            *(&__return_addr + 2) = eax_16;

            if (!eax_16)
                goto label_485f0e;
        }
    }

    int32_t __saved_edi;

    if (ebx != edi_1)
    {
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:2_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i_1 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_12 = ~i_1;
        int32_t esi_5;
        int32_t edi_7;
        edi_7 = memcpy(&(&__saved_edi)[eax_17 * 0x100 + 0xa], edi_1 - ecx_12,
            ecx_12 & 0xfffffffc);
        eax_17 = arg_4 + 1;
        memcpy(edi_7, esi_5, ecx_12 & 3);
        esi_1 = arg_10;
        arg_4 = eax_17;
    }

    int32_t ecx_16;

    ecx_16 = eax_17 <= 3 ? 0 : eax_17 - 3;

    if (ecx_16 >= eax_17)
    {
        char* eax_24 = *(esi_1 + 0xc);
        *eax_24 = *(&__return_addr + 3);
        return eax_24;
    }

    int32_t* ebx_1 = esi_1 + 0x10;
    char* edi_8 = &(&__saved_edi)[ecx_16 * 0x100 + 0xa];
    int32_t i_3 = eax_17 - ecx_16;
    void* eax_23;
    int32_t i_2;

    do
    {
        eax_23 = sub_4b6e90(*ebx_1, edi_8);
        edi_8 = &edi_8[0x400];
        ebx_1 = &ebx_1[1];
        i_2 = i_3;
        i_3 -= 1;
    } while (i_2 != 1);
    **(esi_1 + 0xc) = *(&__return_addr + 3);
    return eax_23;
}
