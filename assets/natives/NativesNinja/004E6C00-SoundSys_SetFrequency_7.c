#include "004E6C00-SoundSys_SetFrequency_7.h"
/* 0x004e6c00 SoundSys_SetFrequency_7 full linked: callers=35 callees=1 */
int32_t sub_4e6c00(void* a1)

{
    int32_t eax_3 = sub_4e6730();
    int32_t edx = 0;
    edx = *(a1 + 0x1c);
    int32_t result = *(((eax_3 * 0x180 + edx) << 2) + &g_a96ae0);

    if (result)
        result = result(a1);

    return result;
}
