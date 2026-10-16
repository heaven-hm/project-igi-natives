#include "Camera_UpdateTransform_18.h"
🌐  int32_t __load_CW(int32_t a1)

{
    *(&a1 + 2) = (a1 & 0x300) | 0x7f;
    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16(*(&a1 + 2));
}
