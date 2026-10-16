#include "gi_platform.h"
#include "00478970-Gun_Update.h"
void* Gun_Update(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x144)))
    {
        void* result = (*(int32_t*)(uintptr_t)(a1 + 0x128));

        if (*(result + 0x618) == 5)
            return result;
    }

    return ((int(*)())(uintptr_t)(*((DynObj_LookupHashItem_5() << 2) + &g_a982e0)))(a1, 0);
}
