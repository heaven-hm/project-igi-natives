// IGI native provenance: DisplayRender_ProcessCouldntsetrender - 0x00493A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00493A60-DisplayRender_ProcessCouldntsetrender.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntsetrender.h"

int32_t DisplayRender_ProcessCouldntsetrender()

{
    int32_t* 5ca114_1 = g_5ca114;
    int32_t result = (*(*5ca114_1 + 0x50))(5ca114_1, 0x88, 1);

    if (!result)
        return result;

    void var_400;
    Game_DataSymbolLoad(&var_400, "Couldn't set renderstate");
    int32_t var_414 = DDERR_GENERIC(result);
    void* var_418 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
