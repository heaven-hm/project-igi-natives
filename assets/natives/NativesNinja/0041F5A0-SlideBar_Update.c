#include "0041F5A0-SlideBar_Update.h"
/* 0x0041f5a0 SlideBar_Update full linked: callers=0 callees=8 */
int32_t* SlideBar_Update(void* a1, int32_t a2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(a1, a2);

    if (a2)
        *(a1 + 0x44) = a2;

    *(a1 + 0x54) = 0;
    *(a1 + 0x94) = 0;
    *(a1 + 0xac) = 0x32;
    *(a1 + 0xb4) = 1;
    *(a1 + 0x98) = Menu_LeaveMenus_11(0);
    struct status_msg* eax_4 = Menu_LeaveMenus_11(0);
    int32_t ecx = *(a1 + 0x44);
    *(a1 + 0x9c) = eax_4;
    *(*(a1 + 0x98) + 0x44) = ecx;
    *(*(a1 + 0x9c) + 0x44) = *(a1 + 0x44);
    *(*(a1 + 0x9c) + 0x40) = 0;
    *(*(a1 + 0x98) + 0x40) = 0;
    *(*(a1 + 0x9c) + 0x3c) = 0;
    *(*(a1 + 0x98) + 0x3c) = 0;
    *(a1 + 0x20) = 0x12c;
    *(a1 + 0x24) = 0xe6;
    *(a1 + 0x3c) = 1;
    *(a1 + 0x40) = 1;
    sub_4f1320(a1 + 0xb8);
    sub_4f1320(a1 + 0x108);
    sub_4f1320(a1 + 0x158);
    sub_4f1320(a1 + 0x1a8);
    int32_t* result = sub_4f1320(a1 + 0x1f8);
    *(a1 + 0xa0) = 0;
    *(a1 + 0xb5) = 0;
    *(a1 + 0xa8) = 0x3d4ccccd;
    *(a1 + 0x248) = 0;
    *(a1 + 0xa4) = 0;
    return result;
}
