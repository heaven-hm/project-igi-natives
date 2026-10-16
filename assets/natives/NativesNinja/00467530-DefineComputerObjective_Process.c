#include "00467530-DefineComputerObjective_Process.h"
/* 0x00467530 DefineComputerObjective_Process full linked: callers=0 callees=3 */
int32_t sub_467530(void* a1)

{
    sub_4f1400(a1 + 0x20, a1);
    int32_t* esi = a1 + 0xe4;
    int32_t i_1 = 6;
    int32_t i;

    do
    {
        sub_4f1400(&esi[-0x14], a1);
        sub_4f1400(esi, a1);
        esi = &esi[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return 0;
}
