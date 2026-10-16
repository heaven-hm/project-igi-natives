#include "004BA4C0-Sys_TooManyArgumentsToFu.h"
/* 0x004ba4c0 Sys_TooManyArgumentsToFu full linked: callers=1 callees=53 */
int32_t* sub_4ba4c0(int32_t* a1, void* a2)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    char** ebp = Mem_Alloc(g_a969c0 << 2, 4);
    char** var_4 = ebp;
    int32_t eax_2;
    int32_t ecx_2;

    if (a2)
    {
        eax_2 = *(a2 + 0xc);
        ecx_2 = 0;
        ecx_2 = eax_2 == 0xffffffff;
    }

    if (a2 && !ecx_2)
    {
        int32_t i_3 = 0;

        if (eax_2 > 0)
        {
            while (true)
            {
                if (!sub_4bfc70(a1, &a1[2]))
                {
                    int32_t var_18_17 = sub_4c0240(a1);
                    int32_t var_1c_15 = sub_4c0230(a1);
                    sub_4b7e10("Parse error (missing " ?) in line %d: '%s'");
                }
                else if (sub_4b9cd0(a1, ebp, 0, 1))
                {
                    if (a1[6] == 0x18 || i_3 >= *(a2 + 0xc) - 1)
                    {
                        i_3 += 1;
                        ebp = &ebp[1];

                        if (i_3 < *(a2 + 0xc))
                            continue;

                        ebp = var_4;
                        break;
                    }
                    else
                    {
                        int32_t var_18_15 = sub_4c0240(a1);
                        int32_t var_1c_13 = sub_4c0230(a1);
                    }

                    sub_4b7e10("Too few arguments to functions in line %d: '%s'");
                }

                if (i_3 > 0)
                {
                    char** esi_5 = var_4;
                    int32_t i;

                    do
                    {
                        sub_4b9be0(*esi_5);
                        esi_5 = &esi_5[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }

                sub_4b0d10(var_4);
                return 0;
            }
        }

        int32_t eax_24 = *(a2 + 0xc);

        if (eax_24)
        {
            int32_t ecx_14 = a1[6];

            if (ecx_14 == 0x18)
            {
                int32_t var_18_13 = sub_4c0240(a1);
                int32_t var_1c_11 = sub_4c0230(a1);
                sub_4b7e10("Too many arguments to function in line %d: '%s'");
                sub_4b0d10(ebp);
                return 0;
            }

            if (ecx_14 != 0x16)
            {
                int32_t var_18_21 = sub_4c0240(a1);
                int32_t var_1c_17 = sub_4c0230(a1);
                sub_4b7e10("Syntax error in line %d: '%s'");
                sub_4b0d10(ebp);
                return 0;
            }

            void* eax_37 = Mem_Alloc((eax_24 << 2) + 4, 4);
            void* ecx_19 = (*(a2 + 0xc) << 2) + 4;
            __builtin_memset(__builtin_memset(eax_37, 0, ecx_19 & 0xfffffffc), 0, ecx_19 & 3);
            int32_t ecx_24 = *(a2 + 0xc) << 2;
            int32_t esi_7;
            int32_t edi_8;
            edi_8 = memcpy(eax_37, var_4, ecx_24 & 0xfffffffc);
            memcpy(edi_8, esi_7, ecx_24 & 3);
            sub_4b0d10(var_4);
            int32_t* eax_39 = Mem_Alloc(0xc, 4);
            eax_39[2] = eax_37;
            eax_39[1] = 0;
            *eax_39 = *(a2 + 0xc);
            return eax_39;
        }

        if (sub_4bfc70(a1, &a1[2]))
        {
            if (a1[6] != 0x16)
            {
                int32_t var_18_24 = sub_4c0240(a1);
                int32_t var_1c_21 = sub_4c0230(a1);
                sub_4b7e10("Too many arguments to function in line %d: '%s'");
                sub_4b0d10(ebp);
                return 0;
            }

            sub_4b0d10(ebp);
            int32_t* eax_44 = Mem_Alloc(0xc, 4);
            eax_44[2] = 0;
            eax_44[1] = 0;
            *eax_44 = 0;
            return eax_44;
        }
    }
    else
    {
        int32_t i_2 = 0;

        if (g_a969c0 <= 0)
        {
        label_4ba564:
            int32_t var_18_3 = sub_4c0240(a1);
            int32_t var_1c_3 = sub_4c0230(a1);
            sub_4b7e10("Too many arguments to function in line %d: '%s'");
            sub_4b0d10(ebp);
            return 0;
        }

        char** edi_1 = ebp;

        while (true)
        {
            *edi_1 = nullptr;

            if (!sub_4bfc70(a1, &a1[2]))
            {
                int32_t var_18_5 = sub_4c0240(a1);
                int32_t var_1c_5 = sub_4c0230(a1);
                sub_4b7e10("Parse error (missing " ?) in line %d: '%s'");

                if (i_2 > 0)
                {
                    char** esi_1 = ebp;
                    int32_t i_1;

                    do
                    {
                        sub_4b9be0(*esi_1);
                        esi_1 = &esi_1[1];
                        i_1 = i_2;
                        i_2 -= 1;
                    } while (i_1 != 1);
                }

                break;
            }

            if (a1[6] != 0x16)
            {
                if (!sub_4b9cd0(a1, edi_1, 0, 1) || a1[6] == 0x18)
                {
                    i_2 += 1;
                    edi_1 = &edi_1[1];

                    if (i_2 >= g_a969c0)
                        goto label_4ba564;

                    continue;
                }
                else
                    i_2 += 1;
            }

            if (i_2 >= g_a969c0)
                goto label_4ba564;

            if (a1[6] != 0x16)
            {
                int32_t var_18_9 = sub_4c0240(a1);
                int32_t var_1c_7 = sub_4c0230(a1);
                sub_4b7e10("Syntax error in line %d: '%s'");
                sub_4b0d10(ebp);
                return 0;
            }

            void* eax_17 = Mem_Alloc((i_2 << 2) + 4, 4);
            __builtin_memset(__builtin_memset(eax_17, 0, ((i_2 << 2) + 4) & 0xfffffffc), 0,
                ((i_2 << 2) + 4) & 3);

            if (i_2)
                memcpy(eax_17, var_4, i_2 << 2);

            sub_4b0d10(var_4);
            int32_t* eax_19 = Mem_Alloc(0xc, 4);
            eax_19[2] = eax_17;
            *eax_19 = i_2;
            eax_19[1] = 0;
            return eax_19;
        }
    }

    sub_4b0d10(ebp);
    return 0;
}
