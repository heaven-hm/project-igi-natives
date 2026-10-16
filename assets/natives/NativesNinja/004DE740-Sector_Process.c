#include "004DE740-Sector_Process.h"
/* 0x004de740 Sector_Process full linked: callers=0 callees=3 */
int32_t sub_4de740(void* a1)

{
    sub_4de040(a1);
    sub_4b0b70(a1 + 0x130);
    return QTask_FindType(*(a1 + 0xe8));
}
