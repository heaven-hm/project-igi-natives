#include "gi_platform.h"
#include "0047A9E0-Gun_Cleanup_8.h"
int32_t Gun_Cleanup_8(void* a1, int32_t a2)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xf1));

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0xf4));

        if (result)
        {
            result = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

            if (!result)
            {
                result =
                    ((int(*)())(uintptr_t)(*(((DynObj_UpdateDynTree_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0)))(a1, a2);
                (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = 1;
            }
        }
    }

    return result;
}
