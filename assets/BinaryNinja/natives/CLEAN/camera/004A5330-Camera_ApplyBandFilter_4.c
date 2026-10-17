// IGI native provenance: Camera_ApplyBandFilter_4 - 0x004A5330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5330-Camera_ApplyBandFilter_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_4.h"
int32_t* Camera_ApplyBandFilter_4(PSTR context, char* param_2, int32_t param_3)

{
    int32_t* result = Camera_ApplyLineFilter_10();

    if (result)
        return Camera_SetFieldOfView_10(context, param_2, param_3, result);

    return result;
}
