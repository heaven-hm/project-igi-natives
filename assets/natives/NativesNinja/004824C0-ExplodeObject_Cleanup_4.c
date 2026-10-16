#include "004824C0-ExplodeObject_Cleanup_4.h"
/* 0x004824c0 ExplodeObject_Cleanup_4 full linked: callers=0 callees=3 */
void* sub_4824c0(void* a1, int32_t* a2)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_4;

            if (!edx_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_6 = sub_4cea20();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            int32_t eax_10 = *(((eax_6 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (eax_10)
                eax_10(i, a2);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    sub_4dcdd0(a1);
    void* result = sub_4c7560(*a2, a1);
    *(a1 + 0x234) = 0;
    return result;
}
