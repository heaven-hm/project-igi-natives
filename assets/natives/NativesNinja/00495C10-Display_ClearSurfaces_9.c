#include "00495C10-Display_ClearSurfaces_9.h"
/* 0x00495c10 Display_ClearSurfaces_9 full linked: callers=3 callees=1 */
uint32_t sub_495c10(HMIXEROBJ a1, void* a2, void* a3, int32_t a4, int32_t a5)

{
    MIXERCONTROLDETAILS pmxcd;
    pmxcd.cbStruct = 0x18;
    pmxcd.cbDetails = 4;
    int32_t ecx_1 = *(a3 + 0x10);
    pmxcd.dwControlID = *(a3 + 4);
    int32_t eax_1 = *(a2 + 0x1c);
    pmxcd.cChannels = eax_1;
    *(&pmxcd. + 0) = ecx_1;
    int32_t var_20;
    pmxcd.paDetails = &var_20;

    if (eax_1 > 0)
        var_20 = a4;

    if (eax_1 > 1)
        int32_t var_1c_1 = a5;

    return mixerSetControlDetails(a1, &pmxcd, 0x80000000);
}
