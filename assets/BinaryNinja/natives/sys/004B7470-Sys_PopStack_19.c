// Original IGI.EXE function: Sys_PopStack_19 (VA 0x004B7470; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_19.h"
void* Sys_PopStack_19(void* a1)

{
    if (a1)
    {
        void* valA1 = *(a1 + 0xc);

        if (valA1)
            return valA1 + a1;
    }

    return 0;
}
