// Original IGI.EXE function: Script_ParseEnumReal32_10 (VA 0x004F1DB0; static CFG gate PASS, CFG score 1.000).
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
