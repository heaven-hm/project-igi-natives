// Original IGI.EXE function: PictureBox_Update (VA 0x0041B530; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_Update.h"
int32_t PictureBox_Update(void* a1, int32_t a2)

{
    Script_Isexists(a1 + 0x95c, a1);
    Script_Isexists(a1 + 0x9ac, a1);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
