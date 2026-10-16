#include "FX_TrailUpdate_11.h"
long double FX_TrailUpdate_11()

{
    return *(g_bc2360 + 0x68) / (Frames_Get() * 3600f) + *(g_bc2360 + 0x6c);
}
