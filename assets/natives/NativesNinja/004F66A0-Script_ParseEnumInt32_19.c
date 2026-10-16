#include "004F66A0-Script_ParseEnumInt32_19.h"
/* 0x004f66a0 Script_ParseEnumInt32_19 full linked: callers=1 callees=1 */
int32_t sub_4f66a0(void* a1, int32_t* a2, int32_t* a3)

{
    int32_t result = *(a1 + 0x2ca8);
    int32_t* esi = *(a1 + (result << 2) + 0x2b4c);

    if (result < 0x14)
    {
        *esi = *a2;
        esi[1] = a2[1];
        esi[2] = a2[2];
        esi[3] = *a3;
        esi[4] = a3[1];
        esi[5] = a3[2];
        esi[6] = *a3;
        esi[7] = a3[1];
        esi[8] = a3[2];
        esi[6] = *(a1 + 0x2c80) * esi[6];
        esi[7] = *(a1 + 0x2c80) * esi[7];
        esi[8] = *(a1 + 0x2c80) * esi[8];
        long double st0_1;
        st0_1 = sub_4b4770(0xa76c90);
        esi[9] = st0_1 * 0.300000012f + 0.699999988f;
        *(a1 + 0x2ca8) += 1;
    }

    return result;
}
