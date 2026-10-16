#include "005235A0-Light_CalculateAttenuation_2.h"
/* 0x005235a0 Light_CalculateAttenuation_2 full linked: callers=1 callees=5 */
int32_t sub_5235a0(void* a1)

{
    int32_t ebx = 0;

    while (true)
    {
        int32_t var_110_1 = ebx;
        void* var_114_1 = &g_54f098;
        int32_t edi_1 = 0;
        char var_100[0x100];
        Game_DataSymbolLoad(&var_100, "%s%05d");
        g_a83978 = 0;
        g_a83b24 = &var_100;
        sub_5210c0();
        sub_4b1420(0xa83a20, sub_523420, nullptr);
        int32_t i = 0;

        if (g_a83a08 > 0)
        {
            do
            {
                if (sub_4a5bb0(*(*(g_a83a04 + (i << 2)) * g_a83a10 + g_a83a00) + 0x78,
                    &var_100))
                {
                    edi_1 = 1;
                    break;
                }

                i += 1;
            } while (i < g_a83a08);
        }

        if (!g_a83978 && !edi_1)
        {
            int32_t var_110_3 = ebx;
            void* var_114_3 = &g_54f098;
            return Game_DataSymbolLoad(a1 + 0x78, "%s%05d");
        }

        ebx += 1;
    }
}
