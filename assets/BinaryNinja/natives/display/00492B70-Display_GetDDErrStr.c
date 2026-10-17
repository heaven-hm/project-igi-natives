// IGI native provenance: Display_GetDDErrStr - 0x00492B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00492B70-Display_GetDDErrStr.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_GetDDErrStr.h"

int32_t __stdcall Display_GetDDErrStr(void* pThis, char* param)

{
    int32_t result_val = *(pThis + 4);

    if ((result_val & 0x4400) == 0x4400)
    {
        int32_t status = *(pThis + 0xc);
        char* result = param;
        Game_DataSymbolLoad(param, "%s    %d bits z and stencil\n");
        return 1;
    }

    if ((result_val & 0x400) == 0x400)
    {
        int32_t status = *(pThis + 0xc);
        char* result = param;
        Game_DataSymbolLoad(param, "%s    %d bits z\n");
    }

    return 1;
}
