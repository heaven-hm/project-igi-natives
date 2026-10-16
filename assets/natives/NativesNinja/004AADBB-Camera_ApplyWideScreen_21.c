#include "004AADBB-Camera_ApplyWideScreen_21.h"
/* 0x004aadbb Camera_ApplyWideScreen_21 full linked: callers=1 callees=4 */
int32_t* sub_4aadbb(int32_t* a1, int32_t* a2)

{
    int32_t* result = a1[4];
    int32_t* esi_1 = &a2[-1];
    uint32_t edi_2 = (a2 - a1[3]) >> 0xf;
    int32_t* ecx_5 = *esi_1 - 1;
    int32_t* var_8 = ecx_5;

    if (!(ecx_5 & 1))
    {
        int32_t edx_1 = *(ecx_5 + esi_1);
        int32_t* ebx_1 = ecx_5 + esi_1;
        int32_t edx_2 = esi_1[-1];
        a2 = ebx_1;

        if (!(edx_1 & 1))
        {
            int32_t edx_5 = (edx_1 >> 4) - 1;

            if (edx_5 > 0x3f)
                edx_5 = 0x3f;

            int32_t* ecx_13;

            if (ebx_1[1] != ebx_1[2])
                ecx_13 = var_8;
            else
            {
                if (edx_5 >= 0x20)
                {
                    uint32_t ebx_5 = ~(0x80000000 >> ((edx_5 - 0x20) & 0x1f));
                    result[edi_2 + 0x31] &= ebx_5;
                    char temp0_1 = *(edx_5 + result + 4);
                    *(edx_5 + result + 4) -= 1;

                    if (temp0_1 == 1)
                        a1[1] &= ebx_5;
                }
                else
                {
                    uint32_t ebx_3 = ~(0x80000000 >> (edx_5 & 0x1f));
                    result[edi_2 + 0x11] &= ebx_3;
                    char temp1_1 = *(edx_5 + result + 4);
                    *(edx_5 + result + 4) -= 1;

                    if (temp1_1 == 1)
                        *a1 &= ebx_3;
                }

                ecx_13 = var_8;
                ebx_1 = a2;
            }

            ecx_5 = ecx_13 + edx_1;
            *(ebx_1[2] + 4) = ebx_1[1];
            var_8 = ecx_5;
            *(a2[1] + 8) = a2[2];
        }

        int32_t edx_11 = (ecx_5 >> 4) - 1;

        if (edx_11 > 0x3f)
            edx_11 = 0x3f;

        int32_t ebx_9 = edx_2 & 1;
        int32_t* ebx_12;

        if (ebx_9)
            ebx_12 = a1;
        else
        {
            a2 = esi_1 - edx_2;
            ebx_12 = (edx_2 >> 4) - 1;

            if (ebx_12 > 0x3f)
                ebx_12 = 0x3f;

            int32_t* ecx_14 = ecx_5 + edx_2;
            var_8 = ecx_14;
            edx_11 = (ecx_14 >> 4) - 1;

            if (edx_11 > 0x3f)
                edx_11 = 0x3f;

            if (ebx_12 != edx_11)
            {
                if (a2[1] == a2[2])
                {
                    if (ebx_12 >= 0x20)
                    {
                        uint32_t esi_7 = ~(0x80000000 >> ((ebx_12 - 0x20) & 0x1f));
                        result[edi_2 + 0x31] &= esi_7;
                        char temp3_1 = *(ebx_12 + result + 4);
                        *(ebx_12 + result + 4) -= 1;

                        if (temp3_1 == 1)
                            a1[1] &= esi_7;
                    }
                    else
                    {
                        uint32_t esi_5 = ~(0x80000000 >> (ebx_12 & 0x1f));
                        result[edi_2 + 0x11] &= esi_5;
                        char temp4_1 = *(ebx_12 + result + 4);
                        *(ebx_12 + result + 4) -= 1;

                        if (temp4_1 == 1)
                            *a1 &= esi_5;
                    }
                }

                *(a2[2] + 4) = a2[1];
                *(a2[1] + 8) = a2[2];
            }

            esi_1 = a2;
        }

        if (ebx_9 || ebx_12 != edx_11)
        {
            void* ecx_25 = &result[edi_2 * 0x81 + 0x51 + edx_11 * 2];
            esi_1[1] = result[edi_2 * 0x81 + 0x51 + edx_11 * 2 + 1];
            esi_1[2] = ecx_25;
            *(ecx_25 + 4) = esi_1;
            *(esi_1[1] + 8) = esi_1;

            if (esi_1[1] == esi_1[2])
            {
                char ecx_28 = *(edx_11 + result + 4);
                *(&a2 + 3) = ecx_28;
                *(edx_11 + result + 4) = ecx_28 + 1;

                if (edx_11 >= 0x20)
                {
                    if (!*(&a2 + 3))
                        a1[1] |= 0x80000000 >> ((edx_11 - 0x20) & 0x1f);

                    result[edi_2 + 0x31] |= 0x80000000 >> ((edx_11 - 0x20) & 0x1f);
                }
                else
                {
                    if (!*(&a2 + 3))
                        *a1 |= 0x80000000 >> (edx_11 & 0x1f);

                    result[edi_2 + 0x11] |= 0x80000000 >> (edx_11 & 0x1f);
                }
            }
        }

        *esi_1 = var_8;
        *(var_8 + esi_1 - 4) = var_8;
        result = &result[edi_2 * 0x81 + 0x51];
        int32_t temp2_1 = *result;
        *result -= 1;

        if (temp2_1 == 1)
        {
            int32_t eax_3 = g_c321f0;

            if (eax_3)
            {
                VirtualFree((g_c321e8 << 0xf) + *(eax_3 + 0xc), 0x8000, MEM_DECOMMIT);
                void* eax_4 = g_c321f0;
                *(eax_4 + 8) |= 0x80000000 >> (g_c321e8 & 0x1f);
                *(*(g_c321f0 + 0x10) + (g_c321e8 << 2) + 0xc4) = 0;
                void* eax_8 = *(g_c321f0 + 0x10);
                *(eax_8 + 0x43) -= 1;
                void* eax_9 = g_c321f0;

                if (!*(*(eax_9 + 0x10) + 0x43))
                {
                    *(eax_9 + 4) &= 0xfffffffe;
                    eax_9 = g_c321f0;
                }

                if (*(eax_9 + 8) == 0xffffffff)
                {
                    VirtualFree(*(eax_9 + 0xc), 0, MEM_RELEASE);
                    HeapFree(g_c32428, HEAP_NONE, *(g_c321f0 + 0x10));
                    char* eax_14 = g_c321f0;
                    sub_4acd70(eax_14, &eax_14[0x14],
                        g_c321f4 * 0x14 - eax_14 + g_c321f8 - 0x14);
                    g_c321f4 -= 1;

                    if (a1 > g_c321f0)
                        a1 -= 0x14;

                    g_c321ec = g_c321f8;
                }
            }

            result = a1;
            g_c321e8 = edi_2;
            g_c321f0 = result;
        }
    }

    return result;
}
