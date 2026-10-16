#include "0045E3E0-Human_Action.h"
/* 0x0045e3e0 Human_Action full linked: callers=0 callees=5 */
void sub_45e3e0(void* a1, char* a2)

{
    if (a1 != *(a2 + 4) && a1 != *(a2 + 8) && a1 != *(a2 + 0xc))
    {
        if (!sub_463150(a1))
        {
            void* eax_5 = *(a2 + 0xc);
            bool cond:0_1;

            if (eax_5)
                cond:0_1 = sub_463130(eax_5) == sub_463130(a1);

            if (!eax_5 || !cond:0_1)
            {
                *a2 = 1;
                return;
            }
        }
        else
        {
            long double st0_1 = sub_4b4770(Level_SetMission_5());
            long double temp0_1 = *(a2 + 0x10);
            st0_1 - temp0_1;

            if (*(&((st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                | (st0_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *a2 = 1;
                return;
            }
        }
    }

    *a2 = 0;
}
