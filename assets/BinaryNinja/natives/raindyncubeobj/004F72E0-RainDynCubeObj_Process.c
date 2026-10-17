// Original IGI.EXE function: RainDynCubeObj_Process (VA 0x004F72E0; static CFG gate PASS, CFG score 1.000).
#include "RainDynCubeObj_Process.h"
void* RainDynCubeObj_Process(void* context)

{
    Script_CallNativeHandler_6(context + 0x2cb8);
    Sys_ExecuteBytecode_2(*(context + 0x2b48));
    *(context + 0x2b48) = 0;
    int32_t entity_1 = 0;
    g_a76c9c -= 0x45b0;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; )
    {
        if (*i == context)
        {
            *((entity_1 << 2) + &g_a76ca4) = 0;
            return DynObj_RemoveSymbol_7(g_a44344, context, 0);
        }

        i = &i[1];
        entity_1 += 1;
    }

    return DynObj_RemoveSymbol_7(g_a44344, context, 0);
}
