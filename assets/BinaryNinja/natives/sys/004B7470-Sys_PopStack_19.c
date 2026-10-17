// Original IGI.EXE function: Sys_PopStack_19 (VA 0x004B7470; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_19.h"
void* Sys_PopStack_19(void* context)

{
    if (context)
    {
        void* data_1 = *(context + 0xc);

        if (data_1)
            return data_1 + context;
    }

    return 0;
}
