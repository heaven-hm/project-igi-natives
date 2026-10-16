#include "004FA7E0-Script_CallNativeHandler_26.h"
/* 0x004fa7e0 Script_CallNativeHandler_26 full linked: callers=4 callees=2 */
char* sub_4fa7e0(void* a1, char* a2)

{
    void* esi = a1;
    sub_4b17c0(*(esi + 4));
    Resource_Unpack(*(esi + 4), &a1, 2);
    char* result = a2;
    *result = *(&a1 + 1);
    result = 1;
    return result;
}
