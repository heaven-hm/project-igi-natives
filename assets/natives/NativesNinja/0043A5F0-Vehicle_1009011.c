#include "0043A5F0-Vehicle_1009011.h"
/* 0x0043a5f0 Vehicle_1009011 full linked: callers=2 callees=3 */
int32_t Vehicle_1009011(void* a1)

{
    char result = *(a1 + 0x1a1);

    if (result)
        return result;

    sub_480fe0(a1 + 0x20, 1, 0, 0x3d4ccccd, 0x45800000, 0, 0x45000000, 5, 2, nullptr,
        "1009_01_1", a1 + 0x180, 0x15, 2, 0x46a00000, 0);
    *(a1 + 0x1a1) = 1;
    return sub_4c48d0(a1, sub_4cec10(a1 + 0x150));
}
