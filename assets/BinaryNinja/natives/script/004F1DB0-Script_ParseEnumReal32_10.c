// Original IGI.EXE function: Script_ParseEnumReal32_10 (VA 0x004F1DB0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_10.h"
void* Script_ParseEnumReal32_10(void* a1, char* a2)

{
    int32_t* valA = Mem_Alloc(0x480c, 4);
    valA[0x1202] = a2;
    valA[1] = 0;
    *valA = 0;
    Camera_UpdateViewCone_33(&valA[2], &valA[0xa02], a2);
    return Camera_SetFieldOfView_33(a1, valA);
}
