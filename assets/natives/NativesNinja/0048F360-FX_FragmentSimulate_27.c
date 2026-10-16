#include "0048F360-FX_FragmentSimulate_27.h"
/* 0x0048f360 FX_FragmentSimulate_27 full linked: callers=7 callees=5 */
void* sub_48f360(char* a1, int32_t a2)

{
    int32_t edi = sub_48f080();
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    void var_200;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_200, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    void* result = sub_4a5a0c(&var_200, " \t");
    void* result_2 = result;
    void* result_1 = result_2;

    if (result_2)
    {
        while (true)
        {
            void* result_3 = result_2;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:2_1 = 0 != *result_3;
                result_3 += 1;
                i_1 -= 1;

                if (!cond:2_1)
                    break;
            }

            char* edi_3 = a1;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:3_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                i_2 -= 1;

                if (!cond:3_1)
                    break;
            }

            if (~i_1 - 1 >= ~i_2 - 1)
            {
                char* edi_4 = a1;
                int32_t i_3 = 0xffffffff;
                int32_t i_4 = 0;
                char var_205_1 = 1;

                while (i_3)
                {
                    bool cond:4_1 = 0 != *edi_4;
                    edi_4 = &edi_4[1];
                    i_3 -= 1;

                    if (!cond:4_1)
                        break;
                }

                if (~i_3 - 1 <= 0)
                    goto label_48f43f;

                char* edx_2 = a1;
                int32_t j;

                do
                {
                    if (!var_205_1)
                        goto label_48f45f;

                    char eax_3 = *(result_2 - a1 + edx_2);
                    char ecx_10 = *edx_2;

                    if (eax_3 >= 0x61 && eax_3 <= 0x7a)
                        eax_3 -= 0x20;

                    if (ecx_10 >= 0x61 && ecx_10 <= 0x7a)
                        ecx_10 -= 0x20;

                    if (eax_3 != ecx_10)
                        var_205_1 = 0;

                    i_4 += 1;
                    char* edi_5 = a1;
                    j = 0xffffffff;
                    edx_2 = &edx_2[1];

                    while (j)
                    {
                        bool cond:6_1 = 0 != *edi_5;
                        edi_5 = &edi_5[1];
                        j -= 1;

                        if (!cond:6_1)
                            break;
                    }
                } while (i_4 < ~j - 1);

                if (var_205_1)
                {
                    result_2 = result_1;
                label_48f43f:
                    char* edi_6 = a1;
                    int32_t i_5 = 0xffffffff;

                    while (i_5)
                    {
                        bool cond:5_1 = 0 != *edi_6;
                        edi_6 = &edi_6[1];
                        i_5 -= 1;

                        if (!cond:5_1)
                            break;
                    }

                    a2(~i_5 - 1 + result_2);
                }
            }

        label_48f45f:
            result = sub_4a5a0c(nullptr, " \t");
            result_1 = result;

            if (!result)
                break;

            result_2 = result_1;
        }
    }

    return result;
}
