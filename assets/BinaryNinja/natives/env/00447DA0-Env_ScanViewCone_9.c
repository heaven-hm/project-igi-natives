// Original IGI.EXE function: Env_ScanViewCone_9 (VA 0x00447DA0; static CFG gate PASS, CFG score 1.000).
#include "Env_ScanViewCone_9.h"
void* Env_ScanViewCone_9(void* context)

{
    *(context + 0x290) ^= 1;
    return context;
}
