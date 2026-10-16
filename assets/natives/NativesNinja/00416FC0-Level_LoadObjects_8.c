#include "00416FC0-Level_LoadObjects_8.h"
/* 0x00416fc0 Level_LoadObjects_8 full linked: callers=1 callees=0 */
int32_t Level_LoadObjects_8()

{
    void* ecx = g_57babc;
    int32_t result = *(ecx + 0xe4);
    *(ecx + 0xe4) = result + 1;
    return result;
}
