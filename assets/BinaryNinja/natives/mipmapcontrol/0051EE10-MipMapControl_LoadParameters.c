// Original IGI.EXE function: MipMapControl_LoadParameters (VA 0x0051EE10; static CFG gate PASS, CFG score 1.000).
#include "MipMapControl_LoadParameters.h"
int32_t MipMapControl_LoadParameters(void* a1)

{
    int32_t valA = Display_CheckCapabilities_7();
    int32_t result = Sys_ReadFileBlock_3();

    if (result == valA)
    {
        int32_t* valA1 = g_5ca114;
        result = (*(*valA1 + 0x94))(valA1, 0, 0x13, *(a1 + 0x20));

        if (result)
        {
            void v_400;
            Game_DataSymbolLoad(&v_400, "Couldn't set texturestagestate");
            int32_t v_414_2 = DDERR_GENERIC(result);
            void* v_418 = &v_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    return result;
}
