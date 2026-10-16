#include "00406390-Config_SetResolution_2.h"
/* 0x00406390 Config_SetResolution_2 full linked: callers=1 callees=8 */
int32_t __fastcall Config_SetResolution_2(int32_t a1)

{
    int32_t var_4 = a1;
    int32_t ebx = *(Config_GetActivePlayerProfileRecord() + 0x18);

    var_4 = !(ebx & 1) ? ebx & 2 : 1;

    (*((sub_4b2710() << 2) + &g_a94e84))(&var_4);
    int32_t esi_1 = ~ebx;
    App_ContextSetTerrainLightmapsUsed(esi_1 >> 2 & 1);
    App_ContextSetLightmapsUsed(esi_1 >> 3 & 1);
    int32_t __saved_esi;

    if (ebx & 0x10)
        __saved_esi = 0x60;
    else if (!(ebx & 0x20))
        __saved_esi = 0xa3;
    else
        __saved_esi = 0x81;

    sub_4d2c20(__saved_esi);
    int32_t __saved_esi_1;

    if (ebx & 0x80)
        __saved_esi_1 = 0x40000000;
    else if (!(ebx & 0x40))
        __saved_esi_1 = 0x3f800000;
    else
        __saved_esi_1 = 0x3fc00000;

    sub_4d0ee0(__saved_esi_1);

    if (!(*(&ebx + 1) & 1))
        return sub_499fd0(1);

    return sub_499fd0(0);
}
