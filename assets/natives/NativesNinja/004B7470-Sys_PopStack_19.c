#include "004B7470-Sys_PopStack_19.h"
/* 0x004b7470 Sys_PopStack_19 full linked: callers=16 callees=0 */
void* sub_4b7470(void* a1)

{
    if (a1)
    {
        void* eax_1 = *(a1 + 0xc);

        if (eax_1)
            return eax_1 + a1;
    }

    return 0;
}
