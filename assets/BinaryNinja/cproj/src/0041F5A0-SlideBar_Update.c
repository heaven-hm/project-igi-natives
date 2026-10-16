#include "gi_platform.h"
#include "0041F5A0-SlideBar_Update.h"
int32_t* SlideBar_Update(void* a1, int32_t a2)

{
    ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a96ae0)))(a1, a2);

    if (a2)
        (*(int32_t*)(uintptr_t)(a1 + 0x44)) = a2;

    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x94)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xac)) = 0x32;
    (*(int32_t*)(uintptr_t)(a1 + 0xb4)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = Menu_LeaveMenus_11(0);
    struct status_msg* valA4 = Menu_LeaveMenus_11(0);
    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = valA4;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 0x44)) = objC;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x9c) + 0x44)) = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    (*(int32_t*)(uintptr_t)(*(a1 + 0x9c) + 0x40)) = 0;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 0x40)) = 0;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x9c) + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0x12c;
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = 0xe6;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 1;
    Script_ExecuteLevelScript_6(a1 + 0xb8);
    Script_ExecuteLevelScript_6(a1 + 0x108);
    Script_ExecuteLevelScript_6(a1 + 0x158);
    Script_ExecuteLevelScript_6(a1 + 0x1a8);
    int32_t* result = Script_ExecuteLevelScript_6(a1 + 0x1f8);
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb5)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = 0x3d4ccccd;
    (*(int32_t*)(uintptr_t)(a1 + 0x248)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xa4)) = 0;
    return result;
}
