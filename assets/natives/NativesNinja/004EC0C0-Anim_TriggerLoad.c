#include "004EC0C0-Anim_TriggerLoad.h"
/* 0x004ec0c0 Anim_TriggerLoad full linked: callers=1 callees=1 */
int32_t Anim_TriggerLoad(void* a1)

// Sig: void Anim_TriggerLoad(char *path)
// Note: Loads anim trigger objects from path, Params: Path 'LOCAL:animtrigger'
{
    return sub_4b1420(a1, sub_4ebdf0, nullptr);
}
