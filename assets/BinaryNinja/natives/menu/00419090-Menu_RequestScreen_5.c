#include "Menu_RequestScreen_5.h"
void* Menu_RequestScreen_5(void* a1)

{
    void* result = *(a1 + 0x30);

    if (!result)
        return result;

    void* v_8_1 = a1;
    return Menu_PlayMusic(result);
}
