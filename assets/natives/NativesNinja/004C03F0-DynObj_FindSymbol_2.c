#include "004C03F0-DynObj_FindSymbol_2.h"
/* 0x004c03f0 DynObj_FindSymbol_2 full linked: callers=1 callees=3 */
void sub_4c03f0(int32_t* a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t* ebx = nullptr;
    int32_t var_4 = 0;

    if (a1[1] <= 0)
        return;

    bool cond:0_1;

    do
    {
        int32_t* i_1 = *(ebx + *a1);

        for (int32_t* i = *i_1; i; i = *i)
        {
            sub_4af960(i_1);
            void* eax_2 = i_1[3];

            if (eax_2)
            {
                sub_4b0d10(eax_2);
                i_1[3] = 0;
            }

            sub_4b0d10(i_1);
            i_1 = i;
        }

        ebx = &ebx[3];
        cond:0_1 = var_4 + 1 < a1[1];
        var_4 += 1;
    } while (cond:0_1);
}
