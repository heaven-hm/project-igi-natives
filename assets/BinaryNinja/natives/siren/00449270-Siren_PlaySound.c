#include "Siren_PlaySound.h"

int32_t Siren_PlaySound(void* pThis, int32_t* param)

{
    *param = pThis + 0x20;
    param[1] = pThis + 0x70;
    int32_t result = *(pThis + 0x178);
    param[2] = result;
    return result;
}
