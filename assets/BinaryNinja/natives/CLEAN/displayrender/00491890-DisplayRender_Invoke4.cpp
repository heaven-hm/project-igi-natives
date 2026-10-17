// IGI native provenance: DisplayRender_Invoke4 - 0x00491890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491890-DisplayRender_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke4.h"

int32_t DisplayRender_Invoke4(PSTR arg1)

{
    void var_11c;
    __builtin_memcpy(&var_11c, 0xc28b40, 0x11c);

    if (g_5ca02c)
        Display_OpenDevice_4(0);

    Display_RestoreDevice_16(arg1);
    char 5ca02c_1 = g_5ca02c;

    if (!5ca02c_1)
        return 5ca02c_1;

    return Display_SetMode(&var_11c);
}
