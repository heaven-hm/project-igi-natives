#include "00401A70-QTask_QtaskTypeSNotDefined.h"
/* 0x00401a70 QTask_QtaskTypeSNotDefined full linked: callers=2 callees=2 */
int32_t QTask_QtaskTypeSNotDefined(char* a1)

{
    int32_t ebp = 0;
    char* edi = &g_af5f05;

    while (true)
    {
        if (*edi)
        {
            char* esi_1 = a1;
            char* eax_1 = QTask_RegisterEventCallback_2(ebp);
            int32_t result;

            while (true)
            {
                char edx_1 = *eax_1;
                char temp0_1 = *esi_1;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!edx_1)
                    {
                        result = 0;
                        break;
                    }

                    edx_1 = eax_1[1];
                    char temp3_1 = esi_1[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        eax_1 = &eax_1[2];
                        esi_1 = &esi_1[2];

                        if (edx_1)
                            continue;

                        result = 0;
                        break;
                    }
                }

                result = eax_1 - eax_1 + 1;
                break;
            }

            if (!result)
            {
                result = ebp;
                return result;
            }
        }

        edi = &edi[0x30];
        ebp += 1;

        if (edi >= 0xafa705)
            break;
    }

    char* var_14_2 = a1;
    Error_Show("QTask type "%s" not defined");

    while (true)
        /* nop */
}
