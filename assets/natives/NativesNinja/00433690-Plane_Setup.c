#include "00433690-Plane_Setup.h"
/* 0x00433690 Plane_Setup full linked: callers=0 callees=5 */
struct status_msg* Plane_Setup(int80_t a1 @ st0, void* a2)

{
    char eax = sub_4f16c0(a2 + 0x838);

    if (eax)
        sub_4f16e0(a2 + 0x838, a2);

    struct status_msg* result;

    if (eax && !a1)
        result = Vehicle_UpdateCockpit_3(a2);
    else
    {
        result = *(a2 + 0x834);

        if (!result)
        {
            result = sub_4e6b00(a2, "su27");

            if (result)
            {
                result = QTask_LinkEventHandler_2(result);
                *(a2 + 0x834) = result;
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
            void* eax_5;

            if (!esi_1)
                eax_5 = nullptr;
            else
            {
                int32_t eax_2 = *esi_1;
                int32_t eax_3 = -(eax_2);
                eax_5 = (eax_3 - eax_3) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_5;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_6 = 0;
            g_afa7e0 = edx_2;
            eax_6 = i[7];
            result = *((eax_6 << 2) + &g_a970e0);

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
