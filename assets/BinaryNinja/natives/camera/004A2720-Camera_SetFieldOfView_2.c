#include "Camera_SetFieldOfView_2.h"
int32_t Camera_SetFieldOfView_2(uint32_t a1)

{
    int32_t result = a1;
    int32_t i_1 = *(result + 0x24) * 256f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            void** srcS1 = 0x935c10 - ((Sys_AllocateMemory_14(0x935bf0) * -256f) << 2);
            int32_t valA1 = *srcS1 >> 8;
            uint32_t tmpD2 = *srcS1;
            *srcS1 = valA1;
            int32_t valA2 = valA1 >> 8;
            *srcS1 = valA2;
            int32_t valA3 = valA2 >> 8;
            *srcS1 = valA3;
            void* v_8_1 = valA3 & 0xff;
            long double fp0_2 = Sys_AllocateMemory_14(0x935bf0);
            result = (((((valA2 * fp0_2) << 8) + valA1 * fp0_2) << 8) + tmpD2 * fp0_2) << 8;
            i = i_1;
            i_1 -= 1;
            *srcS1 = result;
        } while (i != 1);
    }

    return result;
}
