// Original IGI.EXE function: Config_SaveGameOptions_2 (VA 0x004062D0; static CFG gate PASS, CFG score 1.000).
#include "Config_SaveGameOptions_2.h"
long double Config_SaveGameOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x228);
}
