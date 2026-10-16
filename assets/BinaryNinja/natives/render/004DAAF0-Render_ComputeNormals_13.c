#include "Render_ComputeNormals_13.h"
int32_t Render_ComputeNormals_13(int32_t a1)

{
    int32_t* srcS = g_b041f4;
    int32_t tmpD = *(srcS + a1);
    int32_t result = g_b041e8 - 1;
    g_b041e8 = result;

    if (tmpD != result)
    {
        int32_t objC1 = g_b041e4;
        result = *(objC1 + (result << 2)) * g_b041f0 + g_b041e0;
        int32_t dstD2 = *(objC1 + (tmpD << 2));
        int32_t srcS1 = *(srcS + result);
        *(objC1 + (tmpD << 2)) = *(objC1 + (srcS1 << 2));
        *(g_b041e4 + (srcS1 << 2)) = dstD2;
        *(g_b041f4 + result) = tmpD;
    }

    return result;
}
