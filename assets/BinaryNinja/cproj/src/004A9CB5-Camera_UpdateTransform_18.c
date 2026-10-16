#include "gi_platform.h"
#include "004A9CB5-Camera_UpdateTransform_18.h"
🌐  int32_t __load_CW(int32_t a1)

{
    (*(int32_t*)(uintptr_t)(&a1 + 2)) = (a1 & 0x300) | 0x7f;
    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16((*(int32_t*)(uintptr_t)(&a1 + 2)));
}
