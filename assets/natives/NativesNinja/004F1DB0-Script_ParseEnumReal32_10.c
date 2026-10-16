#include "004F1DB0-Script_ParseEnumReal32_10.h"
/* 0x004f1db0 Script_ParseEnumReal32_10 full linked: callers=8 callees=3 */
void* sub_4f1db0(void* a1, char* a2)

{
    int32_t* eax = Mem_Alloc(0x480c, 4);
    eax[0x1202] = a2;
    eax[1] = 0;
    *eax = 0;
    sub_4af9d0(&eax[2], &eax[0xa02], a2);
    return sub_4af8f0(a1, eax);
}
