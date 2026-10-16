#include "0044E860-AIFunction_IsEventBehind.h"
/* 0x0044e860 AIFunction_IsEventBehind full linked: callers=0 callees=2 */
int32_t AIFunction_IsEventBehind(int32_t a1)

// Sig: int AIFunction_IsEventBehind()
// Note: RETURNS non-zero if the current event came from BEHIND the AI
// (direction test used for reaction animations). Takes no script args per
// retail table (engine reads an internal slot via ebp+8). Use in
// alert/detection handlers.
{
    int32_t* i_1 = **&g_5bda60;
    int32_t* i = *i_1;
    int32_t var_20;

    if (i)
    {
        struct ai_ctx* edx_1 = g_5bda58;

        do
        {
            long double x87_r4_3 = edx_1->pad[0x94] * (*(i_1 + 0x20) - edx_1->pad[0x48])
                + edx_1->pad[0x7c] * (*(i_1 + 0x10) - edx_1->pad[0x38]);
            long double x87_r4_4 = x87_r4_3 + edx_1->pad[0x88] * (*(i_1 + 0x18) - edx_1->pad[0x40]);
            long double temp0_1 = 0.0;
            x87_r4_4 - temp0_1;

            if (*(&((x87_r4_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r4_4 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                var_20 = 1;
                int32_t var_18_1 = 0;
                int32_t var_14_1 = 0x3ff00000;
                char* var_10_1 = &g_567c74;
                memcpy(a1, &var_20, 0x18);
                return a1;
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    var_20 = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    char* var_10 = &g_567c74;
    memcpy(a1, &var_20, 0x18);
    return a1;
}
