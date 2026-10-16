#include "004E7B40-SoundSys_LocalDebugFnt.h"
/* 0x004e7b40 SoundSys_LocalDebugFnt full linked: callers=1 callees=4 */
int32_t sub_4e7b40()

{
    int16_t eax = g_a5ea76;
    g_a5ebcc = 0;
    QTask_CloseEvent_2(eax);
    sub_4b64b0("LOCAL:debug.fnt");
    sub_4916a0(sub_4e7900);
    return sub_4e7660(g_a5ebd0);
}
