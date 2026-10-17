// Original IGI.EXE function: Display_SyncVSync_14 (VA 0x00497860; static CFG gate FAIL, CFG score 0.667).
#include "Display_SyncVSync_14.h"
int32_t Display_SyncVSync_14(void* context)

{
    return (*((*(context + 4) << 2) + &g_a94e84))(context);
}
