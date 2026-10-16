#include "Weapon_UpdateRecoil_8.h"
void** Weapon_UpdateRecoil_8(int32_t* a1, int32_t a2, void* a3)

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
                goto label_47ce98;
        }
    }

    void** result;

    if (valA <= 0 || !objC1)
    {
    label_47ce98:
        objC1 = &a1[valA * 3 + 1];
        result = &objC1[2];
        *objC1 = a2;
        *result = a3;
        *a1 += 1;
    }
    else
    {
        result = &objC1[2];
        *result = a3;
    }

    void* srcS1 = *result;

    if (srcS1 != 0xffffffff)
    {
        int32_t tmpD4 = objC1[1];

        if (tmpD4 < 0)
        {
            objC1[1] = 0;
            return result;
        }

        if (tmpD4 > srcS1)
        {
            result = *result;
            objC1[1] = result;
        }
    }

    return result;
}
