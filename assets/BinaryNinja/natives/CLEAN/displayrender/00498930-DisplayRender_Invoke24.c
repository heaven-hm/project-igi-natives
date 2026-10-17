// IGI native provenance: DisplayRender_Invoke24 - 0x00498930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498930-DisplayRender_Invoke24.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke24.h"

int32_t DisplayRender_Invoke24()

{
    if (FX_ExplosionSpawn_24())
        DebugBreak();

    Camera_ApplyBandFilter_6(1);
    /* tailcall */
    return Display_SetGammaRamp_16();
}
