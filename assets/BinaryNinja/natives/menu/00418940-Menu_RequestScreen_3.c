// Original IGI.EXE function: Menu_RequestScreen_3 (VA 0x00418940; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_3.h"
void* Menu_RequestScreen_3(void* context)

{
    void* result = *(context + 0x34);

    if (result)
    {
        result = *(context + 0x30);
        *(context + 0x34) = 0;

        if (result)
        {
            void* item_c_1 = context;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(context, *(context + 0x30));
        }
    }

    return result;
}
