#include "004663B0-AI_TakeCover_24.h"
/* 0x004663b0 AI_TakeCover_24 full linked: callers=4 callees=0 */
void* sub_4663b0(void* a1)

{
    *(a1 + 0x70) = (*(a1 + 0x70) & 0xfffffffd) | 1;
    *(a1 + 0x20) = 0;
    *(a1 + 0x40) = 0;
    return a1;
}
