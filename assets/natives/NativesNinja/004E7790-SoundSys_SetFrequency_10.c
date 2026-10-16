#include "004E7790-SoundSys_SetFrequency_10.h"
/* 0x004e7790 SoundSys_SetFrequency_10 full linked: callers=2 callees=1 */
char* sub_4e7790(int32_t* a1, int32_t a2)

{
    char* result = a2 - 1;

    if (a2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            void* edx_1 = *a1;
            result = a1[7] + 1;
            a1[6] = 0;
            a1[7] = result;

            if (result >= *(edx_1 + 6))
            {
                a1[7] = result - 1;
                result = sub_4e77d0(a1);
            }

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
