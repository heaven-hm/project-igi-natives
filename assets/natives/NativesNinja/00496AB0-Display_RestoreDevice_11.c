#include "00496AB0-Display_RestoreDevice_11.h"
/* 0x00496ab0 Display_RestoreDevice_11 full linked: callers=2 callees=7 */
int32_t sub_496ab0(int32_t a1, int32_t a2)

{
    int32_t esi = a1;
    int32_t eax = 0;
    int32_t edi = *(esi + 0x3c);
    void* ecx = *(esi + 0xc);
    eax = edi == 1;
    int32_t var_c = eax;
    a1 = a2;
    int32_t eax_4;
    int32_t edx_2;
    edx_2 = HIGHD(0x10624dd3 * *(ecx + 0x1c) * 0xfa0);
    eax_4 = LOWD(0x10624dd3 * *(ecx + 0x1c) * 0xfa0);
    int32_t edx_3 = edx_2 >> 6;
    int32_t edx_4 = edx_3 + (edx_3 >> 0x1f);
    int32_t eax_9;
    int32_t edx_5;
    edx_5 = HIGHD(*(ecx + 0x18) * *(ecx + 0x16));
    eax_9 = LOWD(*(ecx + 0x18) * *(ecx + 0x16));
    int32_t eax_10 = eax_9 + (edx_5 & 7);
    int32_t ebx_1 = eax_10 >> 3;

    if (edi != 2)
    {
        int32_t* eax_11 = *(esi + 0x10);
        int32_t var_8;
        int32_t var_4;
        int32_t eax_12 = (*(*eax_11 + 0x2c))(eax_11, 0, 0, &var_8, &var_4, 0, 0, 2);

        if (eax_12)
        {
            *(esi + 0x3c) = 0xffffffff;
            return eax_12;
        }

        if (a2)
        {
            bool cond:2_1;

            do
            {
                int32_t ebp_1;

                if (a1 >= 0)
                {
                    ebp_1 = edx_4 - *(esi + 0x28);

                    if (ebp_1 >= a1)
                        ebp_1 = a1;
                }
                else
                    ebp_1 = 0;

                char* edi_3 = *(esi + 0x28) * ebx_1 + var_8;

                if (!var_c)
                {
                    if (ebp_1 >= 0)
                    {
                        void* ecx_8 = *(esi + 0xc);
                        int32_t eax_17 = *(ecx_8 + 0x20) - *(esi + 0x24);

                        if (eax_17 < ebp_1)
                            ebp_1 = eax_17;

                        if (ebp_1)
                        {
                            if (*(ecx_8 + 0x14) != 2)
                                sub_496d80(edi_3, esi, ebp_1, ebx_1);
                            else
                                sub_496ce0(edi_3, esi, ebp_1);
                        }
                    }
                    else
                        ebp_1 = 0;

                    *(esi + 0x24) += ebp_1;
                }
                else
                {
                    int32_t ecx_4 = ebp_1 * ebx_1;
                    __builtin_memset(__builtin_memset(edi_3, 0, ecx_4 & 0xfffffffc), 0, ecx_4 & 3);
                }

                int32_t edx_12 = *(esi + 0x28) + ebp_1;
                *(esi + 0x28) = edx_12;

                if (edx_12 >= edx_4)
                    *(esi + 0x28) = 0;

                if (*(esi + 0x24) >= *(*(esi + 0xc) + 0x20))
                {
                    if (*(esi + 8) & 0x10)
                    {
                        sub_4b1730(*(esi + 0x18), 0x14, 0);
                        sub_4b17c0(*(esi + 0x18));
                        void* ecx_15 = *(esi + 0xc);
                        *(esi + 0x24) = 0;
                        sub_496420(esi + 0x40, *(ecx_15 + 0x18));
                    }
                    else if (!var_c)
                    {
                        var_c = 1;
                        int32_t eax_23;
                        int32_t edx_14;
                        edx_14 = HIGHD(0x10624dd3 * g_limit_b * 0xfa0);
                        eax_23 = LOWD(0x10624dd3 * g_limit_b * 0xfa0);
                        int32_t edx_15 = edx_14 >> 6;
                        int32_t eax_26 = edx_15 + (edx_15 >> 0x1f) + g_c28c5c;
                        int32_t ecx_14 = *(esi + 0x20);
                        *(esi + 0x2c) = eax_26;

                        if (ecx_14 - eax_26 >= 0)
                            *(esi + 0x30) = ecx_14 - eax_26;
                        else
                            *(esi + 0x30) = eax_26 - ecx_14;
                    }
                }

                cond:2_1 = a1 != ebp_1;
                a1 -= ebp_1;
            } while (cond:2_1);
        }

        int32_t* eax_33 = *(esi + 0x10);
        int32_t eax_34 = (*(*eax_33 + 0x4c))(eax_33, var_8, var_4, 0, 0);

        if (eax_34)
        {
            *(esi + 0x3c) = 0xffffffff;
            return eax_34;
        }

        eax_10 = 0;
        eax_10 = var_c;
        *(esi + 0x3c) = eax_10;
    }

    return eax_10;
}
