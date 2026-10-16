#include "004C6E30-DynObj_ParseConfigFile_8.h"
/* 0x004c6e30 DynObj_ParseConfigFile_8 full linked: callers=1 callees=0 */
void* sub_4c6e30(void* a1, void* a2)

{
    void* ecx = *(a1 + 0x2c);

    if (!ecx)
    {
        *(a2 + 0x58) = 0;
        *(a2 + 0x54) = 0;
        *(a2 + 0x50) = a1;
        *(a1 + 0x2c) = a2;
        return a2;
    }

    *(ecx + 0x54) = a2;
    *(a2 + 0x58) = ecx;
    *(a2 + 0x54) = 0;
    *(a2 + 0x50) = a1;
    *(a1 + 0x2c) = a2;
    return a2;
}
