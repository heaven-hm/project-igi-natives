// IGI native provenance: HumanPlayer_Invoke16 - 0x00412420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00412420-HumanPlayer_Invoke16.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke16.h"

int32_t HumanPlayer_Invoke16(int32_t* arg1)

{
    int32_t var_4 = 0;
    return Input_SamplePlayerFrame(*arg1);
}
