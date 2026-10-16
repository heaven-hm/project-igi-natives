#include "Weapon_EjectShell_8.h"
int32_t* Weapon_EjectShell_8(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t tmpD = 0;
    int32_t valA = *a1;
    int32_t* objC1;

    if (valA > 0)
    {
        objC1 = &a1[1];

        while (*objC1 != a2)
        {
            tmpD += 1;
            objC1 = &objC1[3];

            if (tmpD >= valA)
                goto label_47ce28;
        }
    }

    int32_t* result;

    if (valA <= 0 || !objC1)
    {
    label_47ce28:
        objC1 = &a1[valA * 3 + 1];
        result = &objC1[1];
        *objC1 = a2;
        *result = a3;
        *a1 += 1;
    }
    else
    {
        result = &objC1[1];
        *result = objC1[1] + a3;
    }

    int32_t srcS1 = objC1[2];

    if (srcS1 != 0xffffffff)
    {
        int32_t tmpD4 = *result;

        if (tmpD4 < 0)
        {
            *result = 0;
            return result;
        }

        if (tmpD4 > srcS1)
            *result = objC1[2];
    }

    return result;
}
