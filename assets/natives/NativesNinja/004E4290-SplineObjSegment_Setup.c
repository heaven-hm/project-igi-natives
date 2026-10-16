#include "004E4290-SplineObjSegment_Setup.h"
/* 0x004e4290 SplineObjSegment_Setup full linked: callers=0 callees=5 */
int32_t sub_4e4290(void* a1)

{
    void* var_54 = a1;
    void var_4c;
    void* var_50 = sub_4daa20(&var_4c);
    void* var_48;
    void var_44;
    sub_4da180(&var_48, &var_44);
    (*((sub_4cfc50() << 2) + &g_a94e84))(&var_54);
    void var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    int32_t* i = *(a1 + 8);
    int32_t var_28 = 0x3f800000;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0x3f800000;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0x3f800000;
    int32_t var_4 = 0;
    int32_t result = *i;

    if (result && i)
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
