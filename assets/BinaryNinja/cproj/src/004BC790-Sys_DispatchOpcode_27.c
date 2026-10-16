#include "gi_platform.h"
#include "004BC790-Sys_DispatchOpcode_27.h"
int32_t Sys_DispatchOpcode_27(int32_t* a1, char* a2)

{
    Sys_CloseFileStream_4(a1, 0x547a5c, 1);

    if (*a2)
    {
        char* dstD1 = a2;
        char i;

        do
        {
            int32_t valA2 = *dstD1 - 9;
            char* v_10_1;
            int32_t v_c_1;

            if (valA2 > 0x53)
            {
                v_c_1 = 1;
                v_10_1 = dstD1;
            }
            else
            {
                int32_t objC1 = 0;
                objC1 = lookup_table_4bc820[valA2];

                switch (objC1)
                {
                    case 0:
                    {
                        v_c_1 = 2;
                        v_10_1 = &g_547a58;
                        break;
                    }
                    case 1:
                    {
                        v_c_1 = 2;
                        v_10_1 = &g_547a54;
                        break;
                    }
                    case 2:
                    {
                        v_c_1 = 2;
                        v_10_1 = &g_547a50;
                        break;
                    }
                    case 3:
                    {
                        v_c_1 = 1;
                        v_10_1 = dstD1;
                        break;
                    }
                }
            }

            Sys_CloseFileStream_4(a1, v_10_1, v_c_1);
            i = dstD1[1];
            dstD1 = &dstD1[1];
        } while (i);
    }

    return Sys_CloseFileStream_4(a1, 0x547a5c, 1);
}
