// Original IGI.EXE function: SlideBar_Update (VA 0x0041F5A0; static CFG gate PASS, CFG score 1.000).
#include "SlideBar_Update.h"
int32_t* SlideBar_Update(void* context, int32_t param_2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(context, param_2);

    if (param_2)
        *(context + 0x44) = param_2;

    *(context + 0x54) = 0;
    *(context + 0x94) = 0;
    *(context + 0xac) = 0x32;
    *(context + 0xb4) = 1;
    *(context + 0x98) = Menu_LeaveMenus_11(0);
    struct status_msg* data_4 = Menu_LeaveMenus_11(0);
    int32_t entity_val = *(context + 0x44);
    *(context + 0x9c) = data_4;
    *(*(context + 0x98) + 0x44) = entity_val;
    *(*(context + 0x9c) + 0x44) = *(context + 0x44);
    *(*(context + 0x9c) + 0x40) = 0;
    *(*(context + 0x98) + 0x40) = 0;
    *(*(context + 0x9c) + 0x3c) = 0;
    *(*(context + 0x98) + 0x3c) = 0;
    *(context + 0x20) = 0x12c;
    *(context + 0x24) = 0xe6;
    *(context + 0x3c) = 1;
    *(context + 0x40) = 1;
    Script_ExecuteLevelScript_6(context + 0xb8);
    Script_ExecuteLevelScript_6(context + 0x108);
    Script_ExecuteLevelScript_6(context + 0x158);
    Script_ExecuteLevelScript_6(context + 0x1a8);
    int32_t* result = Script_ExecuteLevelScript_6(context + 0x1f8);
    *(context + 0xa0) = 0;
    *(context + 0xb5) = 0;
    *(context + 0xa8) = 0x3d4ccccd;
    *(context + 0x248) = 0;
    *(context + 0xa4) = 0;
    return result;
}
