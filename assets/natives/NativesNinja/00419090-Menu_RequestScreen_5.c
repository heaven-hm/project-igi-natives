#include "00419090-Menu_RequestScreen_5.h"
/* 0x00419090 Menu_RequestScreen_5 full linked: callers=1 callees=1 */
void* Menu_RequestScreen_5(void* a1)

{
    void* result = *(a1 + 0x30);

    if (!result)
        return result;

    void* var_8_1 = a1;
    return Menu_PlayMusic(result);
}
