#include "00415450-IntroScreen_Setup.h"
/* 0x00415450 IntroScreen_Setup full linked: callers=0 callees=2 */
void* IntroScreen_Setup(void* a1)

{
    int32_t eax = *(a1 + 0x30);

    if (eax)
        Resource_Flush(eax);

    void* result = *(a1 + 0x2c);

    if (result)
        result = sub_4903b0(result);

    return result;
}
