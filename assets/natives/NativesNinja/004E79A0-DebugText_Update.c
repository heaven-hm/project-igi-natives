#include "004E79A0-DebugText_Update.h"
/* 0x004e79a0 DebugText_Update full linked: callers=1 callees=9 */
int32_t* sub_4e79a0()

{
    if (g_a5ea74)
    {
        int32_t esi_1 = QHash_ValueGet();

        if (!esi_1)
            QHash_ValueSet();

        if (g_5488d8)
        {
            int32_t var_18 = 0;
            int32_t var_14_1 = 0;
            float var_10_1 = g_c28b44;
            float var_c_1 = g_c28b48;
            sub_497680(0xa5eb80, &var_18);
        }

        int32_t* eax_2 = sub_4b7000("LOCAL:debug.fnt");
        g_a5ebd4 = eax_2;
        void* eax_3 = g_a5ebd0;
        **&g_a5ebd0 = sub_4b7630(*(eax_3 + 0x10), *(eax_3 + 0x14), eax_2);
        g_a5ea74 = 0;

        if (!esi_1)
            sub_4b0d50();
    }

    return sub_4e7690(g_a5ebd0);
}
