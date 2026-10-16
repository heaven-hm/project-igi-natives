#include "gi_platform.h"
#include "004B7490-Sys_ResolveSymbol_19.h"
void* Sys_ResolveSymbol_19(void* a1)

{
    if (a1)
    {
        int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));

        if (tmpD1)
        {
            int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 8));
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
