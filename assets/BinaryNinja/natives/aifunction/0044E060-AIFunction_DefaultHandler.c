// Original IGI.EXE function: AIFunction_DefaultHandler (VA 0x0044E060; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_DefaultHandler.h"
int32_t AIFunction_DefaultHandler(int32_t context)

// Sig: void AIFunction_DefaultHandler()
// Note: The default AI event handler: call this for any AIEVENT_* your script
// does not handle explicitly (retail template shows it as the else-branch
// body). Takes no args. Put inside every event if-else chain as fallback.
{
    Qvm_Execute(*((*((*(g_5bda58 + 0x3d38) << 2) + &g_53c94c) << 2) + &g_58a9f4));
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
