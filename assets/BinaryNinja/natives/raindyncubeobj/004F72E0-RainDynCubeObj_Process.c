// Original IGI.EXE function: RainDynCubeObj_Process (VA 0x004F72E0; static CFG gate PASS, CFG score 1.000).
#include "RainDynCubeObj_Process.h"
void* RainDynCubeObj_Process(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x2cb8);
    Sys_ExecuteBytecode_2(*(a1 + 0x2b48));
    *(a1 + 0x2b48) = 0;
    int32_t objC1 = 0;
    g_a76c9c -= 0x45b0;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; )
    {
        if (*i == a1)
        {
            *((objC1 << 2) + &g_a76ca4) = 0;
            return DynObj_RemoveSymbol_7(g_a44344, a1, 0);
        }

        i = &i[1];
        objC1 += 1;
    }

    return DynObj_RemoveSymbol_7(g_a44344, a1, 0);
}
