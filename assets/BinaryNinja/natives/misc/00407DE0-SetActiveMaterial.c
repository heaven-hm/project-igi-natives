// Original IGI.EXE function: SetActiveMaterial (VA 0x00407DE0; static CFG gate FAIL, CFG score 0.833).
#include "SetActiveMaterial.h"
int32_t SetActiveMaterial(int32_t a1, float a2 @ 0xc)

// Sig: unknown SetActiveMaterial(unknown param1, unknown param2)
// Note: Registered at 0x407DA6 via registrar 0x4B8890 (push 0x407DE0 +
// 'SetActiveMaterial'), argc bounds push pair (0, -1) observed. Sets active
// material: reads param, calls fcn.004017C0-family init and stores through
// globals near 0x538518-0x53851A region.  Verified: r2 forced-analysis
// confirmed exact start (size 80); P3 byte-level name<->address binding at
// registrar callsite 0x407DA6 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=3864a4bd701c54dbda08164ffcb568244d07b4261f187408ffaf2e6694b65e70;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    g_53851c = Script_GetArg(a2, 0);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
