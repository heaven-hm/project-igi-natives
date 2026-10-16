#include "00467900-AI_UpdatePatrol_25.h"
/* 0x00467900 AI_UpdatePatrol_25 full linked: callers=0 callees=1 */
int32_t sub_467900(int32_t* a1)

{
    int32_t edi = 0;
    int32_t result = a1[1];

    if (result > 0)
    {
        do
        {
            int32_t eax = *a1;

            if (*(eax + (edi << 3)) == 4)
            {
                void* esi_1 = *(eax + (edi << 3) + 4);
                uint32_t eax_3 = sub_467dd0();
                int32_t edx_1 = 0;
                edx_1 = *(esi_1 + 0x1c);
                int32_t eax_4 = *(((eax_3 * 0x180 + edx_1) << 2) + &g_a96ae0);

                if (eax_4)
                    eax_4(esi_1, 0);
            }

            result = a1[1];
            edi += 1;
        } while (edi < result);
    }

    return result;
}
