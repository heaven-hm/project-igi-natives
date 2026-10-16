#include "0050DE00-Physics_CheckHullCollision_13.h"
/* 0x0050de00 Physics_CheckHullCollision_13 full linked: callers=0 callees=0 */
int32_t sub_50de00(void* a1)

{
    if (!*(a1 + 4))
    {
        int32_t* eax_15 = g_5ca114;
        (*(*eax_15 + 0x94))(eax_15, 0, 4, 3);
        int32_t* eax_16 = g_5ca114;
        (*(*eax_16 + 0x94))(eax_16, 0, 5, 2);
        int32_t* eax_17 = g_5ca114;
        (*(*eax_17 + 0x94))(eax_17, 0, 6, 0);
        int32_t* eax_18 = g_5ca114;
        (*(*eax_18 + 0x94))(eax_18, 0, 1, 3);
        int32_t* eax_19 = g_5ca114;
        (*(*eax_19 + 0x94))(eax_19, 0, 2, 2);
        int32_t* eax_20 = g_5ca114;
        (*(*eax_20 + 0x94))(eax_20, 0, 3, 0);
        int32_t* eax_21 = g_5ca114;
        (*(*eax_21 + 0x94))(eax_21, 1, 1, 1);
        int32_t* eax_22 = g_5ca114;
        return (*(*eax_22 + 0x8c))(eax_22, 0, 0);
    }

    int32_t* eax_1 = g_5ca114;
    int32_t ecx = *eax_1;
    int32_t var_8;
    int32_t* eax_2;
    int32_t edx;

    if (!(*a1 & 0x1000000))
    {
        (*(ecx + 0x94))(eax_1, 0, 0x11, 1);
        eax_2 = g_5ca114;
        var_8 = 1;
        edx = *eax_2;
    }
    else
    {
        (*(ecx + 0x94))(eax_1, 0, 0x11, 2);
        eax_2 = g_5ca114;
        var_8 = 2;
        edx = *eax_2;
    }

    (*(edx + 0x94))(eax_2, 0, 0x10, var_8);
    int32_t* eax_3 = g_5ca114;

    if (!(*a1 & &__dos_header))
        (*(*eax_3 + 0x94))(eax_3, 0, 0xc, 3);
    else
        (*(*eax_3 + 0x94))(eax_3, 0, 0xc, 1);

    int32_t* eax_4 = g_5ca114;
    (*(*eax_4 + 0x94))(eax_4, 0, 0x12, 1);
    int32_t* eax_5 = g_5ca114;
    (*(*eax_5 + 0x94))(eax_5, 0, 0xb, 0);
    int32_t* eax_6 = g_5ca114;
    (*(*eax_6 + 0x94))(eax_6, 0, 4, 4);
    int32_t* eax_7 = g_5ca114;
    (*(*eax_7 + 0x94))(eax_7, 0, 5, 2);
    int32_t* eax_8 = g_5ca114;
    (*(*eax_8 + 0x94))(eax_8, 0, 6, 0);
    int32_t* eax_9 = g_5ca114;
    (*(*eax_9 + 0x94))(eax_9, 0, 1, 4);
    int32_t* eax_10 = g_5ca114;
    (*(*eax_10 + 0x94))(eax_10, 0, 2, 2);
    int32_t* eax_11 = g_5ca114;
    (*(*eax_11 + 0x94))(eax_11, 0, 3, 0);
    int32_t* eax_12 = g_5ca114;
    (*(*eax_12 + 0x94))(eax_12, 1, 1, 1);
    int32_t* eax_13 = g_5ca114;
    return (*(*eax_13 + 0x8c))(eax_13, 0, *(*(a1 + 4) + 0x20));
}
