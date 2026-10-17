// Original IGI.EXE function: Menu_UpdateLanguage_2 (VA 0x00418710; static CFG gate PASS, CFG score 0.933).
#include "Menu_UpdateLanguage_2.h"
void* Menu_UpdateLanguage_2(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x20) = a2;
    void* result = Script_ExecuteLevelScript_4(a2);
    *(a1 + 0x30) = result;

    if (result)
    {
        void* v_10_1 = a1;
        Menu_PlayMusic(result);

        if (a3)
            Menu_FormatScreen_2(a1);

        Menu_PlayMusic_2(a1, *(a1 + 0x30));
        void* valA2 = *(a1 + 0x30);
        int32_t objC1 = 0;
        *(a1 + 0x27cd) = 0;
        *(a1 + 0x27ce) = 0;
        *(a1 + 0x27cc) = 0;
        *(a1 + 0x27cf) = 1;
        objC1 = *(valA2 + 0x1c);
        result = (*((objC1 << 2) + &g_a970e0))(valA2);
        *(a1 + 0x27cf) = 0;
    }

    return result;
}
