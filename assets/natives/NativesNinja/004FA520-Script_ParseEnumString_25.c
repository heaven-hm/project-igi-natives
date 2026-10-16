#include "004FA520-Script_ParseEnumString_25.h"
/* 0x004fa520 Script_ParseEnumString_25 full linked: callers=1 callees=2 */
int32_t __convention("regparm") sub_4fa520(int32_t a1, int32_t a2, int32_t a3, void* a4, char a5)

{
    int32_t var_4 = a3;
    *(&var_4 + 2) = 1;
    *(&var_4 + 3) = a5;
    sub_4b17c0(*(a4 + 4));
    int32_t result = sub_4b1700(*(a4 + 4), (&var_4 + 2), 2);
    result = 1;
    return result;
}
