// Original IGI.EXE function: StatusMessageScreen_ClearMessages (VA 0x00485AD0; static CFG gate PASS, CFG score 0.889).
#include "StatusMessageScreen_ClearMessages.h"
void StatusMessageScreen_ClearMessages()

// Sig: void StatusMessageScreen_ClearMessages(void)
// Note: Clears all on-screen status messages. Takes no args.
{
    StatusList_Clear(*(StatusScreen_Get() + 0x4e4));
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    int32_t arg_4;
    memcpy(arg_4, &v_18, 0x18);
}
