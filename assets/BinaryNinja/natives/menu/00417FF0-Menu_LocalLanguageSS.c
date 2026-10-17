// Original IGI.EXE function: Menu_LocalLanguageSS (VA 0x00417FF0; static CFG gate PASS, CFG score 1.000).
#include "Menu_LocalLanguageSS.h"
int32_t Menu_LocalLanguageSS(void* a1, int32_t a2)

{
    for (int32_t i = 0; i < 6; )
    {
        int32_t v_114_1 = a2;
        void* v_118_1 = Config_English_2(i);
        void v_100;
        int32_t valA2;
        int32_t tmpD1;
        valA2 = Game_DataSymbolLoad(&v_100, "LOCAL:language/%s/%s");
        void* v_128_1 = &v_100;
        *(a1 + (*(a1 + 0x25c) << 2) + 0x1dc) = Resource_Load(valA2, tmpD1, &v_100, nullptr);
        i += 1;
        *(a1 + 0x25c) += 1;
    }

    return 6;
}
