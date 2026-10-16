#include "Script_ParseEnumString_30.h"
double* Script_ParseEnumString_30(double* a1, void* a2)

{
    *a1 = *(a2 + 0xa0) + *(a2 + 0x88);
    a1[1] = *(a2 + 0xa8) + *(a2 + 0x90);
    a1[2] = *(a2 + 0xb0) + *(a2 + 0x98);
    *a1 = *a1 * 0.5;
    a1[1] = a1[1] * 0.5;
    a1[2] = a1[2] * 0.5;
    return a1;
}
