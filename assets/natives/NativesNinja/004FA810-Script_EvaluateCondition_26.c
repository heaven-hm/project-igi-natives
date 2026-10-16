#include "004FA810-Script_EvaluateCondition_26.h"
/* 0x004fa810 Script_EvaluateCondition_26 full linked: callers=2 callees=2 */
int16_t* sub_4fa810(void* a1, int16_t* a2)

{
    void* esi = a1;
    sub_4b17c0(*(esi + 4));
    Resource_Unpack(*(esi + 4), &a1, 3);
    int16_t* result = a2;
    *result = *(&a1 + 1);
    result = 1;
    return result;
}
