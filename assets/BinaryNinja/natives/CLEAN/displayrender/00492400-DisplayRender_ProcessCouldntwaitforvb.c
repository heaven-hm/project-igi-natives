// IGI native provenance: DisplayRender_ProcessCouldntwaitforvb - 0x00492400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00492400-DisplayRender_ProcessCouldntwaitforvb.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntwaitforvb.h"

int32_t DisplayRender_ProcessCouldntwaitforvb()

{
    int32_t* 5ca10c_1 = g_5ca10c;
    int32_t result = (*(*5ca10c_1 + 0x58))(5ca10c_1, 4, 0);

    if (!result)
        return result;

    void var_400;
    Game_DataSymbolLoad(&var_400, "Couldn't wait for vblank");
    int32_t var_414 = DDERR_GENERIC(result);
    void* var_418 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
