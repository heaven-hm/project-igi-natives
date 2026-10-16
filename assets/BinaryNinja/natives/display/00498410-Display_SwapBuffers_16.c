#include "Display_SwapBuffers_16.h"
int32_t* Display_SwapBuffers_16(int32_t* a1)

{
    g_bcaaa0 = *a1;
    g_bcaaa4 = a1[1];
    int32_t objC1 = a1[2];
    g_bcaac0 = 0;
    g_bcaaa8 = objC1;
    g_bcaac4 = 0;
    g_bcaac8 = *a1;
    g_bcaacc = a1[1];
    return a1;
}
