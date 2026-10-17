// Original IGI.EXE function: FX_TrailUpdate_11 (VA 0x00489470; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_11.h"
long double FX_TrailUpdate_11()

{
    return *(g_bc2360 + 0x68) / (Frames_Get() * 3600.0f) + *(g_bc2360 + 0x6c);
}
