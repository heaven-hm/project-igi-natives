#include "004ADA79-Camera_UpdateTransform_29.h"
/* 0x004ada79 Camera_UpdateTransform_29 full linked: callers=3 callees=4 */
int32_t sub_4ada79(int32_t* a1, int32_t* a2)

{
    if (sub_4ada58(*a1, *a2, a1) && sub_4ada58(a1[1], 1, &a1[1]))
        a1[2] += 1;

    if (sub_4ada58(a1[1], a2[1], &a1[1]))
        a1[2] += 1;

    return sub_4ada58(a1[2], a2[2], &a1[2]);
}
