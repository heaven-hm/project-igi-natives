#include "IntroScreen_LoadParameters.h"
int32_t IntroScreen_LoadParameters(int32_t* a1)

{
    int32_t objC = 0;
    float valA = a1[0xb];
    objC = !valA;
    int32_t dstD = objC;

    if (valA && !Display_SwapBuffers_2(a1, dstD, valA))
        dstD = 1;

    if (g_c28c63 & 0x80)
    {
        void* valA2 = a1[0xb];

        if (valA2)
        {
            Display_CreateSurface(valA2);
            a1[0xb] = 0;
        }
    }
    else if (dstD)
    {
        void* valA3 = a1[0xb];

        if (valA3)
        {
            Display_CreateSurface(valA3);
            a1[0xb] = 0;
        }

        int32_t valA4 = a1[9];

        if (valA4 < a1[8])
        {
            int32_t v_c_4 = 0;
            int32_t (* v_10_1)(int32_t a1, void* a2) = IntroScreen_Update;
            void* objC2 = *(a1[0xa] + ((valA4 + 1) << 2) - 4);
            a1[9] = valA4 + 1;
            a1[0xb] = Display_OpenDevice_2(objC2, IntroScreen_Update, 0);
        }
        else if (a1[0xd])
        {
            void** valA7 = a1[0xa];
            a1[9] = 0;
            int32_t v_c_5 = 0;
            int32_t (* v_10_2)(int32_t a1, void* a2) = IntroScreen_Update;
            void* valA8 = *valA7;
            a1[9] = 1;
            a1[0xb] = Display_OpenDevice_2(valA8, IntroScreen_Update, 0);
        }
    }

    int32_t result = a1[0xb];

    if (result)
        return result;

    Flow_SetState(3);
    return QTask_FindType(a1);
}
