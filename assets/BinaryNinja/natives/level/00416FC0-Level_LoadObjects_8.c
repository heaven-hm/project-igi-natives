#include "Level_LoadObjects_8.h"
int32_t Level_LoadObjects_8()

{
    void* objC = g_57babc;
    int32_t result = *(objC + 0xe4);
    *(objC + 0xe4) = result + 1;
    return result;
}
