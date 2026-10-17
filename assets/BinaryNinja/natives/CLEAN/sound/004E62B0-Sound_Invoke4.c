// IGI native provenance: Sound_Invoke4 - 0x004E62B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E62B0-Sound_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke4.h"

int32_t Sound_Invoke4()

{
    /* tailcall */
    return Display_CloseDevice_10(SoundSys_EvaluateTrigger_4());
}
