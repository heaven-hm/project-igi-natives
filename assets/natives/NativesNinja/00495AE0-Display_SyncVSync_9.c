#include "00495AE0-Display_SyncVSync_9.h"
/* 0x00495ae0 Display_SyncVSync_9 full linked: callers=1 callees=1 */
int32_t sub_495ae0()

{
    void* eax_5 = g_6840f0;

    if (eax_5)
    {
        sub_4b0d10(eax_5);
        g_6840f0 = 0;
        g_6840f8 = 0;
        g_6840f4 = 0;
    }

    int32_t result = g_67a498;

    if (!result)
        return result;

    if (g_6840ea)
    {
        int32_t* eax_1 = g_67a49c;
        (*(*eax_1 + 8))(eax_1);
    }

    int32_t* eax_2 = g_5ca154;
    (*(*eax_2 + 0x48))(eax_2);
    int32_t* eax_3 = g_5ca154;
    (*(*eax_3 + 8))(eax_3);
    int32_t* eax_4 = g_67a498;
    return (*(*eax_4 + 8))(eax_4);
}
