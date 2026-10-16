#include "004534B0-PatrolPathCommand_Update.h"
/* 0x004534b0 PatrolPathCommand_Update full linked: callers=1 callees=3 */
void sub_4534b0(void* a1)

{
    int32_t eax = *(a1 + 0x20);
    void var_400;

    if (eax == 0xffffffff || eax == 6 || eax == 7 || eax == 4)
        Game_DataSymbolLoad(&var_400, (&g_53dfd8)[eax * 2]);
    else
    {
        int32_t var_408 = *(a1 + 0x24);
        Game_DataSymbolLoad(&var_400, (&g_53dfdc)[eax * 2]);
    }

    void* var_408_2 = &var_400;
    void* var_40c_2 = a1;
}
