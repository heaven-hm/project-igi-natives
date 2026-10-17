// Original IGI.EXE function: FX_LocalMissions (VA 0x00485150; static CFG gate PASS, CFG score 1.000).
#include "FX_LocalMissions.h"
int32_t FX_LocalMissions()

{
    g_5c89fc = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:missions", Mission_Open, nullptr);
}
