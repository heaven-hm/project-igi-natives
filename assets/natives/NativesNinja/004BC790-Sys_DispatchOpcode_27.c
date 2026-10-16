#include "004BC790-Sys_DispatchOpcode_27.h"
/* 0x004bc790 Sys_DispatchOpcode_27 full linked: callers=1 callees=3 */
int32_t sub_4bc790(int32_t* a1, char* a2)

{
    sub_4b1700(a1, 0x547a5c, 1);

    if (*a2)
    {
        char* edi_1 = a2;
        char i;

        do
        {
            int32_t eax_2 = *edi_1 - 9;
            char* var_10_1;
            int32_t var_c_1;

            if (eax_2 > 0x53)
            {
                var_c_1 = 1;
                var_10_1 = edi_1;
            }
            else
            {
                int32_t ecx_1 = 0;
                ecx_1 = lookup_table_4bc820[eax_2];

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
                        var_c_1 = 2;
                        var_10_1 = &g_547a50;
                        break;
                    }
                    case 3:
                    {
                        var_c_1 = 1;
                        var_10_1 = edi_1;
                        break;
                    }
                }
            }

            sub_4b1700(a1, var_10_1, var_c_1);
            i = edi_1[1];
            edi_1 = &edi_1[1];
        } while (i);
    }

    return sub_4b1700(a1, 0x547a5c, 1);
}
