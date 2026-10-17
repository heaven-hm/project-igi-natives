// Original IGI.EXE function: Cabinet_Open (VA 0x00443DA0; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Open.h"

int32_t Cabinet_Open(int32_t* pThis )

{
    void* result_val = *pThis;
    return FX_FireBallUpdate_9(result_val, result_val + 0x404);
}
