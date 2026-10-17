// Original IGI.EXE function: DynObj_ParseConfigFile_11 (VA 0x004CE390; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_11.h"
uint32_t DynObj_ParseConfigFile_11(int32_t context, char param_2, int32_t param_3, double* param_4, int32_t param_5)

{
    uint32_t result;

    for (int32_t i = 0; i < 6; i += 1)
        result = DynObj_CreateMagicObject_11(context, param_2, param_3, param_4, param_5, i);

    return result;
}
