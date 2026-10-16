#include "004CEC10-DynObj_Missing.h"
/* 0x004cec10 DynObj_Missing full linked: callers=91 callees=2 */
void* sub_4cec10(char* a1)

{
    void* result = sub_4cec40(a1);

    if (result)
        return result;

    if (*a1)
        return sub_4cec40("missing");

    return 0;
}
