#include "Camera_UpdateTransform_26.h"
char* Camera_UpdateTransform_26(char* a1, char* a2, int32_t a3)

{
    int32_t tmpD = a3;
    char* ctxB = a2;
    char* srcS = a1;
    char* objC = *(tmpD + 0xc);
    *srcS = 0x30;
    char* result = &srcS[1];

    if (ctxB > 0)
    {
        a1 = ctxB;
        ctxB = nullptr;
        char* i;

        do
        {
            char tmpD1 = *objC;

            if (!tmpD1)
                tmpD = 0x30;
            else
            {
                tmpD = tmpD1;
                objC = &objC[1];
            }

            *result = tmpD;
            result = &result[1];
            i = a1;
            a1 -= 1;
        } while (i != 1);
        tmpD = a3;
    }

    *result = 0;

    if (ctxB >= 0 && *objC >= 0x35)
    {
        while (true)
        {
            result -= 1;

            if (*result != 0x39)
                break;

            *result = 0x30;
        }

        *result += 1;
    }

    if (*srcS != 0x31)
        return Camera_ApplyHandiCam_26(srcS, &srcS[1], Camera_UpdateViewCone_20(&srcS[1]) + 1);

    *(tmpD + 4) += 1;
    return result;
}
