// Original IGI.EXE function: DynObj_Missing (VA 0x004CEC10; static CFG gate PASS, CFG score 1.000).
#include "DynObj_Missing.h"
void* DynObj_Missing(char* a1)

{
    void* result = DynObj_Johan(a1);

    if (result)
        return result;

    if (*a1)
        return DynObj_Johan("missing");

    return 0;
}
