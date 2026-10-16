#include "00495C80-Display_RestoreDevice_9.h"
/* 0x00495c80 Display_RestoreDevice_9 full linked: callers=1 callees=1 */
int32_t* sub_495c80()

{
    int32_t* result = g_5ca194;

    if (!result)
        return result;

    sub_4b1690(result);
    int32_t* eax = g_5ca190;
    (*(*eax + 0x48))(eax);
    int32_t* eax_1 = g_5ca190;
    return (*(*eax_1 + 8))(eax_1);
}
