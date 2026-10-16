#include "004A5760-Camera_ApplyPostProcess_5.h"
/* 0x004a5760 Camera_ApplyPostProcess_5 full linked: callers=3 callees=1 */
int32_t sub_4a5760(long double a1 @ st0, long double a2 @ st1) __location("st0")

{
    double var_8 = a1;
    int16_t x87control;
    int16_t x87tag;
    return sub_4a5782(*(&var_8 + 4), x87control, x87tag, a1, a2, var_8);
}
