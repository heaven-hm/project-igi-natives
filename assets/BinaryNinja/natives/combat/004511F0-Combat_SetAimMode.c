#include "Combat_SetAimMode.h"
int32_t Combat_SetAimMode(void* a1, void* a2, int32_t a3)

{
    int32_t result = 0;
    int32_t objC = *(a1 + 0x128);

    if (objC > 0)
    {
        int32_t* tmpD1 = a1 + 0x10;

        while (*(a2 + 0x14) != *tmpD1)
        {
            result += 1;
            tmpD1 = &tmpD1[1];

            if (result >= objC)
                return result;
        }

        *(a1 + (result << 2) + 0x90) = a3;
    }

    return result;
}
