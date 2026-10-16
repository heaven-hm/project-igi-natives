#include "00485150-FX_LocalMissions.h"
/* 0x00485150 FX_LocalMissions full linked: callers=1 callees=1 */
int32_t sub_485150()

{
    g_5c89fc = 0;
    return sub_4b1420("LOCAL:missions", Mission_Open, nullptr);
}
