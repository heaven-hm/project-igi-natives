#include "gi_platform.h"
#include "004C1560-DynObj_FindSymbol_4.h"
int32_t DynObj_FindSymbol_4(int32_t* a1, char* a2)

{
    Sys_CloseFileStream_4(a1, 0x547a5c, 1);
    char* dstD = a2;

    if (*dstD)
    {
        char i;

        do
        {
            int32_t valA2 = *dstD - 9;
            char* v_10_1;
            int32_t v_c_1;

            if (valA2 > 0x19)
            {
                v_c_1 = 1;
                v_10_1 = dstD;
            }
            else
            {
                int32_t objC1 = 0;
                objC1 = lookup_table_4c15e0[valA2];

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
                        v_c_1 = 1;
                        v_10_1 = dstD;
                        break;
                    }
                }
            }

            Sys_CloseFileStream_4(a1, v_10_1, v_c_1);
            i = dstD[1];
            dstD = &dstD[1];
        } while (i);
    }

    return Sys_CloseFileStream_4(a1, 0x547a5c, 1);
}
