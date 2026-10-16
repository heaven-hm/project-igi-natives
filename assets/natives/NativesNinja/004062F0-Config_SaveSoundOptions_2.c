#include "004062F0-Config_SaveSoundOptions_2.h"
/* 0x004062f0 Config_SaveSoundOptions_2 full linked: callers=1 callees=2 */
int32_t Config_SaveSoundOptions_2(int32_t a1)

{
    *(Config_GetActivePlayerProfileRecord() + 4) = a1;
    /* tailcall */
    return Config_Language_2();
}
