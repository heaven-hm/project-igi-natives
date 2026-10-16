#include "004FAA10-Script_CallNativeHandler_27.h"
/* 0x004faa10 Script_CallNativeHandler_27 full linked: callers=3 callees=4 */
uint32_t sub_4faa10(void* a1)

{
    void* esi = a1;
    sub_4b17c0(*(esi + 4));
    Resource_Unpack(*(esi + 4), &a1, 1);
    sub_4b17c0(*(esi + 4));
    sub_4b1730(*(esi + 4), 0xffffffff, 1);
    return a1;
}
