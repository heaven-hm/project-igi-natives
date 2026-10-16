#include "004DAA60-Render_TransformVertices_13.h"
/* 0x004daa60 Render_TransformVertices_13 full linked: callers=2 callees=0 */
int32_t* sub_4daa60(int32_t* a1, int32_t* a2, int32_t* a3, char a4, char a5)

{
    int32_t ecx_9 = g_b041e8;
    int32_t* result = *(g_b041e4 + (ecx_9 << 2)) * g_b041f0 + g_b041e0;
    *(g_b041f4 + result) = ecx_9;
    g_b041e8 += 1;
    *result = *a1;
    result[1] = a1[1];
    result[2] = a1[2];
    result[3] = *a2;
    result[4] = a2[1];
    result[5] = a2[2];
    result[6] = *a3;
    result[7] = a3[1];
    result[8] = a3[2];
    result[9] = a4;
    *(result + 0x25) = a5;
    return result;
}
