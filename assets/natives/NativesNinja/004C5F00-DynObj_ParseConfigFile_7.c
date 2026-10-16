#include "004C5F00-DynObj_ParseConfigFile_7.h"
/* 0x004c5f00 DynObj_ParseConfigFile_7 full linked: callers=1 callees=28 */
int32_t sub_4c5f00(void* a1, int32_t a2)

{
    int32_t i = 0xffffffff;
    int32_t edi = a2;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(0xb97c20, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    int32_t edi_3 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_3;
        edi_3 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    void var_480;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(&var_480, edi_3 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_4 & 3);
    char* edi_6 = ".tex";
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_6;
        edi_6 = &edi_6[1];
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_8 = ~i_2;
    void* edi_8 = &var_480;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond:3_1 = 0 != *edi_8;
        edi_8 += 1;
        i_3 -= 1;

        if (!cond:3_1)
            break;
    }

    int32_t esi_5;
    int32_t edi_10;
    edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_8, ecx_8 & 0xfffffffc);

    if (sub_4b2670(memcpy(edi_10, esi_5, ecx_8 & 3)) > 1)
        sub_4b2610(0);

    int32_t* eax_3;
    int32_t ecx_14;
    eax_3 = sub_5175a0(&var_480);
    *(a1 + 0xdbc) = eax_3;

    if (sub_4b2670(ecx_14) > 1)
        sub_4b2610(0xffffffff);

    int32_t i_4 = 0;
    void var_400;
    void* ecx_15 = &var_400;

    do
    {
        ecx_15 += 4;
        *(ecx_15 - 4) = i_4 << 0x10;
        i_4 += 1;
    } while (i_4 < 0x100);

    int32_t* eax_5 = Mem_Alloc(0xc, 4);
    *(a1 + 0xdf4) = eax_5;
    sub_4b7cf0(eax_5, &var_400, 1);
    int32_t result = sub_48f250();

    if (result)
    {
        int32_t i_5 = 0xffffffff;
        int32_t edi_11 = a2;

        while (i_5)
        {
            bool cond:4_1 = 0 != *edi_11;
            edi_11 += 1;
            i_5 -= 1;

            if (!cond:4_1)
                break;
        }

        int32_t ecx_16 = ~i_5;
        int32_t esi_7;
        int32_t edi_13;
        edi_13 = memcpy(&var_480, edi_11 - ecx_16, ecx_16 & 0xfffffffc);
        memcpy(edi_13, esi_7, ecx_16 & 3);
        char* edi_14 = ".lmp";
        int32_t i_6 = 0xffffffff;

        while (i_6)
        {
            bool cond:5_1 = 0 != *edi_14;
            edi_14 = &edi_14[1];
            i_6 -= 1;

            if (!cond:5_1)
                break;
        }

        int32_t ecx_20 = ~i_6;
        void* edi_16 = &var_480;
        int32_t i_7 = 0xffffffff;

        while (i_7)
        {
            bool cond:6_1 = 0 != *edi_16;
            edi_16 += 1;
            i_7 -= 1;

            if (!cond:6_1)
                break;
        }

        int32_t esi_9;
        int32_t edi_18;
        edi_18 = memcpy(edi_16 - 1, edi_14 - ecx_20, ecx_20 & 0xfffffffc);
        memcpy(edi_18, esi_9, ecx_20 & 3);
        void* edi_19 = &var_480;
        int32_t i_8 = 0xffffffff;

        while (i_8)
        {
            bool cond:7_1 = 0 != *edi_19;
            edi_19 += 1;
            i_8 -= 1;

            if (!cond:7_1)
                break;
        }

        int32_t ecx_25 = ~i_8;
        int32_t esi_11;
        int32_t edi_22;
        edi_22 = memcpy(a1 + 0xe00, edi_19 - ecx_25, ecx_25 & 0xfffffffc);
        memcpy(edi_22, esi_11, ecx_25 & 3);
        void* ecx_29;
        result = sub_4b5b60(&var_480);

        if (result)
        {
            void* var_49c_1 = &var_480;
            int32_t var_484;
            int32_t* eax_9;
            int32_t ecx_30;
            eax_9 = Resource_Load(&var_480, &var_484, ecx_29, &var_484);
            int32_t* edi_23 = eax_9;
            *(a1 + 0xdf8) = edi_23;

            if (edi_23)
            {
                int32_t ebp_2 = 0;

                if (var_484 > 0)
                {
                    int32_t* ebx_2 = &g_b81b20;

                    do
                    {
                        int32_t esi_12 = *edi_23;

                        if (esi_12)
                        {
                            if (sub_4b2670(ecx_30) > 1)
                                sub_4b2610(1);

                            int32_t eax_13;
                            eax_13 = sub_4b2670(sub_4b23b0(&ebx_2[2], *(a1 + 0xdf4), esi_12,
                                esi_12, esi_12, 1, 0, 0x20000000, &edi_23[1]));

                            if (eax_13 > 1)
                                ecx_30 = sub_4b2610(0xffffffff);

                            *ebx_2 = esi_12;
                            ebx_2[1] = &edi_23[1];
                        }

                        ebx_2 = &ebx_2[0xb];
                        int32_t eax_15 = esi_12 * esi_12;
                        edi_23 = &edi_23[1] + eax_15;
                        ebp_2 = ebp_2 + 4 + eax_15;
                    } while (ebp_2 < var_484);
                }
            }

            return Resource_Unload(&var_480);
        }
    }

    return result;
}
