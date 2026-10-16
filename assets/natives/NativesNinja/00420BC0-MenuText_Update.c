#include "00420BC0-MenuText_Update.h"
/* 0x00420bc0 MenuText_Update full linked: callers=0 callees=5 */
void* MenuText_Update(void* a1)

{
    void* result = *(a1 + 0x44);
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0;

    if (result && *(a1 + 0x114))
    {
        int32_t* eax = Menu_LocalSS(result, a1 + 0x54);
        sub_4b6e90(*(a1 + 0x114), eax);
        int32_t eax_2 = sub_4b7df0(*(a1 + 0x114));
        int32_t* ecx_3 = *(a1 + 0x114);
        *(a1 + 0x28) = eax_2;
        result = sub_4b7e00(ecx_3);
        *(a1 + 0x2c) = result;
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_4 = g_afa7e0;

        do
        {
            int32_t* edx_2 = *i;
            void* eax_6;

            if (!edx_2)
                eax_6 = nullptr;
            else
            {
                int32_t eax_3 = *edx_2;
                int32_t eax_4 = -(eax_3);
                eax_6 = (eax_4 - eax_4) & edx_2;
            }

            *((ecx_4 << 2) + &g_afa6e0) = eax_6;
            g_afa7e0 = ecx_4 + 1;
            int32_t eax_7 = Menu_LeaveMenus_14();
            int32_t eax_8 = 0;
            eax_8 = i[7];
            result = *(((eax_7 * 0x180 + eax_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_4 = g_afa7e0 - 1;
            g_afa7e0 = ecx_4;
            i = *((ecx_4 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
