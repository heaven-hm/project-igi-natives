#include "00517840-Terrain_CalculateNormals_5.h"
/* 0x00517840 Terrain_CalculateNormals_5 full linked: callers=2 callees=3 */
void sub_517840(int32_t* a1)

{
    int32_t* i_1 = a1;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        int32_t* eax_1 = i_1[2];

        if (eax_1)
            sub_517840(eax_1);

        if (i_1[3])
        {
            sub_4b0d10(i_1[7]);
            i_1[7] = 0;
        }

        i = *i_1;
        sub_4b0d10(i_1);
        i_1 = i;
    } while (i);
}
