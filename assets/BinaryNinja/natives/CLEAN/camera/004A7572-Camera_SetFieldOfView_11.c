// IGI native provenance: Camera_SetFieldOfView_11 - 0x004A7572 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7572-Camera_SetFieldOfView_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_11.h"
char* Camera_SetFieldOfView_11(double* context, char* param_2, int32_t param_3)

{
    g_9361c4 = 1;
    char* result = Camera_UpdateViewCone_10(context, param_2, param_3);
    g_9361c4 = 0;
    return result;
}
