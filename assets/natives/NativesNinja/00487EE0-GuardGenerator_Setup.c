#include "00487EE0-GuardGenerator_Setup.h"
/* 0x00487ee0 GuardGenerator_Setup full linked: callers=0 callees=7 */
int32_t* sub_487ee0(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x20))
    {
        sub_4f16e0(a2 + 0x20, a2);
        *(a2 + 0x70) = a1;
    }

    int32_t* result;

    if (!*(a2 + 0x70))
    {
        result = *(a2 + 8);

        if (!*result || !result)
            *(a2 + 0x72) = 0;
    }
    else
    {
        result = *(a2 + 0x78);

        if (*(a2 + 0x74) < result)
        {
            int32_t* edi_1 = *(a2 + 8);

            if (!*edi_1 || !edi_1)
            {
                sub_488000(a2);
                result = *(a2 + 0x74) + 1;
                *(a2 + 0x72) = 1;
                *(a2 + 0x74) = result;
            }
            else
            {
                result = sub_463170(edi_1);

                if (result)
                {
                    result = sub_463190(edi_1);

                    if (!result)
                    {
                        int32_t* ecx_2 = *(a2 + 8);
                        int32_t eax_4 = *ecx_2;
                        int32_t eax_5 = -(eax_4);
                        QTask_FindType((eax_5 - eax_5) & ecx_2);
                        sub_488000(a2);
                        result = *(a2 + 0x74) + 1;
                        *(a2 + 0x72) = 1;
                        *(a2 + 0x74) = result;
                    }
                }
            }
        }
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_13;

            if (!esi_1)
                eax_13 = nullptr;
            else
            {
                int32_t eax_10 = *esi_1;
                int32_t eax_11 = -(eax_10);
                eax_13 = (eax_11 - eax_11) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_13;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_14 = 0;
            g_afa7e0 = edx_2;
            eax_14 = i[7];
            result = *((eax_14 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    return result;
}
