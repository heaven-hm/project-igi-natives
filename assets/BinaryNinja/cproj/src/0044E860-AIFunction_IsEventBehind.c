#include "gi_platform.h"
#include "0044E860-AIFunction_IsEventBehind.h"
int32_t AIFunction_IsEventBehind(int32_t a1)

// Sig: int AIFunction_IsEventBehind()
// Note: RETURNS non-zero if the current event came from BEHIND the AI
// (direction test used for reaction animations). Takes no script args per
// retail table (engine reads an internal slot via flagP+8). Use in
// alert/detection handlers.
{
    int32_t* i_1 = **&g_5bda60;
    int32_t* i = *i_1;
    int32_t v_20;

    if (i)
    {
        void* tmpD1 = g_5bda58;

        do
        {
            long double x87_r4_3 = *(tmpD1 + 0x94) * (*(i_1 + 0x20) - *(tmpD1 + 0x48))
                + *(tmpD1 + 0x7c) * (*(i_1 + 0x10) - *(tmpD1 + 0x38));
            long double x87_r4_4 = x87_r4_3 + *(tmpD1 + 0x88) * (*(i_1 + 0x18) - *(tmpD1 + 0x40));
            long double f0_1 = 0.0;
            x87_r4_4 - f0_1;

            if (*(&((x87_r4_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r4_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                v_20 = 1;
                int32_t v_18_1 = 0;
                int32_t v_14_1 = 0x3ff00000;
                char* v_10_1 = &g_567c74;
                memcpy(a1, &v_20, 0x18);
                return a1;
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    v_20 = 0;
    int32_t v_18 = 0;
    int32_t v_14 = 0;
    char* v_10 = &g_567c74;
    memcpy(a1, &v_20, 0x18);
    return a1;
}
