#include "004F9C50-Script_ParseEnumInt32_24.h"
/* 0x004f9c50 Script_ParseEnumInt32_24 full linked: callers=1 callees=6 */
int32_t sub_4f9c50(int32_t* a1)

{
    sub_4f9ca0(sub_4f9720(a1[5], a1[2]), a1);
    sub_4f9ca0(sub_4f9720(a1[5], a1[3]), a1);
    void* eax_4 = a1[5];
    *(eax_4 + 0x60) -= 1;
    sub_4af960(a1);
    return sub_4b0d10(a1);
}
