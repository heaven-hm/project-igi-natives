#include "DynObj_TryingToRemoveUnrigi.h"
int32_t DynObj_TryingToRemoveUnrigi(int32_t* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t objC = *a1;

    if (objC > 0)
    {
        int32_t* tmpD1 = &a1[2];

        do
        {
            if (*tmpD1 == a2)
            {
                *a1 = objC - 1;
                a1[result + 2] = a1[objC + 1];
                return result;
            }

            result += 1;
            tmpD1 = &tmpD1[1];
        } while (result < objC);
    }

    Error_Show("Trying to remove unrigistered QTask from QTaskList");

    while (true)
        /* nop */
}
