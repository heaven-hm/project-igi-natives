#include "gi_platform.h"
#include "00422A50-MenuFrame_LoadParameters.h"
int32_t MenuFrame_LoadParameters(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x4c)))
    {
        int32_t tmpD2 = Menu_UpdateLanguage_14(a1, (*(int32_t*)(uintptr_t)(a1 + 0x20)), (*(int32_t*)(uintptr_t)(a1 + 0x24)),
            (*(int32_t*)(uintptr_t)(a1 + 0x28)), (*(int32_t*)(uintptr_t)(a1 + 0x2c)), nullptr, nullptr);

        if ((*(int32_t*)(uintptr_t)(a1 + 0x49)) && !(*(int32_t*)(uintptr_t)(a1 + 0x48)))
            tmpD2 = menu_high((*(int32_t*)(uintptr_t)(a1 + 0x44)), a1);

        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i && i)
        {
            do
            {
                int16_t valA5 = Menu_PlayMusic_13();
                tmpD2 = i[7];

                if (TaskType_IsDerivedFrom(tmpD2, valA5))
                {
                    i[0x14] = (*(int32_t*)(uintptr_t)(a1 + 0x50));
                    *(i + 0x4d) = (*(int32_t*)(uintptr_t)(a1 + 0x4d));
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}
