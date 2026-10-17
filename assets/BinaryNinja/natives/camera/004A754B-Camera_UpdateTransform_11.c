// IGI native provenance: Camera_UpdateTransform_11 - 0x004A754B - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A754B-Camera_UpdateTransform_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_11.h"
char* Camera_UpdateTransform_11(double* context, char* param_2, void* param_3, int32_t param_4)

{
    g_9361c4 = 1;
    char* result = Camera_E000(context, param_2, param_3, param_4);
    g_9361c4 = 0;
    return result;
}
