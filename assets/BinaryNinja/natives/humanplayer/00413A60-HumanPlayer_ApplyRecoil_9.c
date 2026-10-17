// Original IGI.EXE function: HumanPlayer_ApplyRecoil_9 (VA 0x00413A60; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_9.h"
int32_t HumanPlayer_ApplyRecoil_9(void* context, int32_t param_2)

{
    *(context + 0xd5c) = param_2;
    return param_2;
}
