#include "004894E0-FX_FireBallUpdate_12.h"
/* 0x004894e0 FX_FireBallUpdate_12 full linked: callers=2 callees=2 */
int32_t* sub_4894e0(int32_t* a1)

{
    Qtask_UpdateList(a1[2]);
    *(a1 + 0x2a) = 0;
    return sub_4af960(a1);
}
