#include "004F1400-Script_Isexists.h"
/* 0x004f1400 Script_Isexists full linked: callers=95 callees=27 */
int32_t sub_4f1400(int32_t* a1, void* a2)

{
    int32_t i = 0;
    char* eax = *a1;
    bool cond:0 = a1[0x13] <= 0;
    char* var_584 = eax;
    char var_400;
    char* ebx = &var_400;
    var_400 = 0;

    if (!cond:0)
    {
        int32_t* esi_1 = &a1[3];

        do
        {
            Qtask_UpdateList(*esi_1);
            *esi_1 = 0;
            i += 1;
            esi_1 = &esi_1[1];
        } while (i < a1[0x13]);

        eax = var_584;
    }

    char* ecx_1 = a1[2];

    if (ecx_1)
    {
        sub_4b9be0(ecx_1);
        eax = var_584;
    }

    a1[0x13] = 0;

    if (eax)
    {
        while (*eax)
        {
            char var_580;

            if (!sub_517260(eax, &var_584, &var_580, 0x7f))
            {
                char ecx_19 = *var_584;
                ebx[1] = 0;
                *ebx = ecx_19;
                eax = var_584;

                if (*eax)
                {
                    ebx = &ebx[1];
                    eax = &eax[1];
                    var_584 = eax;
                }
            }
            else
            {
                int32_t eax_4 = sub_4f17d0(&var_580);

                if (eax_4 >= 0)
                {
                    char ecx_4 = var_580;

                    if (ecx_4 < 0x30 || ecx_4 > 0x39)
                    {
                        void* eax_5 = sub_4f1030(eax_4);

                        if (!eax_5)
                            var_580 = g_54e0e0;
                        else
                        {
                            void* var_598_5 = a2;
                            sub_4f13c0(a1, eax_5);
                        }
                    }
                }

                char var_57f;
                char var_57e;
                char var_57d;
                char var_57c;

                if (var_580 == 0x74 && var_57f == 0x68 && var_57e == 0x69 && var_57d == 0x73
                    && var_57c == 0x2e)
                {
                    void var_57b;
                    void* edi = &var_57b;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond:7_1 = 0 != *edi;
                        edi += 1;
                        i_1 -= 1;

                        if (!cond:7_1)
                            break;
                    }

                    int32_t ecx_6 = ~i_1;
                    void var_500;
                    int32_t esi_3;
                    int32_t edi_2;
                    edi_2 = memcpy(&var_500, edi - ecx_6, ecx_6 & 0xfffffffc);
                    memcpy(edi_2, esi_3, ecx_6 & 3);
                    void var_480;
                    sub_4f1270(&var_480, a2);
                    void* var_5a0_3 = &var_500;
                    void* var_5a4_2 = &var_480;
                    Game_DataSymbolLoad(&var_580, "%s.%s");
                }

                if (sub_4a5bb0(&var_580, ".isExists"))
                    var_580 = g_54e0c8;

                char* edi_3 = &var_580;
                int32_t i_2 = 0xffffffff;

                while (i_2)
                {
                    bool cond:5_1 = 0 != *edi_3;
                    edi_3 = &edi_3[1];
                    i_2 -= 1;

                    if (!cond:5_1)
                        break;
                }

                int32_t ecx_13 = ~i_2;
                int32_t esi_5;
                int32_t edi_6;
                edi_6 = memcpy(ebx, edi_3 - ecx_13, ecx_13 & 0xfffffffc);
                memcpy(edi_6, esi_5, ecx_13 & 3);
                char* edi_7 = ebx;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool cond:6_1 = 0 != *edi_7;
                    edi_7 = &edi_7[1];
                    i_3 -= 1;

                    if (!cond:6_1)
                        break;
                }

                eax = var_584;
                ebx = &ebx[~i_3 - 1];
            }

            if (!eax)
                break;
        }
    }

    *ebx = 0x3b;
    ebx[1] = 0;
    void* eax_9 = a1[1];

    if (eax_9)
    {
        sub_4b0d10(eax_9);
        a1[1] = 0;
    }

    if (!QHash_ValueGet())
    {
        QHash_ValueSet();
        sub_4b8980(0);
        char* edi_9 = &var_400;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool cond:2_1 = 0 != *edi_9;
            edi_9 = &edi_9[1];
            i_4 -= 1;

            if (!cond:2_1)
                break;
        }

        a1[1] = Mem_Alloc(~i_4, 4);
        a1[2] = sub_4b86e0(&var_400);
        sub_4b89c0();
        sub_4b0d50();
    }
    else
    {
        sub_4b8980(0);
        char* edi_8 = &var_400;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond:3_1 = 0 != *edi_8;
            edi_8 = &edi_8[1];
            i_5 -= 1;

            if (!cond:3_1)
                break;
        }

        a1[1] = Mem_Alloc(~i_5, 4);
        a1[2] = sub_4b86e0(&var_400);
        sub_4b89c0();
    }

    char* edi_10 = &var_400;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond:4_1 = 0 != *edi_10;
        edi_10 = &edi_10[1];
        i_6 -= 1;

        if (!cond:4_1)
            break;
    }

    int32_t ecx_22 = ~i_6;
    int32_t esi_7;
    int32_t edi_13;
    edi_13 = memcpy(a1[1], edi_10 - ecx_22, ecx_22 & 0xfffffffc);
    memcpy(edi_13, esi_7, ecx_22 & 3);
    return 0;
}
