#include "gi_platform.h"
#include "004F1950-Script_EvaluateCondition_7.h"
int32_t* Script_EvaluateCondition_7(int32_t a1)

{
    int32_t* result = Mem_Alloc((a1 << 4) + 0xc, 4);
    result[1] = a1;
    *result = 0;
    result[2] = &result[3];
    return result;
}
