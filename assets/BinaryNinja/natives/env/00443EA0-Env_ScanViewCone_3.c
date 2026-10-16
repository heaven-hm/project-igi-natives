#include "Env_ScanViewCone_3.h"
void* Env_ScanViewCone_3(void* a1)

{
    *(a1 + 0x241) = 1;
    *(a1 + 0x242) = 1;
    *(a1 + 0x244) = *(g_bc2360 + 0x68);
    return a1;
}
