#include "gi_platform.h"
#include "00485150-FX_LocalMissions.h"
int32_t FX_LocalMissions()

{
    g_5c89fc = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:missions", Mission_Open, nullptr);
}
