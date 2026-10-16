#include "004A2600-Camera_ResetMatrix.h"
/* 0x004a2600 Camera_ResetMatrix full linked: callers=1 callees=0 */
int32_t sub_4a2600(void* a1)

{
    int32_t i_1 = 4;
    int32_t esi_1 =
        *(a1 + 0x6c) * 128f - ((((*(a1 + 0x64) * -128f) << 8) + *(a1 + 0x68) * -128f) << 8);
    int32_t edx_2 = 0x935c10;
    int32_t result =
        *(a1 + 0x6c) * 255f - ((((*(a1 + 0x64) * -255f) << 8) + *(a1 + 0x68) * -255f) << 8);
    int32_t i;

    do
    {
        int32_t edx_3 = edx_2 + 0x80;
        int32_t ecx_8;
        int32_t edi_2;
        edi_2 = __memfill_u32(edx_2, esi_1, 0x20);
        edx_2 = edx_3 + 0x80;
        i = i_1;
        i_1 -= 1;
        int32_t ecx_9;
        int32_t edi_4;
        edi_4 = __memfill_u32(edx_3, result, 0x20);
    } while (i != 1);
    return result;
}
