#include "004898D0-AI_TestCandidate.h"
/* 0x004898d0 AI_TestCandidate full linked: callers=1 callees=3 */
int32_t sub_4898d0(void* a1, void* a2, double* a3, double* a4, float a5)

{
    if (!*(a2 + 0x10))
    {
        long double x87_r0;
        long double x87_r1;
        long double x87_r2;

        if (!sub_489960(x87_r0, x87_r1, x87_r2, a4, a3))
        {
            *(a2 + 0x28) = 0;
            *(a2 + 0x29) = 0;
        }
        else
            *(a2 + 0x28) = 1;

        *(a2 + 0x10) = *(a1 + 4) + 1;
    }

    if (*(a2 + 0x28))
    {
        if (!*(a2 + 0x14))
        {
            *(a2 + 0x29) = sub_489b20(a5, a4, **(a2 + 8), a3);
            *(a2 + 0x14) = *(a1 + 8) + 1;
        }

        *(a2 + 0x14) -= 1;
    }

    *(a2 + 0x10) -= 1;
🚫🚫    int32_t result = sub_4b32b0(a4, a3);
    /* unimplemented  {call sub_4b32b0} */
🚫🚫🚫    *(a2 + 0x20) = /* *(a2 + 0x20) = unimplemented  {fstp qword [esi+0x20], st0} */;
    /* unimplemented  {fstp qword [esi+0x20], st0} */
    return result;
}
