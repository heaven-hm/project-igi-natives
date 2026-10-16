#include "004FA9D0-Script_ExecuteLevelScript_27.h"
/* 0x004fa9d0 Script_ExecuteLevelScript_27 full linked: callers=2 callees=4 */
int32_t sub_4fa9d0(void* a1, int32_t a2, int32_t a3)

{
    void* esi = a1;
    sub_4fa7e0(esi, &a1);
    int32_t __saved_ecx;
    sub_4fa850(esi, &__saved_ecx);
    sub_4b17c0(*(esi + 4));
    int32_t result = Resource_Unpack(*(esi + 4), a2, a3);
    result = 1;
    return result;
}
