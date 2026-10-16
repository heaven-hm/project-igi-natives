#include "004F9720-Script_ExecuteLevelScript_23.h"
/* 0x004f9720 Script_ExecuteLevelScript_23 full linked: callers=39 callees=1 */
void* sub_4f9720(void* a1, int32_t a2)

{
    if (!*(a1 + 0x6c) || a2 >= *(a1 + 0x58) || a2 < 0 || a2 == 0xffffffff)
        return 0;

    int32_t* eax_4 = sub_4f94d0(a1) * a2 + *(a1 + 0x6c);
    int32_t eax_6 = *eax_4 + 1;
    int32_t eax_7 = -(eax_6);
    return (eax_7 - eax_7) & eax_4;
}
