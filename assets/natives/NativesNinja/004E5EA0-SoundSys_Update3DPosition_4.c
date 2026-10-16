#include "004E5EA0-SoundSys_Update3DPosition_4.h"
/* 0x004e5ea0 SoundSys_Update3DPosition_4 full linked: callers=1 callees=1 */
uint32_t sub_4e5ea0()

{
    uint32_t result = QTask_InitContext(g_b015c8);
    g_b015c8 = 0xff;
    return result;
}
