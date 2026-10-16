#include "00517A30-Terrain_CalculateNormals_6.h"
/* 0x00517a30 Terrain_CalculateNormals_6 full linked: callers=2 callees=6 */
int32_t* sub_517a30(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t* result_2 = a1;
    void* ebx = nullptr;
    int32_t* result = nullptr;

    while (ebx < a2)
    {
        int32_t eax_2 = sub_5179d0(ebx + a1);
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
        result_2[4] = eax_2;
        result_2[5] = 0;
        result_2[6] = sub_5179d0(ebx + a1 + 4);
        result_2[7] = ebx + a1 + 8;
        result_2[1] = a3;
        result_2[3] = 0;

        if (eax_2 == 0x464f524d)
        {
            result_2[5] = sub_5179d0(ebx + a1 + 8);
            result_2[2] = sub_517a30(ebx + a1 + 0xc, result_2[6] - 4, result_2);
        }

        ebx = ebx + result_2[6] + 8;

        if (ebx & 1)
            ebx += 1;
    }

    return result;
}
