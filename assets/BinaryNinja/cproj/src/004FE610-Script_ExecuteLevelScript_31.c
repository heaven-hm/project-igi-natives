#include "gi_platform.h"
#include "004FE610-Script_ExecuteLevelScript_31.h"
double* Script_ExecuteLevelScript_31(void* a1, double* a2)

{
    int32_t i = 0;
    double* result = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

    if (result > 0)
    {
        do
        {
            i += 1;
            result = (*(int32_t*)(uintptr_t)(*(a1 + 0x6c) + (i << 2) - 4));
            *result = *result + *a2;
            result[1] = a2[1] + result[1];
            result[2] = result[2] + a2[2];
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0xf0)));
    }

    return result;
}
