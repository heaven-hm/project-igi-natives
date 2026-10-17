// IGI native provenance: DisplayRender_ProcessCouldntclearscre - 0x00492450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00492450-DisplayRender_ProcessCouldntclearscre.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntclearscre.h"

int32_t* DisplayRender_ProcessCouldntclearscre()

{
    int32_t* 5ca114_1 = g_5ca114;

    if (5ca114_1)
    {
        5ca114_1 = (*(*5ca114_1 + 0x28))(5ca114_1, 0, 0, 3,
            (((g_bcadf0 << 8) + g_bcadf4) << 8) + g_bcadf8, 0x3f800000, 0);

        if (5ca114_1)
        {
            void var_400;
            Game_DataSymbolLoad(&var_400, "Couldn't clear screen");
            int32_t var_414 = DDERR_GENERIC(5ca114_1);
            void* var_418 = &var_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    return 5ca114_1;
}
