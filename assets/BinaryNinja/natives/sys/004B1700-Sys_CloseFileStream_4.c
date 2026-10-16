#include "Sys_CloseFileStream_4.h"
int32_t Sys_CloseFileStream_4(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436c4))(objC, a1, a2, a3);
}
