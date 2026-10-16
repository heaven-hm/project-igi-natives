#include "00489470-FX_TrailUpdate_11.h"
/* 0x00489470 FX_TrailUpdate_11 full linked: callers=4 callees=1 */
long double sub_489470()

{
    return *(g_bc2360 + 0x68) / (Frames_Get() * 3600f) + *(g_bc2360 + 0x6c);
}
