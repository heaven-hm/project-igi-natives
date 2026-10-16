#include "004FA910-Script_ParseEnumReal32_27.h"
/* 0x004fa910 Script_ParseEnumReal32_27 full linked: callers=2 callees=3 */
int32_t sub_4fa910(void* a1, int32_t a2)

{
    sub_4b17c0(*(a1 + 4));
    int32_t var_2c = 0x19;
    void var_1c;
    void* var_30 = &var_1c;
    int32_t* var_34 = *(a1 + 4);
    int32_t result = Resource_Unpack(var_34, var_30, var_2c);
    void var_1b;
    memcpy(a2, &var_1b, 0x18);
    result = 1;
    return result;
}
