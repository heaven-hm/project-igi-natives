// Original IGI.EXE function: Gun_Update (VA 0x00478970; static CFG gate PASS, CFG score 1.000).
#include "Gun_Update.h"
void* Gun_Update(void* context)

{
    if (!*(context + 0x144))
    {
        void* result = *(context + 0x128);

        if (*(result + 0x618) == 5)
            return result;
    }

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(context, 0);
}
