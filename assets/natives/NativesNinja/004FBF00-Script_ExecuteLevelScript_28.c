#include "004FBF00-Script_ExecuteLevelScript_28.h"
/* 0x004fbf00 Script_ExecuteLevelScript_28 full linked: callers=1 callees=1 */
float sub_4fbf00(void* a1, float a2, float* a3, float* a4, int32_t a5, int32_t a6) __location("eax")

{
    int32_t ecx_1 = a6 * 7;
    int32_t var_4 = ecx_1;
    int32_t var_8 = a5;
    return sub_4fc8e0(a1 + 0xf0, a1 + 0x70, a2, a3, *a4, *(a1 + (ecx_1 << 3) + 0x1c4));
}
