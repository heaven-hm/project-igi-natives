#include "0051EE10-MipMapControl_LoadParameters.h"
/* 0x0051ee10 MipMapControl_LoadParameters full linked: callers=0 callees=5 */
int32_t sub_51ee10(void* a1)

{
    int32_t eax = sub_4950e0();
    int32_t result = sub_4b0f80();

    if (result == eax)
    {
        int32_t* eax_1 = g_5ca114;
        result = (*(*eax_1 + 0x94))(eax_1, 0, 0x13, *(a1 + 0x20));

        if (result)
        {
            void var_400;
            Game_DataSymbolLoad(&var_400, "Couldn't set texturestagestate");
            int32_t var_414_2 = sub_492be0(result);
            void* var_418 = &var_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    return result;
}
