// Original IGI.EXE function: Display_GetDDErrStr (VA 0x00492B70; static CFG gate PASS, CFG score 1.000).
#include "Display_GetDDErrStr.h"

int32_t __stdcall Display_GetDDErrStr(void* pThis, char* param)

{
    int32_t eax = *(pThis + 4);

    if ((eax & 0x4400) == 0x4400)
    {
        int32_t status = *(pThis + 0xc);
        char* result = param;
        Game_DataSymbolLoad(param, "%s    %d bits z and stencil\n");
        return 1;
    }

    if ((eax & 0x400) == 0x400)
    {
        int32_t status = *(pThis + 0xc);
        char* result = param;
        Game_DataSymbolLoad(param, "%s    %d bits z\n");
    }

    return 1;
}
