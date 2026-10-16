#include "gi_platform.h"
#include "00495060-Display_RestoreDevice_7.h"
int32_t Display_RestoreDevice_7()

{
    Display_SyncVSync_8(sub_493820);
    FX_UnableToRemoveWinpro(Display_SwapBuffers_7);
    Sys_PushStack_19(g_bcadc4, g_bcacec);
    Sys_PushStack_19(g_bcadc4, g_bcade0);
    DynObj_CreateMagicObject_4(g_bcade8);
    DynObj_CreateMagicObject_4(g_bcad7c);
    DynObj_CreateMagicObject_4(g_bcadac);
    DynObj_CreateMagicObject_4(g_bcadc4);
    return Sys_PopStack_2(g_5ca0e0);
}
