#include "004E68D0-Sound_Load.h"
/* 0x004e68d0 Sound_Load full linked: callers=3 callees=1 */
int32_t Sound_Load(void* a1)

// Sig: void Sound_Load(char *sound_dir)
// Note: Load all level sounds from path , Params: Path of sound like
// 'MISSION:sounds'
{
    return sub_4b1420(a1, sub_4e68f0, nullptr);
}
