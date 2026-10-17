// Original IGI.EXE function: Config_SaveGraphicOptions_2 (VA 0x004062E0; static CFG gate PASS, CFG score 1.000).
#include "Config_SaveGraphicOptions_2.h"
int32_t Config_SaveGraphicOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 4);
}
