#include "004B1FC0-Sys_DispatchOpcode_7.h"
/* 0x004b1fc0 Sys_DispatchOpcode_7 full linked: callers=1 callees=2 */
int32_t sub_4b1fc0(void* a1)

{
    int32_t* eax = QFile_ReadWrite(a1, "r");

    if (!eax)
        return 0;

    sub_4b1690(eax);
    return 1;
}
