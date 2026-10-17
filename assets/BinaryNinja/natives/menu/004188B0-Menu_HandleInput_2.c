// Original IGI.EXE function: Menu_HandleInput_2 (VA 0x004188B0; static CFG gate PASS, CFG score 0.933).
#include "Menu_HandleInput_2.h"
void* Menu_HandleInput_2(void* context)

{
    void* result = Script_ExecuteLevelScript_4(*(context + 0x24));
    *(context + 0x34) = result;

    if (result)
    {
        int32_t data_1 = Menu_HandleInput_13();
        int32_t temp_1 = 0;
        temp_1 = *(result + 0x1c);
        int32_t data_2 = *(((data_1 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (data_2)
            data_2(result);

        void* item_14_1 = context;
        Menu_PlayMusic(*(context + 0x34));
        Menu_PlayMusic_2(context, *(context + 0x34));
        void* data_4 = *(context + 0x34);
        int32_t temp_2 = 0;
        *(context + 0x27cd) = 0;
        *(context + 0x27ce) = 0;
        *(context + 0x27cc) = 0;
        *(context + 0x27cf) = 1;
        temp_2 = *(data_4 + 0x1c);
        result = (*((temp_2 << 2) + &g_a970e0))(data_4);
        *(context + 0x27cf) = 0;
    }

    return result;
}
