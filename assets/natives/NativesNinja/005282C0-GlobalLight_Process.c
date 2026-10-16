#include "005282C0-GlobalLight_Process.h"
/* 0x005282c0 GlobalLight_Process full linked: callers=0 callees=1 */
int32_t sub_5282c0(void* a1)

{
    void* esi = a1;

    if (*(esi + 0x1a0))
    {
        if (!*(esi + 0xd0))
        {
            int32_t* eax_2 = esi + 0x8c;
            int32_t i_3 = 5;
            int32_t i;

            do
            {
                *eax_2 = 0xffffffff;
                eax_2 = &eax_2[0x11];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
        }
        else
        {
            int32_t i_1 = 0;
            int32_t* ecx_1 = esi + 0x8c;

            do
            {
                int32_t edx_1 = i_1 - 1;
                i_1 += 1;
                *ecx_1 = edx_1;
                ecx_1 = &ecx_1[0x11];
            } while (i_1 < 5);
        }

        *(esi + 0x1a0) = 0;
    }

    if (!g_a84380)
        g_a84380 = esi;

    long double x87_r7 = *(esi + 0x44);
    *(esi + 0x48) = x87_r7;
    g_a83ea0 = x87_r7;
    void* eax_4 = *(esi + 0x14);

    if (eax_4 && *(eax_4 + 0x1c) == g_a8408c)
    {
        void* edi_1 = *(esi + 0x14);
        uint32_t eax_7 = sub_4f1a70();
        int32_t edx_2 = 0;
        edx_2 = *(edi_1 + 0x1c);
        (*(((eax_7 * 0x180 + edx_2) << 2) + &g_a96ae0))(edi_1, esi);
    }

    a1 = 5;
    bool cond:0_1;

    do
    {
        int32_t* eax_9 = esi + 0x4c;
        int32_t i_4 = 5;
        int32_t i_2;

        do
        {
            int32_t ecx_5 = eax_9[0x10];

            if (ecx_5 >= 0 && ecx_5 < 5)
            {
                void* ecx_6 = esi + ecx_5 * 0x44;
                *eax_9 = *(ecx_6 + 0x4c);
                eax_9[1] = *(ecx_6 + 0x50);
                eax_9[2] = *(ecx_6 + 0x54);
                eax_9[3] = *(ecx_6 + 0x58);
                eax_9[4] = *(ecx_6 + 0x5c);
                eax_9[5] = *(ecx_6 + 0x60);
                eax_9[6] = *(ecx_6 + 0x64);
            }

            eax_9 = &eax_9[0x11];
            i_2 = i_4;
            i_4 -= 1;
        } while (i_2 != 1);
        cond:0_1 = a1 != 1;
        a1 -= 1;
    } while (cond:0_1);
    int32_t result = g_a84380;

    if (result == esi)
        g_a84380 = 0;

    return result;
}
