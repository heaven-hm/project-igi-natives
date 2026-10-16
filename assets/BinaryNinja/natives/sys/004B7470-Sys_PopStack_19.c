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
