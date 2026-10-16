#include "gi_platform.h"
#include "004CEC10-DynObj_Missing.h"
void* DynObj_Missing(char* a1)

{
    void* result = DynObj_Johan(a1);

    if (result)
        return result;

    if (*a1)
        return DynObj_Johan("missing");

    return 0;
}
