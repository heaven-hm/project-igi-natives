#include "004D0A50-Render_ClipMesh.h"
/* 0x004d0a50 Render_ClipMesh full linked: callers=3 callees=0 */
double* sub_4d0a50(double* a1, double* a2, int32_t a3)

{
    double* result = a2;
    int32_t* ecx = *(result + 0x6c);

    if (ecx)
    {
        int32_t* ecx_4 = *(*(*(*ecx + 0xc) + 0xc) + 0x88) + (a3 << 4);
        long double x87_r7_2 = *ecx_4 * result[0x13];
        float var_14_2 = ecx_4[1] * *(result + 0x9c);
        long double x87_r6_4 = ecx_4[2] * result[0x14];
        float var_10_2 = x87_r6_4;
        float var_c_1 =
            x87_r6_4 * result[0xf] + var_14_2 * *(result + 0x74) + x87_r7_2 * result[0xe];
        long double x87_r6_11 =
            var_10_2 * *(result + 0x84) + var_14_2 * result[0x10] + x87_r7_2 * *(result + 0x7c);
        long double x87_r5_11 = var_10_2 * result[0x12] + var_14_2 * *(result + 0x8c);
        long double x87_r5_13 = x87_r7_2 * result[0x11];
        result = a1;
        *result = var_c_1;
        result[1] = x87_r6_11;
        result[2] = x87_r5_11 + x87_r5_13;
    }

    return result;
}
