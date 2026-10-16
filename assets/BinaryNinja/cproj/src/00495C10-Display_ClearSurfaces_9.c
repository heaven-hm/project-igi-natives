#include "gi_platform.h"
#include "00495C10-Display_ClearSurfaces_9.h"
uint32_t Display_ClearSurfaces_9(HMIXEROBJ a1, void* a2, void* a3, int32_t a4, int32_t a5)

{
    MIXERCONTROLDETAILS pmxcd;
    pmxcd.cbStruct = 0x18;
    pmxcd.cbDetails = 4;
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a3 + 0x10));
    pmxcd.dwControlID = (*(int32_t*)(uintptr_t)(a3 + 4));
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a2 + 0x1c));
    pmxcd.cChannels = valA1;
    *(&pmxcd. + 0) = objC1;
    int32_t v_20;
    pmxcd.paDetails = &v_20;

    if (valA1 > 0)
        v_20 = a4;

    if (valA1 > 1)
        int32_t v_1c_1 = a5;

    return mixerSetControlDetails(a1, &pmxcd, 0x80000000);
}
