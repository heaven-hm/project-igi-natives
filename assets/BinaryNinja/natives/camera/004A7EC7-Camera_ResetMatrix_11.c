#include "Camera_ResetMatrix_11.h"
int32_t* Camera_ResetMatrix_11(char* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    int32_t* i = a2;
    int32_t* i_1 = a2 - 1;

    if (i > 0)
    {
        char* srcS1 = a1;

        do
        {
            int32_t valA = *srcS1;
            srcS1 = &srcS1[1];
            i = Camera_ApplyPostProcess_11(valA, a3, a4);

            if (*a4 == 0xffffffff)
                break;

            i = i_1;
            i_1 -= 1;
        } while (i > 0);
    }

    return i;
}
