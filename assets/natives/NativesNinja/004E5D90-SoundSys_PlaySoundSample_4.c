#include "004E5D90-SoundSys_PlaySoundSample_4.h"
/* 0x004e5d90 SoundSys_PlaySoundSample_4 full linked: callers=1 callees=2 */
int32_t sub_4e5d90()

{
    g_b015c8 = QTask_UnableToAllocateEven(0);
    int32_t i = 0;
    __builtin_memset(0xa5e464, 0, 0x180);
    int32_t ebp = 0;

    do
    {
        for (int32_t j = 0; j < 0x40; j += 1)
        {
            *(i + j + 0xb017e0) = 0;

            for (int32_t k = 0; k < 6; k += 1)
            {
                if (j & 1 << (k & 0x1f))
                    *(i + j + 0xb017e0) |= 1 << (*(k + ebp + 0x5487a8) & 0x1f);
            }

            *(i + j + 0xb015e0) = 0;

            for (int32_t k_1 = 0; k_1 < 6; k_1 += 1)
            {
                if (j & 1 << (k_1 & 0x1f))
                    *(i + j + 0xb015e0) |= 1 << (*(k_1 + ebp + 0x5487d8) & 0x1f);
            }
        }

        i += 0x40;
        ebp += 6;
    } while (i < 0x200);

    int32_t result;

    for (void* i_1 = nullptr; i_1 < 0x40; i_1 += 1)
    {
        *(i_1 + 0xa5e424) = 0;
        int32_t ebp_1 = 0;

        for (char* j_1 = &g_548791; j_1 < 0x5487a9; )
        {
            result = 1 << (ebp_1 & 0x1f);

            if (i_1 & result)
            {
                result = 1;
                result = 1 << (j_1[0xffffffff] & 0x1f);
                char edx_4 = 1 << (j_1[2] & 0x1f) | result;
                result = 1;
                result = 1 << (j_1[1] & 0x1f);
                edx_4 |= result;
                result = 1;
                result = 1 << (*j_1 & 0x1f);
                edx_4 |= result;
                result = *(i_1 + 0xa5e424);
                result |= edx_4;
                *(i_1 + 0xa5e424) = result;
            }

            j_1 = &j_1[4];
            ebp_1 += 1;
        }
    }

    return result;
}
