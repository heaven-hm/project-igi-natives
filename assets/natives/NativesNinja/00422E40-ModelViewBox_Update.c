#include "00422E40-ModelViewBox_Update.h"
/* 0x00422e40 ModelViewBox_Update full linked: callers=0 callees=8 */
void* ModelViewBox_Update(void* a1, int32_t a2)

{
    g_b818ac = 0x3f000000;
    g_b818b0 = 0x3f000000;
    g_b818b4 = 0x3f000000;
    (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
    *(a1 + 0xc0) = sub_4cec10("minefield");
    struct status_msg* eax_7 = QTask_HandleInput(a1, sub_4c48c0(), 0);
    __builtin_memset(&eax_7->head[8], 0, 0x18);
    sub_4c5710(*(a1 + 0x58), eax_7, *(a1 + 0xc0));
    void* result = sub_4c6890(*(a1 + 0x58), eax_7, 1);
    *(a1 + 0xc4) = eax_7;
    return result;
}
