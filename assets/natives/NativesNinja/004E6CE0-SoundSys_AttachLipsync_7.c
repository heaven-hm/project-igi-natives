#include "004E6CE0-SoundSys_AttachLipsync_7.h"
/* 0x004e6ce0 SoundSys_AttachLipsync_7 full linked: callers=1 callees=0 */
int32_t sub_4e6ce0(void* a1, char a2)

{
    int32_t edx = 0;
    a2 = a2;
    int32_t eax = 0;
    eax = g_54881b;
    edx = *(a1 + 0x1c);
    return (*(((eax * 0x180 + edx) << 2) + &g_a96ae0))(a1, &a2);
}
