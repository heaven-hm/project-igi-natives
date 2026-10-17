// Original IGI.EXE function: Menu_RequestScreen_3 (VA 0x00418940; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_3.h"
void* Menu_RequestScreen_3(void* a1)

{
    void* result = *(a1 + 0x34);

    if (result)
    {
        result = *(a1 + 0x30);
        *(a1 + 0x34) = 0;

        if (result)
        {
            void* v_c_1 = a1;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(a1, *(a1 + 0x30));
        }
    }

    return result;
}
