// Original IGI.EXE function: Menu_RequestScreen_5 (VA 0x00419090; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_5.h"
void* Menu_RequestScreen_5(void* a1)

{
    void* result = *(a1 + 0x30);

    if (!result)
        return result;

    void* v_8_1 = a1;
    return Menu_PlayMusic(result);
}
