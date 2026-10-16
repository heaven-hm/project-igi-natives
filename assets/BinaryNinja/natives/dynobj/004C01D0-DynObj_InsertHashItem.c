#include "DynObj_InsertHashItem.h"
int32_t DynObj_InsertHashItem(void* a1)

{
    char* objC = *(a1 + 0x14);
    char valA = *objC;

    if (valA)
    {
        while (true)
        {
            if (valA == 0x2e || valA == 0x65 || valA == 0x45)
                return 0;

            valA = objC[1];
            objC = &objC[1];

            if (!valA)
                break;

            continue;
        }
    }

    return 1;
}
