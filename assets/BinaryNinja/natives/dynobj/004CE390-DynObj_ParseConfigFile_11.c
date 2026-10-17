// Original IGI.EXE function: DynObj_ParseConfigFile_11 (VA 0x004CE390; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_11.h"
uint32_t DynObj_ParseConfigFile_11(int32_t a1, char a2, int32_t a3, double* a4, int32_t a5)

{
    uint32_t result;

    for (int32_t i = 0; i < 6; i += 1)
        result = DynObj_CreateMagicObject_11(a1, a2, a3, a4, a5, i);

    return result;
}
