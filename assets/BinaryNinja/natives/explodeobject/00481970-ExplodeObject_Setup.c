// Original IGI.EXE function: ExplodeObject_Setup (VA 0x00481970; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Setup.h"
void* ExplodeObject_Setup(int80_t a1 @ fp0, double* a2)

{
    int32_t* i = a2[1];
    void* result;

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA3;

            if (!srcS1)
                valA3 = nullptr;
            else
            {
                int32_t valA = *srcS1;
                int32_t valA1 = -(valA);
                valA3 = (valA1 - valA1) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA3;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA4 = 0;
            g_afa7e0 = tmpD2;
            valA4 = i[7];
            result = *((valA4 << 2) + &g_a970e0);

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

    result = a2[0x32];

    if (!result)
    {
        if (Script_FormatString_6(a2 + 0x194))
        {
            Script_SpawnNewTask_7(a2 + 0x194, a2);
            *(a2 + 0x1e4) = a1;
        }

        if (*(a2 + 0x1e4) || !*(a2 + 0x1f4))
        {
            FX_1009011(a2);
            result = DynObj_Missing(&a2[0x30]);

            if (result)
                goto label_481a3c;
        }
        else
        {
        label_481a3c:
            result = *(a2 + 0x1f4);

            if (result > 0)
            {
                result -= 1;
                *(a2 + 0x1f4) = result;
            }
        }
    }

    return result;
}
