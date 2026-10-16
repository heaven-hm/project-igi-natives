#include "gi_platform.h"
#include "00421A70-MenuScreen_Process.h"
int32_t MenuScreen_Process(int32_t a1, int32_t a2)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x44));

    if (valA)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x94)) = Menu_PlayMusic_3(valA, a1 + 0x54);

        if (FX_SmokeEmit_26())
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x98)) = Menu_PlayMusic_3((*(int32_t*)(uintptr_t)(a1 + 0x44)), "logo_us.pic");
            g_57bc0c = 0xc;
        }
        else
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x98)) = Menu_PlayMusic_3((*(int32_t*)(uintptr_t)(a1 + 0x44)), "logo.pic");
            g_57bc0c = 0;
        }

        int32_t* valA6 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

        if (valA6)
        {
            int32_t valA7 = Picture_GetWidth(valA6);
            (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 4)) = g_57bc0c + 320.0f - valA7 * 0.5.0f;
            (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 8)) = (g_c28b48 >> 1) - 0xdc;
            (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 0x20)) = 0;
        }

        void* valA12 = (*(int32_t*)(uintptr_t)(a1 + 0x94));

        if (valA12)
        {
            *(valA12 + 0x20) = 0;
            (*(int32_t*)(uintptr_t)(*(a1 + 0x94) + 4)) = (g_c28b44 >> 1) - 0x140;
            (*(int32_t*)(uintptr_t)(*(a1 + 0x94) + 8)) = (g_c28b48 >> 1) - 0xf0;
            int32_t valA17 = Picture_GetWidth((*(int32_t*)(uintptr_t)(a1 + 0x94)));
            int32_t* tmpD7 = (*(int32_t*)(uintptr_t)(a1 + 0x94));
            (*(int32_t*)(uintptr_t)(a1 + 0x28)) = valA17;
            (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = Picture_GetHeight(tmpD7);
        }
    }

    Script_Isexists(a1 + 0xac, a1);
    Script_Isexists(a1 + 0xfc, a1);
    Script_Isexists(a1 + 0x14c, a1);
    return ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
}
