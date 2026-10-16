#include "gi_platform.h"
#include "004B8C10-Break_Script.h"
int32_t Break_Script(int32_t a1)

// Sig: void Break_Script()
// Note: Breaks/aborts the currently-executing script at this point (70-byte
// function). Takes no args. Use as an early-exit inside .qsc scripts.
{
    g_a965a4 = 1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
