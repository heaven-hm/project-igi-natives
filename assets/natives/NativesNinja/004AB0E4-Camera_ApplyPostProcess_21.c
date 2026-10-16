#include "004AB0E4-Camera_ApplyPostProcess_21.h"
/* 0x004ab0e4 Camera_ApplyPostProcess_21 full linked: callers=2 callees=2 */
void* sub_4ab0e4(int32_t* a1)

{
    int32_t* edx = g_c321f8;
    void* edi = &edx[g_c321f4 * 5];
    void* ecx_1 = (a1 + 0x17) & 0xfffffff0;
    uint32_t var_10;
    uint32_t var_c;
    uint32_t esi;

    if ((ecx_1 >> 4) - 1 >= 0x20)
    {
        esi = 0;
        var_10 = 0;
        var_c = 0xffffffff >> ((((ecx_1 >> 4) - 1) - 0x20) & 0x1f);
    }
    else
    {
        esi = 0xffffffff >> (((ecx_1 >> 4) - 1) & 0x1f);
        var_c = 0xffffffff;
        var_10 = esi;
    }

    int32_t* eax_4 = g_c321ec;
    int32_t* ebx = eax_4;
    a1 = ebx;

    if (ebx < edi)
    {
        while (!((ebx[1] & var_c) | (*ebx & esi)))
        {
            ebx = &ebx[5];
            a1 = ebx;

            if (ebx >= edi)
                break;
        }
    }

    if (ebx == edi)
    {
        ebx = edx;
        bool cond:4_1;

        while (true)
        {
            cond:4_1 = ebx != eax_4;
            a1 = ebx;

            if (ebx >= eax_4)
                break;

            if ((ebx[1] & var_c) | (*ebx & esi))
            {
                cond:4_1 = ebx != eax_4;
                break;
            }

            ebx = &ebx[5];
        }

        if (!cond:4_1)
        {
            bool cond:5_1;

            while (true)
            {
                cond:5_1 = ebx != edi;

                if (ebx >= edi)
                    break;

                if (ebx[2])
                {
                    cond:5_1 = ebx != edi;
                    break;
                }

                ebx = &ebx[5];
                a1 = ebx;
            }

            if (!cond:5_1)
            {
                ebx = edx;
                bool cond:7_1;

                while (true)
                {
                    cond:7_1 = ebx != eax_4;
                    a1 = ebx;

                    if (ebx >= eax_4)
                        break;

                    if (ebx[2])
                    {
                        cond:7_1 = ebx != eax_4;
                        break;
                    }

                    ebx = &ebx[5];
                }

                if (!cond:7_1)
                {
                    ebx = sub_4ab3ed();
                    a1 = ebx;

                    if (!ebx)
                        return nullptr;
                }
            }

            *ebx[4] = sub_4ab49e(ebx);

            if (*ebx[4] == 0xffffffff)
                return nullptr;
        }
    }

    g_c321ec = ebx;
    int32_t* eax_8 = ebx[4];
    int32_t edx_1 = *eax_8;
    int32_t var_8_1 = edx_1;

    if (edx_1 == 0xffffffff || !((eax_8[edx_1 + 0x31] & var_c) | (eax_8[edx_1 + 0x11] & esi)))
    {
        var_8_1 = 0;
        void* ecx_15 = &eax_8[0x11];
        esi = var_10;

        if (!((eax_8[0x31] & var_c) | (eax_8[0x11] & var_10)))
        {
            int32_t edx_6;

            do
            {
                var_8_1 += 1;
                edx_6 = *(ecx_15 + 0x84) & var_c;
                ecx_15 += 4;
            } while (!(edx_6 | (esi & *ecx_15)));
        }

        edx_1 = var_8_1;
    }

    int32_t edi_9 = 0;
    int32_t i = eax_8[edx_1 + 0x11] & esi;

    if (!i)
    {
        i = eax_8[edx_1 + 0x31] & var_c;
        edi_9 = 0x20;
    }

    while (i >= 0)
    {
        i <<= 1;
        edi_9 += 1;
    }

    int32_t* edx_8 = eax_8[edx_1 * 0x81 + 0x51 + edi_9 * 2 + 1];
    void* ecx_23 = *edx_8 - ecx_1;
    int32_t esi_5 = (ecx_23 >> 4) - 1;

    if (esi_5 > 0x3f)
        esi_5 = 0x3f;

    if (esi_5 == edi_9)
    {
    label_4ab39b:

        if (ecx_23)
        {
            *edx_8 = ecx_23;
            *(ecx_23 + edx_8 - 4) = ecx_23;
        }
    }
    else
    {
        if (edx_8[1] == edx_8[2])
        {
            if (edi_9 >= 0x20)
            {
                uint32_t ebx_5 = ~(0x80000000 >> ((edi_9 - 0x20) & 0x1f));
                eax_8[var_8_1 + 0x31] &= ebx_5;
                char temp1_1 = *(eax_8 + edi_9 + 4);
                *(eax_8 + edi_9 + 4) -= 1;

                if (temp1_1 != 1)
                    ebx = a1;
                else
                {
                    ebx = a1;
                    ebx[1] &= ebx_5;
                }
            }
            else
            {
                uint32_t ebx_2 = ~(0x80000000 >> (edi_9 & 0x1f));
                eax_8[var_8_1 + 0x11] &= ebx_2;
                char temp2_1 = *(eax_8 + edi_9 + 4);
                *(eax_8 + edi_9 + 4) -= 1;

                if (temp2_1 != 1)
                    ebx = a1;
                else
                {
                    ebx = a1;
                    *ebx &= ebx_2;
                }
            }
        }

        *(edx_8[2] + 4) = edx_8[1];
        *(edx_8[1] + 8) = edx_8[2];

        if (ecx_23)
        {
            void* ecx_35 = &eax_8[edx_1 * 0x81 + 0x51 + esi_5 * 2];
            edx_8[1] = eax_8[edx_1 * 0x81 + 0x51 + esi_5 * 2 + 1];
            edx_8[2] = ecx_35;
            *(ecx_35 + 4) = edx_8;
            *(edx_8[1] + 8) = edx_8;

            if (edx_8[1] == edx_8[2])
            {
                char ecx_38 = *(esi_5 + eax_8 + 4);
                *(&a1 + 3) = ecx_38;

                if (esi_5 >= 0x20)
                {
                    *(esi_5 + eax_8 + 4) = ecx_38 + 1;

                    if (!*(&a1 + 3))
                        ebx[1] |= 0x80000000 >> ((esi_5 - 0x20) & 0x1f);

                    eax_8[var_8_1 + 0x31] |= 0x80000000 >> ((esi_5 - 0x20) & 0x1f);
                }
                else
                {
                    *(esi_5 + eax_8 + 4) = ecx_38 + 1;

                    if (!*(&a1 + 3))
                        *ebx |= 0x80000000 >> (esi_5 & 0x1f);

                    eax_8[var_8_1 + 0x11] |= 0x80000000 >> (esi_5 & 0x1f);
                }
            }

            goto label_4ab39b;
        }
    }

    void** edx_9 = edx_8 + ecx_23;
    *edx_9 = ecx_1 + 1;
    *(edx_9 + ecx_1 - 4) = ecx_1 + 1;
    int32_t ecx_46 = eax_8[edx_1 * 0x81 + 0x51];
    eax_8[edx_1 * 0x81 + 0x51] = ecx_46 + 1;

    if (!ecx_46 && ebx == g_c321f0 && var_8_1 == g_c321e8)
        g_c321f0 = 0;

    *eax_8 = var_8_1;
    return &edx_9[1];
}
