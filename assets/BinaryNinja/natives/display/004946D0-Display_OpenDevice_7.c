#include "Display_OpenDevice_7.h"
int32_t Display_OpenDevice_7()

{
    *(g_bcade8 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    return 0xffffffff;
}
