#include "004FAFE0-Graph_Cleanup.h"
/* 0x004fafe0 Graph_Cleanup full linked: callers=0 callees=2 */
int32_t __convention("regparm") sub_4fafe0(int32_t a1, int32_t a2, int32_t a3, int32_t* a4)

{
    int32_t var_4 = a3;
    var_4 = 0xffffffff;
    sub_4f9cd0(a4, &var_4, 0);
    int32_t eax = var_4;

    if (eax == 0xffffffff)
    {
        g_a77398 = 0;
        return eax;
    }

    int32_t eax_1 = sub_4ce400(g_a44344, eax);
    g_a77398 = eax_1;
    return eax_1;
}
