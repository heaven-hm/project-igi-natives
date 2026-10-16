#include "004F2390-Script_ParseEnumInt32_13.h"
/* 0x004f2390 Script_ParseEnumInt32_13 full linked: callers=9 callees=0 */
void* sub_4f2390(void* a1)

{
    int32_t edx = 0;
    void* eax_1 = a1;
    edx = *(eax_1 + 0x1c);
    (*(((*g_a76c08 * 0x180 + edx) << 2) + &g_a96ae0))(eax_1, &a1);
    return a1;
}
