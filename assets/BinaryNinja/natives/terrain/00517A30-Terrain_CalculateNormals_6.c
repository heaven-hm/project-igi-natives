#include "Terrain_CalculateNormals_6.h"
int32_t* Terrain_CalculateNormals_6(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* result_2 = a1;
    void* ctxB = nullptr;
    int32_t* result = nullptr;

    while (ctxB < a2)
    {
        int32_t valA2 = Terrain_ConnectGraphNode_6(ctxB + a1);
        int32_t* result_1;

        if (result)
        {
            result_1 = Mem_Alloc(0x20, 4);
            *result_2 = result_1;
        }
        else
        {
            result_1 = Mem_Alloc(0x20, 4);
            result = result_1;
        }

        result_2 = result_1;
        *result_2 = 0;
        result_2[2] = 0;
        result_2[4] = valA2;
        result_2[5] = 0;
        result_2[6] = Terrain_ConnectGraphNode_6(ctxB + a1 + 4);
        result_2[7] = ctxB + a1 + 8;
        result_2[1] = a3;
        result_2[3] = 0;

        if (valA2 == 0x464f524d)
        {
            result_2[5] = Terrain_ConnectGraphNode_6(ctxB + a1 + 8);
            result_2[2] = Terrain_CalculateNormals_6(ctxB + a1 + 0xc, result_2[6] - 4, result_2);
        }

        ctxB = ctxB + result_2[6] + 8;

        if (ctxB & 1)
            ctxB += 1;
    }

    return result;
}
