#include "005124C0-BoneDynCubeObj_LoadParameters.h"
/* 0x005124c0 BoneDynCubeObj_LoadParameters full linked: callers=1 callees=6 */
int32_t sub_5124c0(void* a1)

{
    void* var_54 = a1;
    void var_4c;
    void* var_50 = sub_4daa20(&var_4c);
    void* var_48;
    void var_44;
    sub_4da180(&var_48, &var_44);
    int32_t result = (*((sub_4cfc40() << 2) + &g_a94e84))(&var_54);
    void var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    void var_28;
    memcpy(&var_28, a1 + 0x78, 0x28);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_5;

            if (!edx_1)
                eax_5 = nullptr;
            else
            {
                int32_t eax_2 = *edx_1;
                int32_t eax_3 = -(eax_2);
                eax_5 = (eax_3 - eax_3) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_5;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_7 = sub_4c56f0();
            int32_t eax_8 = 0;
            eax_8 = i[7];
            result = *(((eax_7 * 0x180 + eax_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &var_40);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
