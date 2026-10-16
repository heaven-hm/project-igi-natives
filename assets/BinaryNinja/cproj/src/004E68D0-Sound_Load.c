#include "gi_platform.h"
#include "004E68D0-Sound_Load.h"
int32_t Sound_Load(void* a1)

// Sig: void Sound_Load(char *sound_dir)
// Note: Load all level sounds from path , Params: Path of sound like
// 'MISSION:sounds'
{
    return Sys_IllegalDeviceNameInP(a1, SoundSys_AttachLipsync_6, nullptr);
}
