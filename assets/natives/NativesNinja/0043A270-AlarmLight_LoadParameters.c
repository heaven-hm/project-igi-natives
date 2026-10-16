#include "0043A270-AlarmLight_LoadParameters.h"
/* 0x0043a270 AlarmLight_LoadParameters full linked: callers=0 callees=6 */
struct status_msg* AlarmLight_LoadParameters(int80_t a1 @ st0, void* a2)

{
    char ebx = *(a2 + 0x1a0);
    struct status_msg* result;

    if (!ebx || *(a2 + 0x1a1))
    {
        result = *(a2 + 0x1f4);

        if (result)
        {
            result = QTask_FindType(result);
            *(a2 + 0x1f4) = 0;
        }
    }
    else
    {
        result = *(a2 + 0x1f4);

        if (!result)
        {
            result = sub_4e6b00(a2, a2 + 0x160);
            *(a2 + 0x1f4) = result;
        }
    }

    result = *(a2 + 0x1a1);

    if (!result)
    {
        result = sub_4f16c0(a2 + 0x1a4);

        if (result)
        {
            result = sub_4f16e0(a2 + 0x1a4, a2);
            *(a2 + 0x1a0) = a1;
        }

        result = *(a2 + 0x1a0);

        if (!ebx)
        {
            if (result)
                result = sub_4c48d0(a2, sub_4cec10(a2 + 0x140));
        }
        else if (!result)
            result = sub_4c48d0(a2, sub_4cec10(a2 + 0x130));

        int32_t* i = *(a2 + 8);

        if (*i && i)
        {
            int32_t edx_2 = g_afa7e0;

            do
            {
                int32_t* edi_2 = *i;
                void* eax_8;

                if (!edi_2)
                    eax_8 = nullptr;
                else
                {
                    int32_t eax_5 = *edi_2;
                    int32_t eax_6 = -(eax_5);
                    eax_8 = (eax_6 - eax_6) & edi_2;
                }

                *((edx_2 << 2) + &g_afa6e0) = eax_8;
                int32_t edx_3 = edx_2 + 1;
                int32_t eax_9 = 0;
                g_afa7e0 = edx_3;
                eax_9 = i[7];
                result = *((eax_9 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_3 = g_afa7e0;
                }

                i = *((edx_3 << 2) + &g_afa6dc);
                edx_2 = edx_3 - 1;
                g_afa7e0 = edx_2;
            } while (i);
        }

        void* esi_1 = *(a2 + 0xe8);

        if (esi_1)
        {
            int32_t ecx_2 = 0;
            ecx_2 = *(esi_1 + 0x1c);
            return (*((ecx_2 << 2) + &g_a970e0))(esi_1);
        }
    }

    return result;
}
