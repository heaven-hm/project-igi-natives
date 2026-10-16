#include "004C1560-DynObj_FindSymbol_4.h"
/* 0x004c1560 DynObj_FindSymbol_4 full linked: callers=1 callees=3 */
int32_t sub_4c1560(int32_t* a1, char* a2)

{
    sub_4b1700(a1, 0x547a5c, 1);
    char* edi = a2;

    if (*edi)
    {
        char i;

        do
        {
            int32_t eax_2 = *edi - 9;
            char* var_10_1;
            int32_t var_c_1;

            if (eax_2 > 0x19)
            {
                var_c_1 = 1;
                var_10_1 = edi;
            }
            else
            {
                int32_t ecx_1 = 0;
                ecx_1 = lookup_table_4c15e0[eax_2];

                switch (ecx_1)
                {
                    case 0:
                    {
                        var_c_1 = 2;
                        var_10_1 = &g_547a58;
                        break;
                    }
                    case 1:
                    {
                        var_c_1 = 2;
                        var_10_1 = &g_547a54;
                        break;
                    }
                    case 2:
                    {
                        var_c_1 = 1;
                        var_10_1 = edi;
                        break;
                    }
                }
            }

            sub_4b1700(a1, var_10_1, var_c_1);
            i = edi[1];
            edi = &edi[1];
        } while (i);
    }

    return sub_4b1700(a1, 0x547a5c, 1);
}
