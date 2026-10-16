#include "004CF080-DynObj_InsertHashItem_14.h"
/* 0x004cf080 DynObj_InsertHashItem_14 full linked: callers=1 callees=16 */
int32_t* sub_4cf080(void* a1, int32_t a2, int32_t a3)

{
    void* eax = g_a4ec60;
    void* edi = a1;
    sub_4cf910(edi);
    void var_100;

    if (a3)
    {
        int32_t __saved_ebx_1 = a2;
        char* var_128_1 = &g_a4ed6c;
        int32_t eax_2;
        void* ecx_1;
        eax_2 = Game_DataSymbolLoad(&var_100, "%stextures/%s.res");
        void* var_138_1 = &var_100;
        Resource_Load(eax_2, &var_100, ecx_1, nullptr);
        sub_4cf790(edi);
        sub_4cf870(edi);
        Resource_Unload(&var_100);
    }

    int32_t __saved_ebx_2 = a2;
    char* var_128_2 = &g_a4ed6c;
    int32_t eax_3;
    void* ecx_2;
    eax_3 = Game_DataSymbolLoad(&var_100, "%smodels/%s.res");
    void* var_138_2 = &var_100;
    *(edi + 0xc) = Resource_Load(eax_3, &var_100, ecx_2, nullptr);
    sub_4cf330(edi);
    sub_4cf630(edi);
    int32_t* eax_6 = sub_4ceaa0(*(edi + 8), 0x564e414d, nullptr);
    int32_t* result_3 = *eax_6;
    void* var_104 = &eax_6[result_3 + 1];
    int32_t* result = sub_4ceaa0(*(edi + 8), 0x494e5354, nullptr);
    int32_t* result_2 = result;

    if (result_3 > 0)
    {
        int32_t* result_1 = result_3;

        while (true)
        {
            int32_t eax_7 = *result_2;
            int32_t* var_12c_1;
            int32_t var_128_3;

            if (eax_7 < 0x2000)
            {
                var_128_3 = eax_7;
                var_12c_1 = edi + 0x10;
            }
            else
            {
                var_128_3 = eax_7 - 0x2000;
                var_12c_1 = eax + 0x10;
            }

            int32_t* eax_11 = sub_4cf300(var_12c_1, var_128_3);
            int32_t ebx_1 = result_2[1];
            result_2 = &result_2[2];
            int32_t* eax_12 = Mem_Alloc((ebx_1 << 3) + 0x1c, 4);
            eax_12[5] = &eax_12[ebx_1 + 7];
            eax_12[4] = &eax_12[7];
            eax_12[6] = ebx_1;
            eax_12[1] = 0;
            *eax_12 = 0;
            sub_4af8f0(a1 + 0x28, eax_12);
            eax_12[3] = eax_11;
            void* edi_3 = var_104;
            int32_t i = 0xffffffff;
            eax_12[2] = var_104;

            while (i)
            {
                bool cond:1_1 = 0 != *edi_3;
                edi_3 += 1;
                i -= 1;

                if (!cond:1_1)
                    break;
            }

            var_104 = var_104 + ~i - 1 + 1;
            void* eax_17 = sub_4ceaa0(*(a1 + 8), 0x47545420, nullptr) + 4;
            int32_t var_110_1 = 0;

            if (ebx_1 > 0)
            {
                bool cond:3_1;

                do
                {
                    int32_t edi_4 = *result_2;
                    int32_t ecx_9 = *(eax_17 + (edi_4 << 3));
                    int32_t ebp_2;

                    if (ecx_9 < 0x2000)
                    {
                        int32_t edx_10 = *(a1 + 0x34);

                        ebp_2 = !edx_10 ? 0 : edx_10 + ecx_9 * 0x24;
                    }
                    else
                    {
                        int32_t edx_8 = *(eax + 0x34);

                        ebp_2 = !edx_8 ? 0 : edx_8 + ((ecx_9 * 9 - 0x12000) << 2);
                    }

                    int32_t ecx_12 = *(eax_17 + (edi_4 << 3) + 4);
                    int32_t ecx_14;

                    if (ecx_12 == 0xffffffff)
                    {
                        int32_t edx_12 = *(a1 + 0x38);

                        ecx_14 = !edx_12 ? 0 : edx_12 + ecx_12 * 0xc;
                    }
                    else if (ecx_12 < 0x2000)
                    {
                        int32_t edx_16 = *(a1 + 0x3c);

                        ecx_14 = !edx_16 ? 0 : edx_16 + ecx_12 * 0xc;
                    }
                    else
                    {
                        int32_t edx_14 = *(eax + 0x38);

                        ecx_14 = !edx_14 ? 0 : edx_14 + ((ecx_12 * 3 - 0x6000) << 2);
                    }

                    *(eax_12[4] + (var_110_1 << 2)) = ebp_2;
                    result_2 = &result_2[1];
                    *(eax_12[5] + (var_110_1 << 2)) = ecx_14;
                    cond:3_1 = var_110_1 + 1 < ebx_1;
                    var_110_1 += 1;
                } while (cond:3_1);
            }

            result = result_1 - 1;
            bool cond:0_1 = result_1 != 1;
            result_1 = result;

            if (!cond:0_1)
                break;

            edi = a1;
        }
    }

    return result;
}
