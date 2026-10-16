#include "004E7710-SoundSys_SetMasterVolume_10.h"
/* 0x004e7710 SoundSys_SetMasterVolume_10 full linked: callers=1 callees=3 */
void sub_4e7710(int32_t* a1, char* a2)

{
    int32_t ebx;
    int32_t var_4 = ebx;

    if (!*a1)
        return;

    char* esi_1;

    for (char* i = a2; i; i = i + esi_1 + 1)
    {
        char j = *i;
        char ebx_1 = 0;
        esi_1 = nullptr;

        while (j)
        {
            if (j == 0xa)
            {
                *(esi_1 + i) = 0;
                ebx_1 = 1;
                break;
            }

            j = *(esi_1 + i + 1);
            esi_1 = &esi_1[1];
        }

        sub_4b77f0(*a1, i, a1[6], a1[7]);

        if (!ebx_1)
        {
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond:0_1 = 0 != *i;
                i = &i[1];
                j_1 -= 1;

                if (!cond:0_1)
                    break;
            }

            sub_4e77f0(a1, ~j_1 - 1);
            break;
        }

        sub_4e7790(a1, 1);
    }
}
