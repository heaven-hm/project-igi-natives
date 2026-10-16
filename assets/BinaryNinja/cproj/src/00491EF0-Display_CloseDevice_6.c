#include "gi_platform.h"
#include "00491EF0-Display_CloseDevice_6.h"
HRESULT Display_CloseDevice_6(int32_t a1)

{
    return DirectDrawEnumerateExA(Display_SetDisplayMode_6, a1, 7);
}
