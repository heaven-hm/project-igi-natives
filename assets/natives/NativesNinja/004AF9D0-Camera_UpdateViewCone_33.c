#include "004AF9D0-Camera_UpdateViewCone_33.h"
/* 0x004af9d0 Camera_UpdateViewCone_33 full linked: callers=4 callees=6 */
int32_t sub_4af9d0(int32_t* a1, int32_t* a2, char* a3)

{
    void var_a00;

    if (sub_4affb0(&var_a00, a3))
    {
        int32_t esi_1 = 0;
        int32_t var_b28;
        int32_t* var_b44_1 = &var_b28;
        var_b28 = 0;
        int32_t var_b30_1 = 0;
        int32_t var_b20_1 = 0;
        int32_t var_b04_1 = 0;
        int32_t var_b14_1 = 0xffffffff;
        sub_4aff90(a2, var_b44_1);
        void* edi_1 = &var_a00;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ebx_1 = 0;
        int32_t var_b1c_1 = 0;

        if (~i - 1 <= 0)
        {
        label_4afe4a:
            void* eax_38 = &a1[esi_1 * 5];
            *(eax_38 + 8) = 0x100;
            *(eax_38 + 0x10) = esi_1;
            *(eax_38 + 0xc) = esi_1;
            return 1;
        }

        int32_t* ecx_3 = a1;
        void var_800;
        int32_t* var_b24_1 = &var_800;
        int32_t ebp_1 = 1;
        int32_t* edx_1 = ecx_3;
        void var_400;
        int32_t* var_b10_1 = &var_400;

        while (true)
        {
            int32_t edi_2 = *(&var_a00 + ebx_1) - 0x24;

            if (edi_2 > 0x59)
                goto label_4afe04;

            int32_t eax_3 = 0;
            eax_3 = lookup_table_4afea8[edi_2];
            int32_t var_b08;
            int32_t eax_31;

            switch (eax_3)
            {
                case 0:
                {
                    edx_1[2] = 0x4000;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    break;
                }
                case 1:
                {
                    int32_t ecx_4 = var_b14_1;
                    edx_1[2] = 0x8000;
                    *var_b24_1 = ecx_4;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    edx_1[1] = var_b04_1;
                    var_b14_1 = var_b04_1;
                    *var_b10_1 = esi_1;
                    var_b04_1 += 1;
                    var_b30_1 += 1;
                    *edx_1 = ecx_4;
                    var_b10_1 = &var_b10_1[1];
                    var_b24_1 = &var_b24_1[1];
                    break;
                }
                case 2:
                {
                    if (!var_b30_1)
                        return 0;

                    int32_t* eax_13 = var_b10_1 - 4;
                    int32_t* ecx_6 = var_b24_1 - 4;
                    var_b10_1 = eax_13;
                    int32_t eax_14 = *eax_13;
                    var_b24_1 = ecx_6;
                    int32_t ecx_7 = *ecx_6;
                    edx_1[1] = var_b14_1;
                    var_b14_1 = ecx_7;
                    *edx_1 = ecx_7;
                    var_b08 = eax_14;
                    edx_1[2] = 0x10000;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    a1[eax_14 * 5 + 4] = ebp_1;
                    var_b30_1 -= 1;
                    break;
                }
                case 3:
                {
                    if (ebp_1 == 1)
                        return 0;

                    int32_t eax_22 = edx_1[-3];
                    edx_1 -= 0x14;
                    esi_1 -= 1;
                    ebp_1 -= 1;

                    if (eax_22 >= 0x100 && !(eax_22 & 0x11000))
                        return 0;

                    if (!(eax_22 & 0x10000))
                    {
                        edx_1[3] = esi_1;
                        int32_t eax_27 = edx_1[2];
                        *(&eax_27 + 1) |= 2;
                        edx_1[2] = eax_27;
                        edx_1[4] = ebp_1;
                    }
                    else
                    {
                        edx_1[3] = var_b08;
                        ecx_3[var_b08 * 5 + 2] |= 0x20000;
                        int32_t eax_26 = edx_1[2];
                        *(&eax_26 + 1) |= 2;
                        edx_1[2] = eax_26;
                        edx_1[4] = ebp_1;
                    }
                    break;
                }
                case 4:
                {
                    edx_1[2] = 0x1000;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    break;
                }
                case 5:
                {
                    ebx_1 += 1;
                label_4afe04:
                    eax_31 = *(&var_a00 + ebx_1);
                label_4afe0c:
                    edx_1[2] = eax_31;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    break;
                }
                case 6:
                {
                    if (ebp_1 == 1)
                        return 0;

                    int32_t eax_18 = edx_1[-3];
                    edx_1 -= 0x14;
                    esi_1 -= 1;
                    ebp_1 -= 1;

                    if (eax_18 & 0x10000)
                        ecx_3[var_b08 * 5 + 2] |= 0x20000;

                    edx_1[3] = ebp_1;
                    edx_1[4] = ebp_1;
                    edx_1[2] |= 0x40000;
                    break;
                }
                case 7:
                {
                    ebx_1 += 1;
                    char var_b00[0x9];
                    __builtin_memset(&var_b00, 0, 0x100);
                    int32_t var_b18_1 = 0;
                    int32_t var_b2c_1 = ebx_1;

                    if (*(&var_a00 + ebx_1) == 0x7e)
                    {
                        ebx_1 += 1;
                        var_b18_1 = 1;
                        var_b2c_1 = ebx_1;
                    }

                    char i_1 = *(&var_a00 + ebx_1);

                    while (i_1 != 0x5d)
                    {
                        if (ebx_1 >= ~i - 1)
                            return 0;

                        void var_9ff;

                        if (i_1 == 0x5c)
                        {
                            int32_t edi_6 = *(&var_9ff + ebx_1);
                            ebx_1 += 1;

                            if (edi_6 > 0x74)
                                var_b00[edi_6] = 1;
                            else
                            {
                                int32_t ecx_11 = 0;
                                ecx_11 = lookup_table_4aff18[edi_6];

                                switch (ecx_11)
                                {
                                    case 0:
                                    {
                                        return 0;
                                        break;
                                    }
                                    case 1:
                                    {
                                        char var_af6_1 = 1;
                                        break;
                                    }
                                    case 2:
                                    {
                                        char var_af3_1 = 1;
                                        break;
                                    }
                                    case 3:
                                    {
                                        char var_af7_1 = 1;
                                        break;
                                    }
                                    case 4:
                                    {
                                        var_b00[edi_6] = 1;
                                        break;
                                    }
                                }
                            }
                        }
                        else if (i_1 == 0x2f)
                        {
                            int32_t eax_29 = *(&var_9ff + ebx_1);
                            ebx_1 += 1;
                            var_b00[eax_29] = 1;
                        }
                        else if (*(&var_9ff + ebx_1) != 0x2d)
                            var_b00[i_1] = 1;
                        else
                        {
                            char var_9fe[0x1fe];
                            int32_t ecx_12 = var_9fe[ebx_1];
                            ebx_1 += 2;
                            int32_t i_4 = i_1;

                            if (i_4 >= ecx_12)
                                return 0;

                            esi_1 = var_b1c_1;
                            int32_t __saved_edi;
                            __builtin_memset(
                                __builtin_memset(&__saved_edi + i_4 + 0x40, 0x1010101,
                                    (ecx_12 - i_4 + 1) & 0xfffffffc),
                                1, (ecx_12 - i_4 + 1) & 3);
                        }

                        i_1 = *(&var_9ff + ebx_1);
                        ebx_1 += 1;
                        var_b2c_1 = ebx_1;
                    }

                    if (var_b18_1)
                    {
                        for (int32_t i_2 = 0; i_2 < 0x100; i_2 += 1)
                            var_b00[i_2] = !var_b00[i_2];

                        esi_1 = var_b1c_1;
                    }

                    int32_t edi_9 = var_b28;
                    eax_31 = 0;

                    if (edi_9 > 0)
                    {
                        int32_t* edi_10 = a2;
                        int32_t* var_b18_2 = edi_10;

                        do
                        {
                            int32_t i_3 = 0x40;
                            char (* esi_3)[0x9] = &var_b00;
                            bool cond:6_1 = true;

                            while (i_3)
                            {
                                int32_t temp0_1 = *esi_3;
                                int32_t temp1_1 = *edi_10;
                                cond:6_1 = temp0_1 == temp1_1;
                                esi_3 = &(*esi_3)[4];
                                edi_10 = &edi_10[1];
                                i_3 -= 1;

                                if (temp0_1 != temp1_1)
                                    break;
                            }

                            if (cond:6_1)
                                break;

                            eax_31 += 1;
                            edi_10 = &var_b18_2[0x40];
                            var_b18_2 = edi_10;
                        } while (eax_31 < var_b28);

                        if (eax_31 >= 0x20)
                            return 0;

                        ebx_1 = var_b2c_1;
                        esi_1 = var_b1c_1;
                        edi_9 = var_b28;
                    }

                    if (eax_31 == edi_9)
                    {
                        memcpy(&a2[edi_9 * 0x40], &var_b00, 0x100);
                        esi_1 = var_b1c_1;
                        var_b28 += 1;
                    }

                    *(&eax_31 + 1) |= 0x10;
                    goto label_4afe0c;
                }
                case 8:
                {
                    edx_1[2] = 0x2000;
                    edx_1[4] = 0xffffffff;
                    edx_1[3] = ebp_1;
                    break;
                }
                case 9:
                {
                    if (var_b20_1)
                        return 0;

                    if (var_b30_1)
                        return 0;

                    edx_1[2] = 0x400;
                    edx_1[4] = ebp_1;
                    edx_1[3] = ebp_1;
                    var_b20_1 = 1;
                    break;
                }
                case 0xa:
                {
                    if (var_b20_1 != 1)
                        return 0;

                    if (var_b30_1)
                        return 0;

                    edx_1[2] = 0x800;
                    edx_1[4] = ebp_1;
                    edx_1[3] = ebp_1;
                    var_b20_1 = 0;
                    break;
                }
                case 0xb:
                {
                    goto label_4afe04;
                }
            }

            ebx_1 += 1;
            esi_1 += 1;
            ebp_1 += 1;
            edx_1 = &edx_1[5];
            var_b1c_1 = esi_1;

            if (ebx_1 >= ~i - 1)
                break;

            ecx_3 = a1;
        }

        if (!var_b20_1 && !var_b30_1)
            goto label_4afe4a;
    }

    return 0;
}
