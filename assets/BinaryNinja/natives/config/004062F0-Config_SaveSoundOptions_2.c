// Original IGI.EXE function: Config_SaveSoundOptions_2 (VA 0x004062F0; static CFG gate FAIL, CFG score 0.491).
#include "Config_SaveSoundOptions_2.h"
int32_t Config_SaveSoundOptions_2(int32_t a1)

{
    *(Config_GetActivePlayerProfileRecord() + 4) = a1;
    /* tailcall */
    return Config_Language_2();
}
