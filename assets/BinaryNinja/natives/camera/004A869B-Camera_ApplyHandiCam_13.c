// Original IGI.EXE function: Camera_ApplyHandiCam_13 (VA 0x004A869B; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_13.h"
long double Camera_ApplyHandiCam_13(double context, int16_t param_2 , int32_t param_3) {
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    item_c = context;
    *(&item_8 + 2) = (param_3 + 0x3fe) << 4 | (param_2 & 0x800f);
    return item_c;
}
