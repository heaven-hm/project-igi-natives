// Original IGI.EXE function: GunClip_OnEvent (VA 0x004778E0; static CFG gate PASS, CFG score 1.000).
#include "GunClip_OnEvent.h"
int32_t GunClip_OnEvent(void* a1, int32_t a2)

{
    void* dstD = *(*(a1 + 0x14) + 0x20);
    int32_t result = SoundSys_SetFrequency_9();

    if (*(dstD + 0x138) < result - 1)
        *(a1 + 0x13c) = 0xffffffff;
    else
    {
        if (*(a1 + 0x13c) == 0xffffffff)
            *(a1 + 0x13c) = result;

        result -= *(a1 + 0x13c);

        if (!(result & 1))
        {
            uint32_t valA2 = Sys_FreeMemory_14(Level_StartMission_5(), 3);
            int32_t v_18 = 0;
            int32_t v_14 = 4;
            int32_t v_10 = 7;
            Sys_FreeMemory_12(a1 + 0x70, a1 + 0x70, (&v_18)[valA2] * 0.0174532924f);
            int32_t v_c = a2;
            int32_t v_8 = a2 + 0x18;
            void* v_4 = a1;
            uint32_t valA6 = MagicObj_GetEventId();
            int32_t valA7 = 0;
            valA7 = *(a1 + 0x1c);
            int32_t valA8 = *(((valA6 * 0x180 + valA7) << 2) + &g_a96ae0);

            if (valA8)
                valA8(a1, &v_c);

            return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(a1, 0);
        }
    }

    return result;
}
