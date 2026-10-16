#include "gi_platform.h"
#include "00499FF0-Display_OpenDevice_18.h"
uint32_t Display_OpenDevice_18(int32_t a1) __pure

{
    if (a1 <= 0x3f800000)
        return 0;

    return (a1 - 0x3f800000) >> 0x14;
}
