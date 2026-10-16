#include "0043CA10-ElevatorFloorIndicator_Setup.h"
/* 0x0043ca10 ElevatorFloorIndicator_Setup full linked: callers=0 callees=9 */
struct status_msg* ElevatorFloorIndicator_Setup(int80_t a1 @ st0, int32_t a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

            if (eax_6)
            {
                eax_6(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    int32_t ebx;

    if (!sub_4f16c0(a2 + 0x1a4))
        ebx = a2;
    else
    {
        sub_4f16e0(a2 + 0x1a4, a2);
        ebx = a1;
    }

    int32_t esi_4;

    if (!sub_4f16c0(a2 + 0x1f4))
        esi_4 = a2;
    else
    {
        sub_4f16e0(a2 + 0x1f4, a2);
🚫🚫🚫        int32_t var_8_2 = /* int32_t var_8_2 = (unimplemented  {fistp qword [esp+0x14], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x14], st0} */
        esi_4 = var_8_2;
    }

    char* eax_9 = a2 + 0x170;

    if (!ebx)
        eax_9 = a2 + 0x180;

    struct status_msg* result = sub_4c48d0(a2, sub_4cec10(eax_9));

    if (esi_4)
    {
        result = sub_4e6b00(sub_4f0ee0(), a2 + 0x190);

        if (result)
            return sub_4e6c30(result, a2 + 0x20);
    }

    return result;
}
