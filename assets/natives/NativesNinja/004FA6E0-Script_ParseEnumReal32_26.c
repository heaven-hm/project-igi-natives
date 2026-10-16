#include "004FA6E0-Script_ParseEnumReal32_26.h"
/* 0x004fa6e0 Script_ParseEnumReal32_26 full linked: callers=1 callees=3 */
int32_t sub_4fa6e0(void* a1, int32_t a2)

{
    char var_1c = 8;
    void var_1b;
    memcpy(&var_1b, a2, 0x18);
    sub_4b17c0(*(a1 + 4));
    int32_t var_2c = 0x19;
    char* var_30 = &var_1c;
    int32_t* var_34 = *(a1 + 4);
    int32_t result = sub_4b1700(var_34, var_30, var_2c);
    result = 1;
    return result;
}
