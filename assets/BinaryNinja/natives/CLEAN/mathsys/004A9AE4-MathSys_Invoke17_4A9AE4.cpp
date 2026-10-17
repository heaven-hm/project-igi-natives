// IGI native provenance: MathSys_Invoke17_4A9AE4 - 0x004A9AE4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9AE4-MathSys_Invoke17_4A9AE4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17_4A9AE4.h"

int32_t __fastcall MathSys_Invoke17_4A9AE4(char arg1)

{
    void* frame_ptr;

    if (arg1)
        /* tailcall */
        return MathSys_ProcessStep_4A8C78(arg1, frame_ptr);
}
