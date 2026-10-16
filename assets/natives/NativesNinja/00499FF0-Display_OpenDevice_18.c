#include "00499FF0-Display_OpenDevice_18.h"
/* 0x00499ff0 Display_OpenDevice_18 full linked: callers=7 callees=0 */
uint32_t sub_499ff0(int32_t a1) __pure

{
    if (a1 <= 0x3f800000)
        return 0;

    return (a1 - 0x3f800000) >> 0x14;
}
