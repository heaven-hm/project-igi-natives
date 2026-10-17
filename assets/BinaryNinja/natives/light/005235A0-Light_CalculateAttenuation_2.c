// Original IGI.EXE function: Light_CalculateAttenuation_2 (VA 0x005235A0; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_2.h"
int32_t Light_CalculateAttenuation_2(void* a1)

{
    int32_t ctxB = 0;

    while (true)
    {
        int32_t v_110_1 = ctxB;
        void* v_114_1 = &g_54f098;
        int32_t dstD1 = 0;
        char v_100[0x100];
        Game_DataSymbolLoad(&v_100, "%s%05d");
        g_a83978 = 0;
        g_a83b24 = &v_100;
        Light_Lightmaps();
        Sys_IllegalDeviceNameInP(0xa83a20, sub_523420, nullptr);
        int32_t i = 0;

        if (g_a83a08 > 0)
        {
            do
            {
                if (Camera_UpdateViewCone_6(*(*(g_a83a04 + (i << 2)) * g_a83a10 + g_a83a00) + 0x78,
                    &v_100))
                {
                    dstD1 = 1;
                    break;
                }

                i += 1;
            } while (i < g_a83a08);
        }

        if (!g_a83978 && !dstD1)
        {
            int32_t v_110_3 = ctxB;
            void* v_114_3 = &g_54f098;
            return Game_DataSymbolLoad(a1 + 0x78, "%s%05d");
        }

        ctxB += 1;
    }
}
