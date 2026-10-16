#include "004E69E0-SoundSys_PlaySoundSample_7.h"
/* 0x004e69e0 SoundSys_PlaySoundSample_7 full linked: callers=0 callees=4 */
int32_t* sub_4e69e0(int32_t* a1)

{
    int32_t ebx;
    int32_t var_10 = ebx;
    int32_t* result;
    result = a1[2];

    if (!result)
    {
        void var_c;
        sub_4b1e90(&var_c, 0xa, *a1);
        sub_517580(&var_c);
        char* esi_1 = ".RES";
        char* eax_1 = &var_c;
        int32_t eax_3;
        char edx_1;
        char ebx_1;

        while (true)
        {
            edx_1 = *eax_1;
            ebx_1 = *esi_1;
            bool c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                if (!edx_1)
                {
                    eax_3 = 0;
                    break;
                }

                edx_1 = eax_1[1];
                ebx_1 = esi_1[1];
                c_1 = edx_1 < ebx_1;

                if (edx_1 == ebx_1)
                {
                    eax_1 = &eax_1[2];
                    esi_1 = &esi_1[2];

                    if (edx_1)
                        continue;

                    eax_3 = 0;
                    break;
                }
            }

            eax_3 = eax_1 - eax_1 + 1;
            break;
        }

        if (!eax_3)
            return sub_4e67d0(*a1);

        char* esi_2 = ".WAV";
        char* eax_6 = &var_c;

        while (true)
        {
            edx_1 = *eax_6;
            ebx_1 = *esi_2;
            bool c_3 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                if (!edx_1)
                {
                    result = nullptr;
                    break;
                }

                edx_1 = eax_6[1];
                ebx_1 = esi_2[1];
                c_3 = edx_1 < ebx_1;

                if (edx_1 == ebx_1)
                {
                    eax_6 = &eax_6[2];
                    esi_2 = &esi_2[2];

                    if (edx_1)
                        continue;

                    result = nullptr;
                    break;
                }
            }

            result = eax_6 - eax_6 + 1;
            break;
        }

        if (!result)
            return sub_4965a0(*a1);
    }

    return result;
}
