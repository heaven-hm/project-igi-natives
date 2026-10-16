#include "004537E0-PatrolCursor_Start.h"
/* 0x004537e0 PatrolCursor_Start full linked: callers=2 callees=4 */
int32_t* sub_4537e0(void** a1, int32_t a2, int32_t a3)

{
    *a1 = sub_453840(a2);
    a1[2] = 0;
    a1[4] = 0;
    *(a1 + 0x15) = 1;
    a1[5] = 0;
    a1[6] = 0xffffffff;
    int32_t* eax_1 = sub_453880(a1, a3);
    a1[1] = eax_1;
    int32_t* result = sub_453540(eax_1);

    if (result == 6)
    {
        result = sub_453730(a1);
        a1[1] = result;
    }

    return result;
}
