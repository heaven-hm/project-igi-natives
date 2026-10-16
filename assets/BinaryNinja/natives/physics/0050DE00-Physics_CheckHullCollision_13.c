#include "Physics_CheckHullCollision_13.h"
int32_t Physics_CheckHullCollision_13(void* a1)

{
    if (!*(a1 + 4))
    {
        int32_t* valA15 = g_5ca114;
        (*(*valA15 + 0x94))(valA15, 0, 4, 3);
        int32_t* valA16 = g_5ca114;
        (*(*valA16 + 0x94))(valA16, 0, 5, 2);
        int32_t* valA17 = g_5ca114;
        (*(*valA17 + 0x94))(valA17, 0, 6, 0);
        int32_t* valA18 = g_5ca114;
        (*(*valA18 + 0x94))(valA18, 0, 1, 3);
        int32_t* valA19 = g_5ca114;
        (*(*valA19 + 0x94))(valA19, 0, 2, 2);
        int32_t* valA20 = g_5ca114;
        (*(*valA20 + 0x94))(valA20, 0, 3, 0);
        int32_t* valA21 = g_5ca114;
        (*(*valA21 + 0x94))(valA21, 1, 1, 1);
        int32_t* valA22 = g_5ca114;
        return (*(*valA22 + 0x8c))(valA22, 0, 0);
    }

    int32_t* valA1 = g_5ca114;
    int32_t objC = *valA1;
    int32_t v_8;
    int32_t* valA2;
    int32_t tmpD;

    if (!(*a1 & 0x1000000))
    {
        (*(objC + 0x94))(valA1, 0, 0x11, 1);
        valA2 = g_5ca114;
        v_8 = 1;
        tmpD = *valA2;
    }
    else
    {
        (*(objC + 0x94))(valA1, 0, 0x11, 2);
        valA2 = g_5ca114;
        v_8 = 2;
        tmpD = *valA2;
    }

    (*(tmpD + 0x94))(valA2, 0, 0x10, v_8);
    int32_t* valA3 = g_5ca114;

    if (!(*a1 & &__dos_header))
        (*(*valA3 + 0x94))(valA3, 0, 0xc, 3);
    else
        (*(*valA3 + 0x94))(valA3, 0, 0xc, 1);

    int32_t* valA4 = g_5ca114;
    (*(*valA4 + 0x94))(valA4, 0, 0x12, 1);
    int32_t* valA5 = g_5ca114;
    (*(*valA5 + 0x94))(valA5, 0, 0xb, 0);
    int32_t* valA6 = g_5ca114;
    (*(*valA6 + 0x94))(valA6, 0, 4, 4);
    int32_t* valA7 = g_5ca114;
    (*(*valA7 + 0x94))(valA7, 0, 5, 2);
    int32_t* valA8 = g_5ca114;
    (*(*valA8 + 0x94))(valA8, 0, 6, 0);
    int32_t* valA9 = g_5ca114;
    (*(*valA9 + 0x94))(valA9, 0, 1, 4);
    int32_t* valA10 = g_5ca114;
    (*(*valA10 + 0x94))(valA10, 0, 2, 2);
    int32_t* valA11 = g_5ca114;
    (*(*valA11 + 0x94))(valA11, 0, 3, 0);
    int32_t* valA12 = g_5ca114;
    (*(*valA12 + 0x94))(valA12, 1, 1, 1);
    int32_t* valA13 = g_5ca114;
    return (*(*valA13 + 0x8c))(valA13, 0, *(*(a1 + 4) + 0x20));
}
