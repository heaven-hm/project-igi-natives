#include "gi_platform.h"
#include "0042BFA0-Afterburner_Setup.h"
int32_t Afterburner_Setup(float a1)

{
    float srcS = a1;
    void* objC = (*(int32_t*)(uintptr_t)(srcS + 0x130));
    long double fpu7 = *(objC + 0x720);
    long double f1 = 0.810000002.0f;
    fpu7 - f1;
    long double x87_r7_3;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_3 = 0.0f;
    else
        x87_r7_3 = (*(objC + 0x720) - 0.810000002.0f) * 2.27272725.0f;

    long double f2 = (*(int32_t*)(uintptr_t)(srcS + 0x138));
    x87_r7_3 - f2;

    if (!(*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        (*(int32_t*)(uintptr_t)(srcS + 0x138)) = (*(int32_t*)(uintptr_t)(srcS + 0x138)) * 0.980000019.0f + x87_r7_3 * 0.0199999809.0f;

    long double x87_r7_8 = (*(int32_t*)(uintptr_t)(srcS + 0x138)) * 1.39999998.0f;
    long double x87_r6_5 = 1.0f;
    x87_r6_5 - x87_r7_8;

    a1 = *(&((x87_r6_5 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? x87_r7_8 : 1.0f;

    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_14(&g_57bd00);
    int32_t* i = (*(int32_t*)(uintptr_t)(srcS + 8));
    (*(int32_t*)(uintptr_t)(srcS + 0x9c)) = fp0 * 0.200000003.0f + a1;

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            result = *((valA5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
