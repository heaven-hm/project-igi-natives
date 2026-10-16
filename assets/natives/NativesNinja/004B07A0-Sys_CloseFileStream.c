#include "004B07A0-Sys_CloseFileStream.h"
/* 0x004b07a0 Sys_CloseFileStream full linked: callers=7 callees=0 */
int32_t sub_4b07a0(int32_t a1, int32_t a2, int32_t a3)

{
    if (a2 < 0)
        return 0xffffffff;

    if (!a3)
        return *(a1 + a2 * 0x14 + 0x10);

    return *(a1 + a2 * 0x14 + 0xc);
}
