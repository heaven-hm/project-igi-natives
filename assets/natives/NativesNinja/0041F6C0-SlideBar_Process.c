#include "0041F6C0-SlideBar_Process.h"
/* 0x0041f6c0 SlideBar_Process full linked: callers=0 callees=8 */
int32_t SlideBar_Process(void* a1)

{
    sub_4f1340(a1 + 0xb8);
    sub_4f1340(a1 + 0x108);
    sub_4f1340(a1 + 0x158);
    sub_4f1340(a1 + 0x1a8);
    sub_4f1340(a1 + 0x1f8);
    Menu_FormatScreen_3(*(a1 + 0x98));
    Menu_FormatScreen_3(*(a1 + 0x9c));
    int32_t eax_3 = sub_4f1220();
    int32_t edx_2 = 0;
    edx_2 = *(a1 + 0x1c);
    return (*(((eax_3 * 0x180 + edx_2) << 2) + &g_a96ae0))(a1);
}
