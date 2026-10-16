#include "004BAFA0-Sys_OpenFileStream_26.h"
/* 0x004bafa0 Sys_OpenFileStream_26 full linked: callers=1 callees=1 */
int32_t __convention("regparm") sub_4bafa0(int32_t a1, int32_t a2, int32_t a3, void* a4, char* a5)

{
    int32_t result = a3;
    int32_t* eax_1 = *(a4 + 0x1c);
    result = 0;
    sub_4c0620(eax_1, &result, a5);
    return result;
}
