#include "gi_platform.h"
#include "00517840-Terrain_CalculateNormals_5.h"
void Terrain_CalculateNormals_5(int32_t* a1)

{
    int32_t* i_1 = a1;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        int32_t* valA1 = i_1[2];

        if (valA1)
            Terrain_CalculateNormals_5(valA1);

        if (i_1[3])
        {
            Sys_ExecuteBytecode_2(i_1[7]);
            i_1[7] = 0;
        }

        i = *i_1;
        Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    } while (i);
}
