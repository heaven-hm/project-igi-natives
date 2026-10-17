// IGI native provenance: Sound_InvokeSoundFileSNotValidFo - 0x004E67B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E67B0-Sound_InvokeSoundFileSNotValidFo.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_InvokeSoundFileSNotValidFo.h"

int32_t Sound_InvokeSoundFileSNotValidFo(int32_t* arg1)

{
    int32_t var_4 = arg1[1];
    return Display_SoundFileSNotValidFo(*arg1);
}
