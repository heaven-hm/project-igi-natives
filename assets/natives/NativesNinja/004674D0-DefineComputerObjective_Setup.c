#include "004674D0-DefineComputerObjective_Setup.h"
/* 0x004674d0 DefineComputerObjective_Setup full linked: callers=0 callees=3 */
char* sub_4674d0(void* a1)

{
    sub_4f1340(a1 + 0x20);
    int32_t* esi_1 = a1 + 0xe4;
    int32_t i_1 = 6;
    char* result;
    int32_t i;

    do
    {
        sub_4f1340(&esi_1[-0x14]);
        result = sub_4f1340(esi_1);
        esi_1 = &esi_1[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    g_5bdc78 = 0;
    return result;
}
