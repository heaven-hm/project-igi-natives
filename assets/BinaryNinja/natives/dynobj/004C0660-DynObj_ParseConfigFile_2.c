#include "DynObj_ParseConfigFile_2.h"
int32_t* DynObj_ParseConfigFile_2(int32_t* a1)

{
    a1[2] = a1;
    *a1 = &a1[1];
    a1[1] = 0;
    return a1;
}
