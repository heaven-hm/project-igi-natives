// Original IGI.EXE function: Config_RegisterOptions_2 (VA 0x004062C0; static CFG gate PASS, CFG score 1.000).
#include "Config_RegisterOptions_2.h"
long double Config_RegisterOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x224);
}
