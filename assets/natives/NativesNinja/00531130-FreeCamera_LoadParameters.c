#include "00531130-FreeCamera_LoadParameters.h"
/* 0x00531130 FreeCamera_LoadParameters full linked: callers=0 callees=2 */
int32_t sub_531130(void* a1)

{
    char result = *(a1 + 0x84);

    if (!result)
        return result;

    int32_t* eax = sub_4e75a0();
    int32_t var_18_1 = 0x42c80000;
    return Camera_SubmitFrame(*(a1 + 0x88), a1 + 0x48, a1 + 0x20, *(a1 + 0x60), 0x3f800000,
        eax, 0, 0, 0f);
}
