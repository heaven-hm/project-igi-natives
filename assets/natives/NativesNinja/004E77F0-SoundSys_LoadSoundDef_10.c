#include "004E77F0-SoundSys_LoadSoundDef_10.h"
/* 0x004e77f0 SoundSys_LoadSoundDef_10 full linked: callers=1 callees=1 */
char* sub_4e77f0(int32_t* a1, int32_t a2)

{
    char* result = a2 - 1;

    if (a2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            int32_t ecx_1 = a1[4];
            char* result_1 = a1[6] + 1;
            result = result_1;
            a1[6] = result_1;

            if (result >= ecx_1)
                result = sub_4e7790(a1, 1);

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
