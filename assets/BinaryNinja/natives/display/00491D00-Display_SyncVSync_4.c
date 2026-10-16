#include "Display_SyncVSync_4.h"
int32_t Display_SyncVSync_4()

{
    Display_SetDisplayMode_4();
    Display_CreateSurface_3();
    Display_OpenDevice_14();
    return Display_CloseDevice_4(g_bcae00);
}
