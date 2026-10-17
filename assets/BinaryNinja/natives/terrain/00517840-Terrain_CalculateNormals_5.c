// IGI native provenance: Terrain_CalculateNormals_5 - 0x00517840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517840-Terrain_CalculateNormals_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_5.h"
void Terrain_CalculateNormals_5(int32_t* context)

{
    int32_t* i_1 = context;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        int32_t* data_1 = i_1[2];

        if (data_1)
            Terrain_CalculateNormals_5(data_1);

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
