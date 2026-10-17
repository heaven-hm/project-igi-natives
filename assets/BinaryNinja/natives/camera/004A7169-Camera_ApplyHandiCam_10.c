// IGI native provenance: Camera_ApplyHandiCam_10 - 0x004A7169 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7169-Camera_ApplyHandiCam_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_10.h"
int32_t Camera_ApplyHandiCam_10() {
    double item_c = 3145727.0;
    double item_14 = 4195835.0;
    long double fpu_val_7_6 = item_14 - item_14 / item_c * item_c;
    long double f0 = 1.0;
    fpu_val_7_6 - f0;
    int16_t data_val = (fpu_val_7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f0 ? 1 : 0) << 0xe;

    if (TEST_BITB(*(&data_val + 1), 6) || TEST_BITB(*(&data_val + 1), 0))
        return 0;

    return 1;
}
