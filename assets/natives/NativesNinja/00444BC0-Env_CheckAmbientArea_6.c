#include "00444BC0-Env_CheckAmbientArea_6.h"
/* 0x00444bc0 Env_CheckAmbientArea_6 full linked: callers=3 callees=0 */
void* sub_444bc0(void* a1)

{
    char ecx = *(a1 + 0x1c4);
    *(a1 + 0x1c4) = 1;
    *(a1 + 0x1c5) = ecx;
    *(a1 + 0x1c8) = *(g_bc2360 + 0x68);
    return a1;
}
