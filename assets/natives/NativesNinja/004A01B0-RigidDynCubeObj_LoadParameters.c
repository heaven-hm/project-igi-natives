#include "004A01B0-RigidDynCubeObj_LoadParameters.h"
/* 0x004a01b0 RigidDynCubeObj_LoadParameters full linked: callers=0 callees=9 */
int32_t sub_4a01b0(void* a1)

{
    void* var_54 = a1;
    void var_4c;
    void* var_50 = sub_4daa20(&var_4c);
    void* var_48;
    void var_44;
    sub_4da180(&var_48, &var_44);
    (*((sub_4cfc30() << 2) + &g_a94e84))(&var_54);
    void var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    void* edx = a1 + 0x70;
    void var_28;
    memcpy(&var_28, edx, 0x28);
    int32_t* i = *(a1 + 8);
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

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

            *((result << 2) + &g_afa6e0) = ecx_4;
            g_afa7e0 = result + 1;
            uint32_t eax_4 = sub_4c56f0();
            int32_t eax_5 = 0;
            eax_5 = i[7];
            int32_t eax_6 = *(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0);

            if (eax_6)
                eax_6(i, &var_40);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* ebx_1 = *(a1 + 0xe8);

    if (ebx_1)
    {
        memcpy(&var_40, a1 + 0x20, 0x18);
        memcpy(&var_28, edx, 0x28);
        int32_t* i_1 = *(ebx_1 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_5 = *i_1;
                void* ecx_8;

                if (!edx_5)
                    ecx_8 = nullptr;
                else
                {
                    int32_t ecx_5 = *edx_5;
                    int32_t ecx_6 = -(ecx_5);
                    ecx_8 = (ecx_6 - ecx_6) & edx_5;
                }

                *((result << 2) + &g_afa6e0) = ecx_8;
                g_afa7e0 = result + 1;
                uint32_t eax_10 = sub_4c56f0();
                int32_t eax_11 = 0;
                eax_11 = i_1[7];
                int32_t eax_12 = *(((eax_10 * 0x180 + eax_11) << 2) + &g_a96ae0);

                if (eax_12)
                    eax_12(i_1, &var_40);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
