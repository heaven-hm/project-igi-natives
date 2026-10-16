#include "Config_SaveSoundOptions_2.h"
int32_t Config_SaveSoundOptions_2(int32_t a1)

{
    *(Config_GetActivePlayerProfileRecord() + 4) = a1;
    /* tailcall */
    return Config_Language_2();
}
