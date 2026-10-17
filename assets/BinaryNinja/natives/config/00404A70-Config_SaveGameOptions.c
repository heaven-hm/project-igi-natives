// Original IGI.EXE function: Config_SaveGameOptions (VA 0x00404A70; static CFG gate PASS, CFG score 1.000).
#include "Config_SaveGameOptions.h"
void* Config_SaveGameOptions()

{
    return &(&g_bc25ac)[g_bc2384 * 0x159];
}
