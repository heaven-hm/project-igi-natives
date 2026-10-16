#include "Menu_PlayMusic_19.h"
int32_t Menu_PlayMusic_19(int32_t a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t valA = 0;
    int32_t objC1 = 0;
    valA = g_c28d2d;
    objC1 = g_c28d2f;
    int32_t tmpD = 0;
    int32_t objC4 = 0;
    *(a1 + 0x73c) = (objC1 >> 7) - (valA >> 7);
    tmpD = g_c28d2a;
    objC4 = g_c28d32;
    *(a1 + 0x734) = (objC4 >> 7) - (tmpD >> 7);
    return a1;
}
