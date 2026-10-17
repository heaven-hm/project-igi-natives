// Original IGI.EXE function: Menu_RequestScreen_5 (VA 0x00419090; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_5.h"
void* Menu_RequestScreen_5(void* context)

{
    void* result = *(context + 0x30);

    if (!result)
        return result;

    void* item_8_1 = context;
    return Menu_PlayMusic(result);
}
