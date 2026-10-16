#include "AIFunction_DefaultHandler.h"
int32_t AIFunction_DefaultHandler(int32_t a1)

// Sig: void AIFunction_DefaultHandler()
// Note: The default AI event handler: call this for any AIEVENT_* your script
// does not handle explicitly (retail template shows it as the else-branch
// body). Takes no args. Put inside every event if-else chain as fallback.
{
    Qvm_Execute(*((*((*(g_5bda58 + 0x3d38) << 2) + &g_53c94c) << 2) + &g_58a9f4));
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
