// Original IGI.EXE function: MenuFrame_LoadParameters (VA 0x00422A50; static CFG gate PASS, CFG score 1.000).
#include "MenuFrame_LoadParameters.h"
int32_t MenuFrame_LoadParameters(void* context)

{
    if (*(context + 0x4c))
    {
        int32_t temp_2 = Menu_UpdateLanguage_14(context, *(context + 0x20), *(context + 0x24),
            *(context + 0x28), *(context + 0x2c), nullptr, nullptr);

        if (*(context + 0x49) && !*(context + 0x48))
            temp_2 = menu_high(*(context + 0x44), context);

        int32_t* i = *(context + 8);

        if (*i && i)
        {
            do
            {
                int16_t data_5 = Menu_PlayMusic_13();
                temp_2 = i[7];

                if (TaskType_IsDerivedFrom(temp_2, data_5))
                {
                    i[0x14] = *(context + 0x50);
                    *(i + 0x4d) = *(context + 0x4d);
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }

    *(context + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
