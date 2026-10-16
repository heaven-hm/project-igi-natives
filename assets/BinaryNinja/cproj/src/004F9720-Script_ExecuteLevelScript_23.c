#include "gi_platform.h"
#include "004F9720-Script_ExecuteLevelScript_23.h"
void* Script_ExecuteLevelScript_23(void* a1, int32_t a2)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x6c)) || a2 >= (*(int32_t*)(uintptr_t)(a1 + 0x58)) || a2 < 0 || a2 == 0xffffffff)
        return 0;

    int32_t* valA4 = Script_UndefinedGraphnodeda(a1) * a2 + (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    int32_t valA6 = *valA4 + 1;
    int32_t valA7 = -(valA6);
    return (valA7 - valA7) & valA4;
}
