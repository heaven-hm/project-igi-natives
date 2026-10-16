#include "004A26C0-Camera_UpdateTransform_2.h"
/* 0x004a26c0 Camera_UpdateTransform_2 full linked: callers=1 callees=0 */
int32_t sub_4a26c0(void* a1)

{
    int32_t result =
        *(a1 + 0x6c) * 255f - ((((*(a1 + 0x64) * -255f) << 8) + *(a1 + 0x68) * -255f) << 8);
    int32_t ecx_4;
    int32_t edi;
    edi = __memfill_u32(0x935c10, result, 0x100);
    return result;
}
