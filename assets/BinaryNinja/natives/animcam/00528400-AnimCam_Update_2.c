// Original IGI.EXE function: AnimCam_Update_2 (VA 0x00528400; static CFG gate PASS, CFG score 1.000).
#include "AnimCam_Update_2.h"

void* AnimCam_Update_2(void* pThis)

{
    *(*(pThis + 0x14) + 0x194) = 0xff7fffff;
    return pThis;
}
