// Original IGI.EXE function: Render_ClipMesh (VA 0x004D0A50; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh.h"
double* Render_ClipMesh(double* context, double* param_2, int32_t param_3)

{
    double* result = param_2;
    int32_t* entity_val = *(result + 0x6c);

    if (entity_val)
    {
        int32_t* entity_4 = *(*(*(*entity_val + 0xc) + 0xc) + 0x88) + (param_3 << 4);
        long double fpu_val_7_2 = *entity_4 * result[0x13];
        float item_14_2 = entity_4[1] * *(result + 0x9c);
        long double fpu_val_6_4 = entity_4[2] * result[0x14];
        float item_10_2 = fpu_val_6_4;
        float item_c_1 =
            fpu_val_6_4 * result[0xf] + item_14_2 * *(result + 0x74) + fpu_val_7_2 * result[0xe];
        long double fpu_val_6_11 =
            item_10_2 * *(result + 0x84) + item_14_2 * result[0x10] + fpu_val_7_2 * *(result + 0x7c);
        long double fpu_val_5_11 = item_10_2 * result[0x12] + item_14_2 * *(result + 0x8c);
        long double fpu_val_5_13 = fpu_val_7_2 * result[0x11];
        result = context;
        *result = item_c_1;
        result[1] = fpu_val_6_11;
        result[2] = fpu_val_5_11 + fpu_val_5_13;
    }

    return result;
}
