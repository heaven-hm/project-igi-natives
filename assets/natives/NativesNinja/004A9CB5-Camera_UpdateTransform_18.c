#include "004A9CB5-Camera_UpdateTransform_18.h"
/* 0x004a9cb5 Camera_UpdateTransform_18 full linked: callers=3 callees=0 */
🌐  int32_t __load_CW(int32_t a1)

{
    *(&a1 + 2) = (a1 & 0x300) | 0x7f;
    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16(*(&a1 + 2));
}
