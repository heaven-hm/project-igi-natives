#include "gi_platform.h"
#include "004BBF40-Sys_FreeMemory_27.h"
int32_t Sys_FreeMemory_27(int32_t a1, int32_t* a2)

{
    return Sys_CloseFileStream_4(a2, a1 * 0x14 + &g_a43ee0, 0x13);
}
