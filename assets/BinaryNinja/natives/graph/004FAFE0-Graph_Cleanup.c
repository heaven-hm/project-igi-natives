// Original IGI.EXE function: Graph_Cleanup (VA 0x004FAFE0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Cleanup.h"
int32_t __convention("regparm") Graph_Cleanup(int32_t a1, int32_t a2, int32_t a3, int32_t* a4)

{
    int32_t v_4 = a3;
    v_4 = 0xffffffff;
    Script_ParseEnumString_24(a4, &v_4, 0);
    int32_t valA = v_4;

    if (valA == 0xffffffff)
    {
        g_a77398 = 0;
        return valA;
    }

    int32_t valA1 = DynObj_RemoveSymbol_11(g_a44344, valA);
    g_a77398 = valA1;
    return valA1;
}
