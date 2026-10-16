#include "00485AD0-StatusMessageScreen_ClearMessages.h"
/* 0x00485ad0 StatusMessageScreen_ClearMessages full linked: callers=0 callees=3 */
void StatusMessageScreen_ClearMessages()

// Sig: void StatusMessageScreen_ClearMessages(void)
// Note: Clears all on-screen status messages. Takes no args.
{
    StatusList_Clear(*(StatusScreen_Get() + 0x4e4));
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    int32_t arg_4;
    memcpy(arg_4, &var_18, 0x18);
}
