#include "gi_platform.h"
#include "004534B0-PatrolPathCommand_Update.h"
void PatrolPathCommand_Update(void* a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    char v_400;

    if (valA == 0xffffffff || valA == 6 || valA == 7 || valA == 4)
        Game_DataSymbolLoad(&v_400, (&g_53dfd8)[valA * 2]);
    else
    {
        int32_t v_408 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
        Game_DataSymbolLoad(&v_400, (&g_53dfdc)[valA * 2]);
    }

    void* v_408_2 = &v_400;
    void* v_40c_2 = a1;
}
