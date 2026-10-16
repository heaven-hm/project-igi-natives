#include "Sys_CloseFileStream.h"
int32_t Sys_CloseFileStream(int32_t a1, int32_t a2, int32_t a3)

{
    if (a2 < 0)
        return 0xffffffff;

    if (!a3)
        return *(a1 + a2 * 0x14 + 0x10);

    return *(a1 + a2 * 0x14 + 0xc);
}
