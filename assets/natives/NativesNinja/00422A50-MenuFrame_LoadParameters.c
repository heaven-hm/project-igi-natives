#include "00422A50-MenuFrame_LoadParameters.h"
/* 0x00422a50 MenuFrame_LoadParameters full linked: callers=0 callees=5 */
int32_t MenuFrame_LoadParameters(void* a1)

{
    if (*(a1 + 0x4c))
    {
        int32_t edx_2 = Menu_UpdateLanguage_14(a1, *(a1 + 0x20), *(a1 + 0x24),
            *(a1 + 0x28), *(a1 + 0x2c), nullptr, nullptr);

        if (*(a1 + 0x49) && !*(a1 + 0x48))
            edx_2 = menu_high(*(a1 + 0x44), a1);

        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            do
            {
                int16_t eax_5 = Menu_PlayMusic_13();
                edx_2 = i[7];

                if (TaskType_IsDerivedFrom(edx_2, eax_5))
                {
                    i[0x14] = *(a1 + 0x50);
                    *(i + 0x4d) = *(a1 + 0x4d);
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }

    *(a1 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
