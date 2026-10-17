// Original IGI.EXE function: Display_SetDisplayMode (VA 0x004902F0; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode.h"
int32_t* Display_SetDisplayMode()

{
    int32_t* entity_1 = g_5c8e28;

    if (entity_1)
    {
        int32_t* data_1 = g_5c8e24;

        if (data_1)
        {
            (*(*data_1 + 0x20))(data_1);
            int32_t* data_2 = g_5c8e24;
            (*(*data_2 + 8))(data_2);
            entity_1 = g_5c8e28;
            g_5c8e24 = 0;
        }

        (*(*entity_1 + 8))(entity_1);
        g_5c8e28 = 0;
    }

    return FX_UnableToRemoveWinpro(sub_490120);
}
