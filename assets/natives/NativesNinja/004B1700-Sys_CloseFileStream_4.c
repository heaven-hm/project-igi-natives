#include "004B1700-Sys_CloseFileStream_4.h"
/* 0x004b1700 Sys_CloseFileStream_4 full linked: callers=84 callees=0 */
int32_t sub_4b1700(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t ecx = *a1;
    return (*(ecx * 0x8c + &g_9436c4))(ecx, a1, a2, a3);
}
