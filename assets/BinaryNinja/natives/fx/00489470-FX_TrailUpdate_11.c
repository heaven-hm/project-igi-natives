// IGI native provenance: FX_TrailUpdate_11 - 0x00489470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489470-FX_TrailUpdate_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_TrailUpdate_11.h"
long double FX_TrailUpdate_11()

{
    return *(g_bc2360 + 0x68) / (Frames_Get() * 3600.0f) + *(g_bc2360 + 0x6c);
}
