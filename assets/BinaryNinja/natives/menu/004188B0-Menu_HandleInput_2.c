#include "Menu_HandleInput_2.h"
void* Menu_HandleInput_2(void* a1)

{
    void* result = Script_ExecuteLevelScript_4(*(a1 + 0x24));
    *(a1 + 0x34) = result;

    if (result)
    {
        int32_t valA1 = Menu_HandleInput_13();
        int32_t tmpD1 = 0;
        tmpD1 = *(result + 0x1c);
        int32_t valA2 = *(((valA1 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (valA2)
            valA2(result);

        void* v_14_1 = a1;
        Menu_PlayMusic(*(a1 + 0x34));
        Menu_PlayMusic_2(a1, *(a1 + 0x34));
        void* valA4 = *(a1 + 0x34);
        int32_t tmpD2 = 0;
        *(a1 + 0x27cd) = 0;
        *(a1 + 0x27ce) = 0;
        *(a1 + 0x27cc) = 0;
        *(a1 + 0x27cf) = 1;
        tmpD2 = *(valA4 + 0x1c);
        result = (*((tmpD2 << 2) + &g_a970e0))(valA4);
        *(a1 + 0x27cf) = 0;
    }

    return result;
}
