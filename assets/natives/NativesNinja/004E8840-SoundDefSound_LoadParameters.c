#include "004E8840-SoundDefSound_LoadParameters.h"
/* 0x004e8840 SoundDefSound_LoadParameters full linked: callers=0 callees=7 */
int32_t sub_4e8840(int32_t a1)

{
    int32_t* esi = a1;

    if (*(esi + 0xde))
        return QTask_FindType(esi);

    if (esi[0x37])
        return sub_4e8dc0(esi);

    long double st0 = sub_496db0(esi[0x4a], esi[0x4b]);
    long double temp0 = esi[0x48];
    st0 - temp0;

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
            | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41 && !sub_4e6fa0(&esi[8]))
        return QTask_FindType(esi);

    sub_4e8dc0(esi);
    int32_t result = sub_4e6050();
    esi[0x48] = 1f / result + esi[0x48];
    return result;
}
