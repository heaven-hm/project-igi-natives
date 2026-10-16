#include "gi_platform.h"
#include "00401CC0-QTask_FindType_2.h"
void* QTask_FindType_2(void* a1, int16_t a2)

{
    void* i;

    for (i = (*(int32_t*)(uintptr_t)(a1 + 0x14)); i; i = *(i + 0x14))
    {
        int32_t objC;
        objC = *(i + 0x1c);
        char valA;
        valA = TaskType_IsDerivedFrom(objC, a2);

        if (valA)
            break;
    }

    return i;
}
