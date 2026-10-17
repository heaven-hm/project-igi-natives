// Original IGI.EXE function: Sys_ResolveSymbol_19 (VA 0x004B7490; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_19.h"
void* Sys_ResolveSymbol_19(void* a1)

{
    if (a1)
    {
        int32_t tmpD1 = *(a1 + 4);

        if (tmpD1)
        {
            int32_t valA1 = *(a1 + 8);
            int32_t objC2 = ~(valA1 - 1);

            if ((objC2 & valA1) != valA1)
                g_a43e5c = 1;
            else
            {
                void* valA3 = (valA1 + 0x13) & objC2;

                if (valA3 < tmpD1)
                    return valA3 + a1;
            }
        }
    }

    return 0;
}
