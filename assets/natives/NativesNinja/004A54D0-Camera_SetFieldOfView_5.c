#include "004A54D0-Camera_SetFieldOfView_5.h"
/* 0x004a54d0 Camera_SetFieldOfView_5 full linked: callers=1 callees=0 */
char* sub_4a54d0(int32_t a1, char a2)

{
    int32_t edi = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t i_1 = -((i + 1));
    void* edi_1 = edi - 1;

    while (i_1)
    {
        bool cond:1_1 = a2 != *edi_1;
        edi_1 -= 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    if (*(edi_1 + 1) == a2)
        return edi_1 + 1;

    return nullptr;
}
