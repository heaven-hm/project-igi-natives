#include "004A2720-Camera_SetFieldOfView_2.h"
/* 0x004a2720 Camera_SetFieldOfView_2 full linked: callers=2 callees=2 */
int32_t sub_4a2720(uint32_t a1)

{
    int32_t result = a1;
    int32_t i_1 = *(result + 0x24) * 256f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            void** esi_1 = 0x935c10 - ((sub_4b4770(0x935bf0) * -256f) << 2);
            int32_t eax_1 = *esi_1 >> 8;
            uint32_t edx_2 = *esi_1;
            *esi_1 = eax_1;
            int32_t eax_2 = eax_1 >> 8;
            *esi_1 = eax_2;
            int32_t eax_3 = eax_2 >> 8;
            *esi_1 = eax_3;
            void* var_8_1 = eax_3 & 0xff;
            long double st0_2 = sub_4b4770(0x935bf0);
            result = (((((eax_2 * st0_2) << 8) + eax_1 * st0_2) << 8) + edx_2 * st0_2) << 8;
            i = i_1;
            i_1 -= 1;
            *esi_1 = result;
        } while (i != 1);
    }

    return result;
}
