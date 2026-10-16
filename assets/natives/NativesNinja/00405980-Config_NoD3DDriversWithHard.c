#include "00405980-Config_NoD3DDriversWithHard.h"
/* 0x00405980 Config_NoD3DDriversWithHard full linked: callers=2 callees=5 */
int32_t Config_NoD3DDriversWithHard()

{
    int32_t result = g_bc2380;
    int32_t* ebx;
    int32_t* var_18 = ebx;
    int32_t result_1 = 0;

    if (result > 0)
    {
        int32_t* edx_1 = &g_bc2394;
        int32_t* var_c_1 = &g_bc2394;

        while (true)
        {
            int32_t ebp_1 = g_567c90;

            if (!ebp_1)
            {
                Error_Show("No D3D drivers with hardware acceleration found.");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t var_14_1 = 0;
                int32_t ecx_10;

                if (ebp_1 <= 0)
                {
                label_405a07:
                    int32_t edi_2 = 0x567d18;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond:2_1 = 0 != *edi_2;
                        edi_2 += 1;
                        i -= 1;

                        if (!cond:2_1)
                            break;
                    }

                    int32_t ecx_2 = ~i;
                    int32_t esi_3;
                    int32_t edi_5;
                    edi_5 = memcpy(edx_1 + 0x113, edi_2 - ecx_2, ecx_2 & 0xfffffffc);
                    memcpy(edi_5, esi_3, ecx_2 & 3);
                    void* edi_6 = &g_567c98;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond:3_1 = 0 != *edi_6;
                        edi_6 += 1;
                        i_1 -= 1;

                        if (!cond:3_1)
                            break;
                    }

                    int32_t ecx_6 = ~i_1;
                    int32_t esi_5;
                    int32_t edi_9;
                    edi_9 = memcpy(edx_1 + 0x13, edi_6 - ecx_6, ecx_6 & 0xfffffffc);
                    memcpy(edi_9, esi_5, ecx_6 & 3);
                    ecx_10 = 0;
                }
                else
                {
                    char* edi_1 = &g_567c98;

                    while (true)
                    {
                        char* esi_1 = edi_1;
                        char* eax = edx_1 + 0x13;
                        int32_t eax_2;

                        while (true)
                        {
                            char ebx_1 = *eax;
                            char temp1_1 = *esi_1;
                            bool c_1 = ebx_1 < temp1_1;

                            if (ebx_1 == temp1_1)
                            {
                                if (!ebx_1)
                                {
                                    eax_2 = 0;
                                    break;
                                }

                                ebx_1 = eax[1];
                                char temp4_1 = esi_1[1];
                                c_1 = ebx_1 < temp4_1;

                                if (ebx_1 == temp4_1)
                                {
                                    eax = &eax[2];
                                    esi_1 = &esi_1[2];

                                    if (ebx_1)
                                        continue;

                                    eax_2 = 0;
                                    break;
                                }
                            }

                            eax_2 = eax - eax + 1;
                            break;
                        }

                        if (!eax_2)
                        {
                            ecx_10 = var_14_1;
                            break;
                        }

                        edi_1 = &edi_1[0x404];
                        bool cond:5_1 = var_14_1 + 1 < ebp_1;
                        var_14_1 += 1;

                        if (!cond:5_1)
                            goto label_405a07;
                    }
                }

                ebx = nullptr;
                int32_t eax_12 = ecx_10 * 0x404;
                int32_t edi_10 = 0x7fffffff;
                int32_t* esi_6 = eax_12 + 0x567d98;
                int32_t eax_13 = *(eax_12 + &g_568098);

                if (eax_13 > 0)
                {
                    int32_t var_14_2 = eax_13;
                    bool cond:6_1;

                    do
                    {
                        int32_t eax_16;
                        int32_t edx_2;
                        edx_2 = HIGHD(esi_6[2] - edx_1[2]);
                        eax_16 = LOWD(esi_6[2] - edx_1[2]);
                        int32_t eax_19;
                        int32_t edx_4;
                        edx_4 = HIGHD(esi_6[1] - edx_1[1]);
                        eax_19 = LOWD(esi_6[1] - edx_1[1]);
                        int32_t eax_24;
                        int32_t edx_5;
                        edx_5 = HIGHD(*esi_6 - *edx_1);
                        eax_24 = LOWD(*esi_6 - *edx_1);
                        int32_t ecx_17 = (((eax_16 ^ edx_2) - edx_2) << 0x18) + (eax_19 ^ edx_4)
                            - edx_4 + (eax_24 ^ edx_5) - edx_5;

                        if (ecx_17 < edi_10)
                        {
                            ebx = esi_6;
                            edi_10 = ecx_17;
                        }

                        esi_6 = &esi_6[3];
                        cond:6_1 = var_14_2 != 1;
                        var_14_2 -= 1;
                    } while (cond:6_1);
                    edx_1 = var_c_1;
                }

                int32_t eax_29 = ebx[1];
                *edx_1 = *ebx;
                int32_t ecx_19 = ebx[2];
                edx_1[1] = eax_29;
                edx_1[2] = ecx_19;
                result = result_1 + 1;
                edx_1 = &edx_1[0x159];
                result_1 = result;
                var_c_1 = edx_1;

                if (result >= g_bc2380)
                    break;
            }
        }
    }

    return result;
}
