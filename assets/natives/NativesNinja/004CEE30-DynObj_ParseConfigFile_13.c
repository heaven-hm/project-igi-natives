#include "004CEE30-DynObj_ParseConfigFile_13.h"
/* 0x004cee30 DynObj_ParseConfigFile_13 full linked: callers=1 callees=0 */
int32_t* sub_4cee30(char* a1)

{
    int32_t* eax = g_a4ec60;
    int32_t* ebx = *eax;

    if (ebx)
    {
        while (true)
        {
            int32_t* result = eax[0xa];
            int32_t* result_1 = *result;

            if (result_1)
            {
                while (true)
                {
                    char* esi_1 = result[2];
                    char* ecx_1 = a1;
                    int32_t ecx_3;

                    while (true)
                    {
                        char eax_1 = *ecx_1;
                        char temp0_1 = *esi_1;
                        bool c_1 = eax_1 < temp0_1;

                        if (eax_1 == temp0_1)
                        {
                            if (!eax_1)
                            {
                                ecx_3 = 0;
                                break;
                            }

                            eax_1 = ecx_1[1];
                            char temp3_1 = esi_1[1];
                            c_1 = eax_1 < temp3_1;

                            if (eax_1 == temp3_1)
                            {
                                ecx_1 = &ecx_1[2];
                                esi_1 = &esi_1[2];

                                if (eax_1)
                                    continue;

                                ecx_3 = 0;
                                break;
                            }
                        }

                        ecx_3 = ecx_1 - ecx_1 + 1;
                        break;
                    }

                    if (!ecx_3)
                        return result;

                    result = result_1;
                    result_1 = *result_1;

                    if (!result_1)
                        break;
                }
            }

            eax = ebx;
            ebx = *ebx;

            if (!ebx)
                break;
        }
    }

    return 0;
}
