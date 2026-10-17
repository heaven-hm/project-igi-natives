// IGI native provenance: Script_ParseEnumReal32_10 - 0x004F1DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1DB0-Script_ParseEnumReal32_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_10.h"
void* Script_ParseEnumReal32_10(void* context, char* param_2)

{
    int32_t* data_val = Mem_Alloc(0x480c, 4);
    data_val[0x1202] = param_2;
    data_val[1] = 0;
    *data_val = 0;
    Camera_UpdateViewCone_33(&data_val[2], &data_val[0xa02], param_2);
    return Camera_SetFieldOfView_33(context, data_val);
}
