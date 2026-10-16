#include "gi_platform.h"
#include "0041B530-PictureBox_Update.h"
int32_t PictureBox_Update(void* a1, int32_t a2)

{
    Script_Isexists(a1 + 0x95c, a1);
    Script_Isexists(a1 + 0x9ac, a1);
    return ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
}
