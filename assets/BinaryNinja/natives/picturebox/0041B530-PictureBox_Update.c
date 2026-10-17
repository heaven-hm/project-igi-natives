// Original IGI.EXE function: PictureBox_Update (VA 0x0041B530; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_Update.h"
int32_t PictureBox_Update(void* context, int32_t param_2)

{
    Script_Isexists(context + 0x95c, context);
    Script_Isexists(context + 0x9ac, context);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
