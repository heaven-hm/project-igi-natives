#include "004E76E0-SoundSys_Update3DPosition_10.h"
/* 0x004e76e0 SoundSys_Update3DPosition_10 full linked: callers=2 callees=2 */
int32_t sub_4e76e0(int32_t* a1, char* a2, int32_t a3)

{
    String_VFormat(0xa5ea78, a2, a3);
    return sub_4e7710(a1, 0xa5ea78);
}
