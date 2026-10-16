#include "004B6F50-Sys_CloseFileStream_18.h"
/* 0x004b6f50 Sys_CloseFileStream_18 full linked: callers=34 callees=1 */
int32_t sub_4b6f50(int32_t* a1)

{
    int32_t result = sub_4b7930(*a1, a1[1], a1[2], a1[5], a1[6], a1[7], a1[4],
        a1[3], a1[9] | 0x40000000, a1[8]);
    return result;
}
