// Original IGI.EXE function: GunClip_OnEvent (VA 0x004778E0; static CFG gate PASS, CFG score 1.000).
#include "GunClip_OnEvent.h"
int32_t GunClip_OnEvent(void* context, int32_t param_2)

{
    void* dest_val = *(*(context + 0x14) + 0x20);
    int32_t result = SoundSys_SetFrequency_9();

    if (*(dest_val + 0x138) < result - 1)
        *(context + 0x13c) = 0xffffffff;
    else
    {
        if (*(context + 0x13c) == 0xffffffff)
            *(context + 0x13c) = result;

        result -= *(context + 0x13c);

        if (!(result & 1))
        {
            uint32_t data_2 = Sys_FreeMemory_14(Level_StartMission_5(), 3);
            int32_t item_18 = 0;
            int32_t item_14 = 4;
            int32_t item_10 = 7;
            Sys_FreeMemory_12(context + 0x70, context + 0x70, (&item_18)[data_2] * 0.0174532924f);
            int32_t item_c = param_2;
            int32_t item_8 = param_2 + 0x18;
            void* item_4 = context;
            uint32_t data_6 = MagicObj_GetEventId();
            int32_t data_7 = 0;
            data_7 = *(context + 0x1c);
            int32_t data_8 = *(((data_6 * 0x180 + data_7) << 2) + &g_a96ae0);

            if (data_8)
                data_8(context, &item_c);

            return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(context, 0);
        }
    }

    return result;
}
