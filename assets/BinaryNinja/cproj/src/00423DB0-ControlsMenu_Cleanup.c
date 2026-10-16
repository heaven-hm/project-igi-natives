#include "gi_platform.h"
#include "00423DB0-ControlsMenu_Cleanup.h"
int32_t ControlsMenu_Cleanup()

{
    void* valA;
    int32_t objC;
    valA = Config_SetGamma();
    Config_ValidatePassword();
    void* arg_4;
    void* dstD = arg_4;
    void* i = nullptr;
    int32_t* ctxB1 = dstD + 0x54;
    int32_t result;

    do
    {
        int32_t tmpD;
        int32_t valA2 = Menu_PlayMusic_12(0x1b, tmpD, objC, i) * 3;
        int32_t valA5 = Menu_DrawWidget_12((*(int32_t*)(uintptr_t)(valA + (valA2 << 2) + 4)), (*(int32_t*)(uintptr_t)(valA + (valA2 << 2) + 8)));
        Config_Moveleft(i, nullptr, &arg_4);
        int32_t* valA7 = Menu_LocalSS((*(int32_t*)(uintptr_t)(dstD + 0x44)), arg_4);
        Sys_FreeMemory_18(*ctxB1, valA7);
        objC = Menu_UpdateLanguage_12(dstD, i, valA5);
        result = 0x1b;
        i += 1;
        ctxB1 = &ctxB1[1];
    } while (i < 0x1b);

    int32_t* i_2 = (*(int32_t*)(uintptr_t)(dstD + 8));

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t objC3 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i_1;
                void* valA11;

                if (!tmpD3)
                    valA11 = nullptr;
                else
                {
                    int32_t valA8 = *tmpD3;
                    int32_t valA9 = -(valA8);
                    valA11 = (valA9 - valA9) & tmpD3;
                }

                *((objC3 << 2) + &g_afa6e0) = valA11;
                g_afa7e0 = objC3 + 1;
                int32_t valA12 = Menu_HandleInput_13();
                int32_t valA13 = 0;
                valA13 = i_1[7];
                result = *(((valA12 * 0x180 + valA13) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                objC3 = g_afa7e0 - 1;
                g_afa7e0 = objC3;
                i_1 = *((objC3 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
