#include "gi_platform.h"
#include "004965A0-Display_CreateSurface_10.h"
int32_t* Display_CreateSurface_10(int32_t* a1)

{
    char v_20;
    Display_SoundInvalidFilename(&v_20, a1);
    int32_t* result = Display_CheckCapabilities_10(0x5ca1b8, Display_CheckCapabilities_12(&v_20), Display_RestoreDevice_12(&v_20));

    if (result)
    {
        int32_t v_30_1 = 0x5ca1b8;
        Display_OpenDevice_11(result);
        int32_t* valA2 = result[9];

        if (valA2)
            ((int(*)())(uintptr_t)(*(*valA2 + 8)))(valA2);

        void* valA3 = result[0xa];

        if (valA3)
        {
            Sys_ExecuteBytecode_2(valA3);
            result[0xa] = 0;
        }

        Sys_ExecuteBytecode_2(result);
        result = Sys_CheckHeap_16(a1);

        if (result)
            return Resource_Unload(a1);
    }

    return result;
}
