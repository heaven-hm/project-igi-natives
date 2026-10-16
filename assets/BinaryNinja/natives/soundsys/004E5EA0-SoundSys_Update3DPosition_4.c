#include "SoundSys_Update3DPosition_4.h"
uint32_t SoundSys_Update3DPosition_4()

{
    uint32_t result = QTask_InitContext(g_b015c8);
    g_b015c8 = 0xff;
    return result;
}
