#include "004FE730-Script_FormatString_31.h"
/* 0x004fe730 Script_FormatString_31 full linked: callers=18 callees=1 */
int32_t* sub_4fe730(void* a1, char* a2)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t* result_1 = *(a1 + 8);

    if (*result_1)
    {
        int32_t* result = result_1;

        if (result)
        {
            while (true)
            {
                int32_t edx;
                edx = result[7];
                char eax;
                int16_t ecx;
                eax = TaskType_IsDerivedFrom(edx, g_a7a4fc);

                if (eax)
                {
                    char* esi_1 = a2;
                    char* eax_1 = &result[8];
                    int32_t eax_3;

                    while (true)
                    {
                        edx = *eax_1;
                        char ebx_1 = *esi_1;
                        ecx = edx;
                        bool c_1 = edx < ebx_1;

                        if (edx == ebx_1)
                        {
                            if (!ecx)
                            {
                                eax_3 = 0;
                                break;
                            }

                            edx = eax_1[1];
                            ebx_1 = esi_1[1];
                            ecx = edx;
                            c_1 = edx < ebx_1;

                            if (edx == ebx_1)
                            {
                                eax_1 = &eax_1[2];
                                esi_1 = &esi_1[2];

                                if (ecx)
                                    continue;

                                eax_3 = 0;
                                break;
                            }
                        }

                        eax_3 = eax_1 - eax_1 + 1;
                        break;
                    }

                    if (!eax_3)
                        return result;
                }

                int32_t* result_2 = *result;

                if (!result_2)
                    break;

                if (!*result_2)
                    break;

                result = result_2;

                if (!result)
                    break;
            }
        }
    }

    return 0;
}
