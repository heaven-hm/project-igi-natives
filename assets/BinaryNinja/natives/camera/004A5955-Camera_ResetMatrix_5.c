// IGI native provenance: Camera_ResetMatrix_5 - 0x004A5955 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5955-Camera_ResetMatrix_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_5.h"
int32_t _test_whether_TOS_is_int(long double context )

{
    long double fpu7 = roundl(context);
    fpu7 - context;
    int32_t entity_val;
    entity_val = 0;
    int16_t result = (fpu7 < context ? 1 : 0) << 8 | (FCMP_UO(fpu7, context) ? 1 : 0) << 0xa
        | (fpu7 == context ? 1 : 0) << 0xe;

    if (!TEST_BITB(*(&result + 1), 6))
        return result;

    long double fpu0 = context * g_543f00;
    entity_val = 1;
    long double fpu_val_7_2 = roundl(fpu0);
    fpu_val_7_2 - fpu0;
    result = (fpu_val_7_2 < fpu0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, fpu0) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == fpu0 ? 1 : 0) << 0xe | 0x800;

    if (TEST_BITB(*(&result + 1), 6))
        entity_val = 2;

    return result;
}
