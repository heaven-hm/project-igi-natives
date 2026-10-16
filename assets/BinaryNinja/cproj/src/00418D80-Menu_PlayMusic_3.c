#include "gi_platform.h"
#include "00418D80-Menu_PlayMusic_3.h"
int32_t Menu_PlayMusic_3(void* a1, char* a2)

{
    int32_t srcS = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x2668)) > 0)
    {
        char* dstD1 = a1 + 0x1de4;
        int32_t valA;

        do
        {
            int32_t valA1;
            int32_t objC;
            int32_t tmpD;
            valA1 = Camera_UpdateTransform_6(valA, tmpD, objC, a2, dstD1);

            if (!valA1)
                return (*(int32_t*)(uintptr_t)(a1 + srcS * 0x44 + 0x1e24));

            valA = (*(int32_t*)(uintptr_t)(a1 + 0x2668));
            srcS += 1;
            dstD1 = &dstD1[0x44];
        } while (srcS < valA);
    }

    return 0;
}
