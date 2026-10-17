// Original IGI.EXE function: DynObj_ParseConfigFile_8 (VA 0x004C6E30; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_8.h"
void* DynObj_ParseConfigFile_8(void* a1, void* a2)

{
    void* objC = *(a1 + 0x2c);

    if (!objC)
    {
        *(a2 + 0x58) = 0;
        *(a2 + 0x54) = 0;
        *(a2 + 0x50) = a1;
        *(a1 + 0x2c) = a2;
        return a2;
    }

    *(objC + 0x54) = a2;
    *(a2 + 0x58) = objC;
    *(a2 + 0x54) = 0;
    *(a2 + 0x50) = a1;
    *(a1 + 0x2c) = a2;
    return a2;
}
