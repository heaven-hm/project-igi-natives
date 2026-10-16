#include "0041CB40-Menu_UpdateLanguage_8.h"
/* 0x0041cb40 Menu_UpdateLanguage_8 full linked: callers=1 callees=2 */
int32_t Menu_UpdateLanguage_8(int32_t* a1, char* a2 @ 0xc, int32_t a3)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    char* edi = a2;
    int32_t result = 0;
    char* ebp = edi;

    if (!edi)
        return 0;

    char i = *edi;

    if (i)
    {
        int32_t ebx;
        int32_t var_10_1 = ebx;

        do
        {
            char* esi_1 = edi;

            if (i)
            {
                while (i != 0x20)
                {
                    if (i == 9)
                        break;

                    if (i == 0xa)
                        break;

                    i = esi_1[1];
                    esi_1 = &esi_1[1];

                    if (!i)
                        break;
                }
            }

            char ebx_1 = *esi_1;
            *esi_1 = 0;
            sub_4b6e90(a1, ebp);
            *esi_1 = ebx_1;

            if (sub_4b7df0(a1) > a3 && edi != ebp)
            {
                edi[0xffffffff] = 0;
                ebp = edi;
                result += 1;
            }

            int32_t eax_6 = *esi_1;

            if (eax_6 <= 0x20)
            {
                int32_t edx_1 = 0;
                edx_1 = lookup_table_41cc1c[eax_6];

                switch (edx_1)
                {
                    case 0:
                    {
                        edi = esi_1;
                        result += 1;
                        break;
                    }
                    case 1:
                    {
                        edi = &esi_1[1];
                        break;
                    }
                    case 2:
                    {
                        edi = &esi_1[1];
                        *esi_1 = 0;
                        result += 1;
                        ebp = edi;
                        break;
                    }
                }
            }

            i = *edi;
        } while (i);
    }

    return result;
}
