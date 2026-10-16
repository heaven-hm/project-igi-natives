#include "004A7EC7-Camera_ResetMatrix_11.h"
/* 0x004a7ec7 Camera_ResetMatrix_11 full linked: callers=3 callees=1 */
int32_t* sub_4a7ec7(char* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    int32_t* i = a2;
    int32_t* i_1 = a2 - 1;

    if (i > 0)
    {
        char* esi_1 = a1;

        do
        {
            int32_t eax = *esi_1;
            esi_1 = &esi_1[1];
            i = sub_4a7e61(eax, a3, a4);

            if (*a4 == 0xffffffff)
                break;

            i = i_1;
            i_1 -= 1;
        } while (i > 0);
    }

    return i;
}
