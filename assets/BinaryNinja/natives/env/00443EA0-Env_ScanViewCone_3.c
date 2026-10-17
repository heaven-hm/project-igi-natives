// Original IGI.EXE function: Env_ScanViewCone_3 (VA 0x00443EA0; static CFG gate PASS, CFG score 1.000).
#include "Env_ScanViewCone_3.h"
void* Env_ScanViewCone_3(void* context)

{
    *(context + 0x241) = 1;
    *(context + 0x242) = 1;
    *(context + 0x244) = *(g_bc2360 + 0x68);
    return context;
}
