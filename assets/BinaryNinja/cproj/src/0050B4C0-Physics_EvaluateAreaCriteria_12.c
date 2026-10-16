#include "gi_platform.h"
#include "0050B4C0-Physics_EvaluateAreaCriteria_12.h"
int32_t Physics_EvaluateAreaCriteria_12(int32_t a1, int32_t a2)

{
    int32_t valA = a1;

    if (valA >= a2)
        valA = a2;

    int32_t eflags;
    int32_t valA1;
    valA1 = __bsr_gprv_memv(valA);
    int32_t objC1 = 0;
    objC1 = valA1 <= 0;
    return ((objC1 - 1) & valA1) + 1;
}
