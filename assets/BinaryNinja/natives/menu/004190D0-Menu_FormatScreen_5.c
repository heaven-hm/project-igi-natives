#include "Menu_FormatScreen_5.h"
void* Menu_FormatScreen_5(void* a1)

{
    *(a1 + 0x26c4) = 1;
    return a1;
}
