#include "0052FBA0-Light_SampleLightmap_12.h"
/* 0x0052fba0 Light_SampleLightmap_12 full linked: callers=1 callees=0 */
int32_t sub_52fba0(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t ebx = 0;

    if (a2 + 1 >= *(a1 + 0x4abc))
    {
        int32_t eax_2 = a4 + ((a3 + (a2 << 2)) << 2);
        *(eax_2 * 0x30 + a1 + 0xc58) = 0;
        return eax_2;
    }

    int32_t edi = a3;
    int32_t ecx_3;

    if (edi <= 0)
        ecx_3 = a4;
    else
    {
        ecx_3 = a4;
        int32_t eax_6 = (ecx_3 + ((edi + (a2 << 2)) << 2)) * 0x30;

        if (*(eax_6 + a1 + 0xba8))
        {
            int32_t i = 0;
            ebx = 0x10;
            double* ecx_6 = a2 * 0x300 + a1 + 0x1188;

            do
            {
                if (ecx_6[4])
                {
                    long double x87_r7_1 = *ecx_6;
                    long double temp0_1 = *(eax_6 + a1 + 0xb88);
                    x87_r7_1 - temp0_1;

                    if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t var_4_1 = 0;
                        long double x87_r7_3 = *(eax_6 + a1 + 0xba0) + *(eax_6 + a1 + 0xb88);
                        long double temp1_1 = *ecx_6;
                        x87_r7_3 - temp1_1;

                        if (!(*(&((x87_r7_3 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t eax_13 = i & 0x80000001;
                            bool cond:0_1 = !eax_13;

                            if (eax_13 < 0)
                                cond:0_1 = ((eax_13 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond:0_1)
                                ebx |= 0x20;
                            else
                                *(&ebx + 1) |= 1;
                        }
                    }
                }

                i += 1;
                ecx_6 = &ecx_6[6];
            } while (i < 4);

            ecx_3 = a4;
            edi = a3;
        }
    }

    if (ecx_3 > 0)
    {
        int32_t eax_20 = (ecx_3 + ((edi + (a2 << 2)) << 2)) * 0x30;

        if (*(eax_20 + a1 + 0xc38))
        {
            ebx |= 4;
            int32_t i_1 = 0;
            double* ecx_9 = a2 * 0x300 + a1 + 0xfd0;

            do
            {
                if (ecx_9[5])
                {
                    long double x87_r7_4 = *ecx_9;
                    long double temp2_1 = *(eax_20 + a1 + 0xc10);
                    x87_r7_4 - temp2_1;

                    if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t var_4_2 = 0;
                        long double x87_r7_6 = *(eax_20 + a1 + 0xc30) + *(eax_20 + a1 + 0xc10);
                        long double temp4_1 = *ecx_9;
                        x87_r7_6 - temp4_1;

                        if (!(*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t eax_27 = i_1 & 0x80000001;
                            bool cond:1_1 = !eax_27;

                            if (eax_27 < 0)
                                cond:1_1 = ((eax_27 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond:1_1)
                                ebx |= 0x80;
                            else
                                *(&ebx + 1) |= 1;
                        }
                    }
                }

                i_1 += 1;
                ecx_9 = &ecx_9[0x18];
            } while (i_1 < 4);

            ecx_3 = a4;
            edi = a3;
        }
    }

    if (edi < 3)
    {
        int32_t eax_34 = (ecx_3 + ((edi + (a2 << 2)) << 2)) * 0x30;

        if (*(eax_34 + a1 + 0xd28))
        {
            ebx |= 8;
            int32_t i_2 = 0;
            double* ecx_12 = a2 * 0x300 + a1 + 0xf48;

            do
            {
                if (ecx_12[4])
                {
                    long double x87_r7_7 = *ecx_12;
                    long double temp3_1 = *(eax_34 + a1 + 0xd08);
                    x87_r7_7 - temp3_1;

                    if (!(*(&((x87_r7_7 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t var_4_3 = 0;
                        long double x87_r7_9 = *(eax_34 + a1 + 0xd20) + *(eax_34 + a1 + 0xd08);
                        long double temp7_1 = *ecx_12;
                        x87_r7_9 - temp7_1;

                        if (!(*(&((x87_r7_9 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t eax_41 = i_2 & 0x80000001;
                            bool cond:2_1 = !eax_41;

                            if (eax_41 < 0)
                                cond:2_1 = ((eax_41 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond:2_1)
                                ebx |= 0x40;
                            else
                                ebx |= 0x80;
                        }
                    }
                }

                i_2 += 1;
                ecx_12 = &ecx_12[6];
            } while (i_2 < 4);

            ecx_3 = a4;
            edi = a3;
        }
    }

    if (ecx_3 < 3)
    {
        int32_t eax_48 = (ecx_3 + ((edi + (a2 << 2)) << 2)) * 0x30;

        if (*(eax_48 + a1 + 0xc98))
        {
            ebx |= 2;
            int32_t i_3 = 0;
            double* ecx_15 = a2 * 0x300 + a1 + 0xf40;

            do
            {
                if (ecx_15[5])
                {
                    long double x87_r7_10 = *ecx_15;
                    long double temp6_1 = *(eax_48 + a1 + 0xc70);
                    x87_r7_10 - temp6_1;

                    if (!(*(&((x87_r7_10 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t var_4_4 = 0;
                        long double x87_r7_12 = *(eax_48 + a1 + 0xc90) + *(eax_48 + a1 + 0xc70);
                        long double temp8_1 = *ecx_15;
                        x87_r7_12 - temp8_1;

                        if (!(*(&((x87_r7_12 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t eax_55 = i_3 & 0x80000001;
                            bool cond:3_1 = !eax_55;

                            if (eax_55 < 0)
                                cond:3_1 = ((eax_55 - 1) | 0xfffffffe) == 0xffffffff;

                            ebx = cond:3_1 ? ebx | 0x40 : ebx | 0x20;
                        }
                    }
                }

                i_3 += 1;
                ecx_15 = &ecx_15[0x18];
            } while (i_3 < 4);

            ecx_3 = a4;
            edi = a3;
        }
    }

    int32_t eax_61 = (ecx_3 + ((edi + (a2 << 2)) << 2)) * 0x30;
    *(eax_61 + a1 + 0xc58) = ebx;
    return eax_61;
}
