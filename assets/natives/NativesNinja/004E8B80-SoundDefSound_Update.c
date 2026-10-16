#include "004E8B80-SoundDefSound_Update.h"
/* 0x004e8b80 SoundDefSound_Update full linked: callers=0 callees=2 */
int32_t sub_4e8b80(void* a1, float* a2)

{
    void* edi = *(a1 + 0x14);
    int16_t result;

    if (edi)
        result = sub_4eba80();

    long double x87_r7_1;

    if (!edi || *(edi + 0x1c) != result)
        x87_r7_1 = *(a1 + 0xd8);
    else
        x87_r7_1 = sub_4b3130(a1 + 0xa0) + *(a1 + 0xd8);

    long double temp0 = *a2;
    x87_r7_1 - temp0;
    result = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x41)
        return result;

    *a2 = x87_r7_1;
    return result;
}
