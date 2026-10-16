#include "gi_platform.h"
#include "004D0A50-Render_ClipMesh.h"
double* Render_ClipMesh(double* a1, double* a2, int32_t a3)

{
    double* result = a2;
    int32_t* objC = *(result + 0x6c);

    if (objC)
    {
        int32_t* objC4 = *(*(*(*objC + 0xc) + 0xc) + 0x88) + (a3 << 4);
        long double x87_r7_2 = *objC4 * result[0x13];
        float v_14_2 = objC4[1] * *(result + 0x9c);
        long double x87_r6_4 = objC4[2] * result[0x14];
        float v_10_2 = x87_r6_4;
        float v_c_1 =
            x87_r6_4 * result[0xf] + v_14_2 * *(result + 0x74) + x87_r7_2 * result[0xe];
        long double x87_r6_11 =
            v_10_2 * *(result + 0x84) + v_14_2 * result[0x10] + x87_r7_2 * *(result + 0x7c);
        long double x87_r5_11 = v_10_2 * result[0x12] + v_14_2 * *(result + 0x8c);
        long double x87_r5_13 = x87_r7_2 * result[0x11];
        result = a1;
        *result = v_c_1;
        result[1] = x87_r6_11;
        result[2] = x87_r5_11 + x87_r5_13;
    }

    return result;
}
