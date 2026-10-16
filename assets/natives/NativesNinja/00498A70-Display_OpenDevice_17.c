#include "00498A70-Display_OpenDevice_17.h"
/* 0x00498a70 Display_OpenDevice_17 full linked: callers=2 callees=2 */
int32_t sub_498a70(int32_t* a1, void* a2)

{
    g_6e5bd0 = 0;
    int32_t* eax = a1[0x15b3];
    (*(*eax + 8))(eax);
    sub_4c6840(a2, a1, 0);
    return QTask_FindType(a1);
}
