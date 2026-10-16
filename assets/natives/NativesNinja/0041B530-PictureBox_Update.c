#include "0041B530-PictureBox_Update.h"
/* 0x0041b530 PictureBox_Update full linked: callers=0 callees=4 */
int32_t PictureBox_Update(void* a1, int32_t a2)

{
    sub_4f1400(a1 + 0x95c, a1);
    sub_4f1400(a1 + 0x9ac, a1);
    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
