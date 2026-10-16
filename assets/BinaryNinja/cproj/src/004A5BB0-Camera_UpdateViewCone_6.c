#include "gi_platform.h"
#include "004A5BB0-Camera_UpdateViewCone_6.h"
char* Camera_UpdateViewCone_6(char* a1, char* a2)

{
    int16_t tmpD;
    tmpD = *a2;
    char* result = a1;

    if (!tmpD)
        return result;

    *(&tmpD + 1) = a2[1];

    if (!*(&tmpD + 1))
    {
        int32_t valA2 = 0;
        valA2 = tmpD;
        /* tailcall */
        return sub_4aa0a6(valA2, a1);
    }

    while (true)
    {
        char* objC = a2;
        int16_t valA;
        valA = *result;
        char* srcS2 = &result[1];

        if (valA != tmpD)
        {
            if (!valA)
                return 0;

            while (true)
            {
                valA = *srcS2;
                srcS2 = &srcS2[1];
    label_4a5bdc: ;
                if (valA == tmpD)
                    break;

                if (!valA)
                    return 0;
            }
        }

        valA = *srcS2;
        srcS2 = &srcS2[1];

        if (valA != *(&tmpD + 1))
            break;

        result = &srcS2[0xffffffff];

        while (true)
        {
            (*(int32_t*)(uintptr_t)(&valA + 1)) = objC[2];

            if ((*(int32_t*)(uintptr_t)(&valA + 1)))
            {
                valA = *srcS2;
                srcS2 = &srcS2[2];

                if (valA != (*(int32_t*)(uintptr_t)(&valA + 1)))
                    break;

                valA = objC[3];

                if (valA)
                {
                    (*(int32_t*)(uintptr_t)(&valA + 1)) = srcS2[0xffffffff];
                    objC = &objC[2];

                    if (valA != (*(int32_t*)(uintptr_t)(&valA + 1)))
                        break;

                    continue;
                }
            }

            return &result[0xffffffff];
        }
    }

    goto label_4a5bdc;
}
