// IGI native provenance: HumanPlayer_ApplyRecoil_9 - 0x00413A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413A60-HumanPlayer_ApplyRecoil_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyRecoil_9.h"
int32_t HumanPlayer_ApplyRecoil_9(void* context, int32_t param_2)

{
    *(context + 0xd5c) = param_2;
    return param_2;
}
