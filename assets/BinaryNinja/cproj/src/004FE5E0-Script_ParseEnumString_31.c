#include "gi_platform.h"
#include "004FE5E0-Script_ParseEnumString_31.h"
int32_t Script_ParseEnumString_31(void* a1, int32_t a2)

{
    int32_t i = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0xf0)) > 0)
    {
        do
        {
            void* tmpD2 = (*(int32_t*)(uintptr_t)(*(a1 + 0x6c) + (i << 2)));
            i += 1;
            *(tmpD2 + 0x30) = a2;
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0xf0)));
    }

    return i;
}
