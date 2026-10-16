#include "004F3240-EditRigidObj_Cleanup_2.h"
/* 0x004f3240 EditRigidObj_Cleanup_2 full linked: callers=0 callees=4 */
void* sub_4f3240(void* a1, int32_t* a2)

{
    int32_t* i = *(a1 + 8);
    int32_t eax;

    if (!*i || !i)
        eax = g_afa7e0;
    else
    {
        eax = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* ecx_4;

            if (!edx_1)
                ecx_4 = nullptr;
            else
            {
                int32_t ecx_1 = *edx_1;
                int32_t ecx_2 = -(ecx_1);
                ecx_4 = (ecx_2 - ecx_2) & edx_1;
            }

            *((eax << 2) + &g_afa6e0) = ecx_4;
            g_afa7e0 = eax + 1;
            uint32_t eax_3 = sub_4cea20();
            int32_t ecx_5 = 0;
            ecx_5 = i[7];
            int32_t eax_7 = *(((eax_3 * 0x180 + ecx_5) << 2) + &g_a96ae0);

            if (eax_7)
                eax_7(i, a2);

            eax = g_afa7e0 - 1;
            g_afa7e0 = eax;
            i = *((eax << 2) + &g_afa6e0);
        } while (i);
    }

    void* ecx_6 = *(a1 + 0xe8);

    if (ecx_6)
    {
        int32_t* i_1 = *(ecx_6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_2 = *i_1;
                void* ecx_10;

                if (!edx_2)
                    ecx_10 = nullptr;
                else
                {
                    int32_t ecx_7 = *edx_2;
                    int32_t ecx_8 = -(ecx_7);
                    ecx_10 = (ecx_8 - ecx_8) & edx_2;
                }

                *((eax << 2) + &g_afa6e0) = ecx_10;
                g_afa7e0 = eax + 1;
                uint32_t eax_11 = sub_4cea20();
                int32_t eax_12 = 0;
                eax_12 = i_1[7];
                int32_t eax_13 = *(((eax_11 * 0x180 + eax_12) << 2) + &g_a96ae0);

                if (eax_13)
                    eax_13(i_1, a2);

                eax = g_afa7e0 - 1;
                g_afa7e0 = eax;
                i_1 = *((eax << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    sub_4dcdd0(a1);
    void* result = sub_4c7560(*a2, a1);
    *(a1 + 0x198) = 0;
    return result;
}
