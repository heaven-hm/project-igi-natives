#include "gi_platform.h"
#include "00451230-AI_TakeCover_2.h"
int32_t AI_TakeCover_2(void* a1, void* a2)

{
    int32_t valA = 0;
    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0x128));

    if (objC > 0)
    {
        int32_t* tmpD1 = a1 + 0x10;

        do
        {
            if ((*(int32_t*)(uintptr_t)(a2 + 0x14)) == *tmpD1)
                return (*(int32_t*)(uintptr_t)(a1 + (valA << 2) + 0x90));

            valA += 1;
            tmpD1 = &tmpD1[1];
        } while (valA < objC);
    }

    return 0xffffffff;
}
