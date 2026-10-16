#include "QTask_RegisterEventCallback_3.h"
uint32_t QTask_RegisterEventCallback_3(int16_t a1, int32_t a2)

{
    uint32_t result = a1;
    *(result * 0x30 + 0xaf5f0c) = a2 | 0x20000000;
    return result;
}
