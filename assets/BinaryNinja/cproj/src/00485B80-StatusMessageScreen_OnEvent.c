#include "gi_platform.h"
#include "00485B80-StatusMessageScreen_OnEvent.h"
int32_t StatusMessageScreen_OnEvent(int32_t a1, int32_t a2)

{
    void* valA = FX_FragmentSimulate_6(a1, a2);

    if (!valA)
        return FX_SmokeEmit_6(a1, a2);

    int32_t valA2 = a2 * 3;
    void* dstD;

    if ((*(int32_t*)(uintptr_t)(valA + 0x1c6)))
    {
        int32_t objC2 = ((valA2 << 3) - a2) * 0x2d;
        dstD = a1 + (objC2 << 2);

        if (!(*(int32_t*)(uintptr_t)(a1 + (objC2 << 2) + 0x28)))
        {
            int32_t v_1c_2 = objC2;
            FX_DebrisSpawn_6(a1, a2, g_c28b44 * 0.96875.0f);
        }

        if ((*(int32_t*)(uintptr_t)(dstD + 0x28)) > (*(int32_t*)(uintptr_t)(valA + 0x1d8)) * 30.0f)
            FX_SmokeEmit_6(a1, a2);

        (*(int32_t*)(uintptr_t)(dstD + 0x28)) += 1;
    }
    else
    {
        int32_t valA6 = ((valA2 << 3) - a2) * 0x2d;
        dstD = a1 + (valA6 << 2);
        int32_t valA7 = (*(int32_t*)(uintptr_t)(a1 + (valA6 << 2) + 0x24));

        if (valA7 < 9)
        {
            if (valA7 >= 2)
            {
                (*(int32_t*)(uintptr_t)(dstD + 0x44)) = (*(int32_t*)(uintptr_t)(dstD + 0x44)) + 0.142857149.0f;
                int32_t valA11 = (*(int32_t*)(uintptr_t)(dstD + 0x24)) + 1;
                (*(int32_t*)(uintptr_t)(dstD + 0x24)) = valA11;
                return valA11;
            }

            (*(int32_t*)(uintptr_t)(dstD + 0x48)) = (*(int32_t*)(uintptr_t)(dstD + 0x48)) + 0.5.0f;
            int32_t valA9 = (*(int32_t*)(uintptr_t)(dstD + 0x24)) + 1;
            (*(int32_t*)(uintptr_t)(dstD + 0x24)) = valA9;
            return valA9;
        }

        char* objC = (*(int32_t*)(uintptr_t)(dstD + 0x2c));

        if (!*objC)
        {
            int32_t tmpD2 = (*(int32_t*)(uintptr_t)(dstD + 0x28)) + 1;
            (*(int32_t*)(uintptr_t)(dstD + 0x28)) = tmpD2;

            if (tmpD2 > (*(int32_t*)(uintptr_t)(valA + 0x1d8)) * 30.0f)
            {
                FX_SmokeEmit_6(a1, a2);
                int32_t valA21 = (*(int32_t*)(uintptr_t)(dstD + 0x24)) + 1;
                (*(int32_t*)(uintptr_t)(dstD + 0x24)) = valA21;
                return valA21;
            }
        }
        else
        {
            int32_t valA13 = (valA7 - 9) & 0x80000001;
            bool cond_2_1 = valA13;

            if (valA13 < 0)
                cond_2_1 = ((valA13 - 1) | 0xfffffffe) != 0xffffffff;

            if (!cond_2_1)
            {
                (*(int32_t*)(uintptr_t)(dstD + 0x2c)) = &objC[1];
                FX_DebrisSpawn_6(a1, a2, 229.0f);
                int32_t valA18 = (*(int32_t*)(uintptr_t)(dstD + 0x24)) + 1;
                (*(int32_t*)(uintptr_t)(dstD + 0x24)) = valA18;
                return valA18;
            }
        }
    }

    int32_t valA28 = (*(int32_t*)(uintptr_t)(dstD + 0x24)) + 1;
    (*(int32_t*)(uintptr_t)(dstD + 0x24)) = valA28;
    return valA28;
}
