#include "Display_SetDisplayMode_15.h"
void* Display_SetDisplayMode_15(void* a1, float a2)

{
    *(a1 + 0x5c) = a2;
    return a1;
}
