#include "00415380-IntroScreen_LoadParameters.h"
/* 0x00415380 IntroScreen_LoadParameters full linked: callers=0 callees=6 */
int32_t IntroScreen_LoadParameters(int32_t* a1)

{
    int32_t ecx = 0;
    float eax = a1[0xb];
    ecx = !eax;
    int32_t edi = ecx;

    if (eax && !sub_490d10(a1, edi, eax))
        edi = 1;

    if (g_c28c63 & 0x80)
    {
        void* eax_2 = a1[0xb];

        if (eax_2)
        {
            sub_4903b0(eax_2);
            a1[0xb] = 0;
        }
    }
    else if (edi)
    {
        void* eax_3 = a1[0xb];

        if (eax_3)
        {
            sub_4903b0(eax_3);
            a1[0xb] = 0;
        }

        int32_t eax_4 = a1[9];

        if (eax_4 < a1[8])
        {
            int32_t var_c_4 = 0;
            int32_t (* var_10_1)(int32_t a1, void* a2) = IntroScreen_Update;
            void* ecx_2 = *(a1[0xa] + ((eax_4 + 1) << 2) - 4);
            a1[9] = eax_4 + 1;
            a1[0xb] = sub_4905a0(ecx_2, IntroScreen_Update, 0);
        }
        else if (a1[0xd])
        {
            void** eax_7 = a1[0xa];
            a1[9] = 0;
            int32_t var_c_5 = 0;
            int32_t (* var_10_2)(int32_t a1, void* a2) = IntroScreen_Update;
            void* eax_8 = *eax_7;
            a1[9] = 1;
            a1[0xb] = sub_4905a0(eax_8, IntroScreen_Update, 0);
        }
    }

    int32_t result = a1[0xb];

    if (result)
        return result;

    Flow_SetState(3);
    return QTask_FindType(a1);
}
