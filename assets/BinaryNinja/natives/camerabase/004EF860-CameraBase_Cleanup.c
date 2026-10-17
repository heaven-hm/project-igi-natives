// IGI native provenance: CameraBase_Cleanup - 0x004EF860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EF860-CameraBase_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup.h"
int32_t CameraBase_Cleanup(float* context, int32_t* param_2)

{
    float* dest_val = context;
    Script_TooFewParametersInLi(param_2, 0xb);
    int32_t flagP = *param_2;

    for (int32_t i = 0; i < 0xb; i += 1)
    {
        Profile_ValueSet(param_2[1], i + flagP);
🚫🚫🚫        *dest_val =
        /* unimplemented  {fstp dword [dest_val], fp0} */
        int16_t idx = idx + 1;
        dest_val = &dest_val[1];
    }

    int32_t result = *param_2 + 0xb;
    *param_2 = result;
    return result;
}
