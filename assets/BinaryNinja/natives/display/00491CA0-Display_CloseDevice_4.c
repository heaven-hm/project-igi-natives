#include "Display_CloseDevice_4.h"
void Display_CloseDevice_4(int32_t* a1)

{
    for (int32_t* i = a1; i; i = *i)
        i[1]();
}
