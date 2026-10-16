#include "AnimCam_Update_2.h"

void* AnimCam_Update_2(void* pThis)

{
    *(*(pThis + 0x14) + 0x194) = 0xff7fffff;
    return pThis;
}
