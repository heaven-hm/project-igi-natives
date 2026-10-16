#include "0048FFA0-FX_DebrisSpawn_27.h"
/* 0x0048ffa0 FX_DebrisSpawn_27 full linked: callers=1 callees=1 */
int32_t* sub_48ffa0()

{
    int32_t* ecx_1 = g_5c8e14;

    if (ecx_1)
    {
        int32_t* eax_1 = g_5c8e1c;

        if (eax_1)
        {
            (*(*eax_1 + 0x20))(eax_1);
            int32_t* eax_2 = g_5c8e1c;
            (*(*eax_2 + 8))(eax_2);
            ecx_1 = g_5c8e14;
            g_5c8e1c = 0;
        }

        (*(*ecx_1 + 8))(ecx_1);
        g_5c8e14 = 0;
    }

    return sub_48f4f0(sub_48fed0);
}
