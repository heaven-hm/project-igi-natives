#include "Menu_FormatScreen_16.h"
int32_t Menu_FormatScreen_16(int32_t a1) __pure

{
    if (a1 != 7 && a1 != 6)
        return 0;

    return 1;
}
