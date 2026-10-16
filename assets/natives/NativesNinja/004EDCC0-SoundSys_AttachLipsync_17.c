#include "004EDCC0-SoundSys_AttachLipsync_17.h"
/* 0x004edcc0 SoundSys_AttachLipsync_17 full linked: callers=2 callees=2 */
int32_t sub_4edcc0()

{
    int32_t result = g_a5efd4;

    if (!result)
        return result;

    int32_t eax = sub_4f1a70();
    return QTask_ProcessQueue_2(g_a5efd4, eax, 0);
}
