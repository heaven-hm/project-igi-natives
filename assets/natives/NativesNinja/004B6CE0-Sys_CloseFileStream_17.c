#include "004B6CE0-Sys_CloseFileStream_17.h"
/* 0x004b6ce0 Sys_CloseFileStream_17 full linked: callers=34 callees=0 */
int32_t sub_4b6ce0(void* a1)

{
    int32_t eax = 0;
    eax = *(a1 + 0x14);
    return *(*(a1 + 8) + eax * 0x24 + 0xc);
}
