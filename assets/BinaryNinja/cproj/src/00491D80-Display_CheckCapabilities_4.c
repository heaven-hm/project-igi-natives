#include "gi_platform.h"
#include "00491D80-Display_CheckCapabilities_4.h"
int32_t Display_CheckCapabilities_4(int32_t a1)

{
    int32_t v_c = Display_OpenDevice_5();
    int32_t v_4 = a1;
    char v_10;
    return Display_SyncVSync_14(&v_10);
}
