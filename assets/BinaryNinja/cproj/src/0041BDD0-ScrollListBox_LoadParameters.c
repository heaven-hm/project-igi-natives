#include "gi_platform.h"
#include "0041BDD0-ScrollListBox_LoadParameters.h"
int32_t ScrollListBox_LoadParameters(void* a1)

{
    void* flagP = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    void* dstD = (*(int32_t*)(uintptr_t)(a1 + 0x13f8));
    void* valA = Menu_RequestScreen_4(flagP);
    int32_t f0 = ((*(int32_t*)(uintptr_t)(a1 + 0x2c)) - 4) / (*(int32_t*)(uintptr_t)(a1 + 0x13f0));
    (*(int32_t*)(uintptr_t)(a1 + 0x13f0));
    int32_t ctxB;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x12a9)))
        ctxB = 0;
    else
    {
        void* valA6 = (*(int32_t*)(uintptr_t)(a1 + 0x13f4));
        int32_t objC1 = 0;
        objC1 = *(valA6 + 0x1c);
        ((int(*)())(uintptr_t)(*((objC1 << 2) + &g_a970e0)))(valA6);
        ctxB = Menu_FormatScreen_10((*(int32_t*)(uintptr_t)(a1 + 0x13f4)));
    }

    char* v_18;
    char v_4;
    Menu_UpdateLanguage_14(dstD, (*(int32_t*)(uintptr_t)(dstD + 0x20)), (*(int32_t*)(uintptr_t)(dstD + 0x24)), (*(int32_t*)(uintptr_t)(dstD + 0x28)), (*(int32_t*)(uintptr_t)(dstD + 0x2c)), &v_4,
        &v_18);
    int16_t idx;

    if ((*(int32_t*)(uintptr_t)(dstD + 0x4b)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x13f0));
        int32_t valA15 = (v_18 - (*(int32_t*)(uintptr_t)(dstD + 0x24))) / (*(int32_t*)(uintptr_t)(a1 + 0x13f0)) + ctxB;

        if (valA15 == (*(int32_t*)(uintptr_t)(a1 + 0x129c)) || valA15 >= (*(int32_t*)(uintptr_t)(a1 + 0x1254)))
        {
            uint32_t valA17 = Frames_GetUpdateCounter();
            int32_t v_14_1 = Frames_Get();
            int32_t* valA19 = (*(int32_t*)(uintptr_t)(a1 + 0x12a4));
            v_14_1 = v_14_1 * 0.5;
            idx = 0;

            if (valA19 != 0xffffffff && valA17 - valA19 < v_14_1 && Script_FormatString_6(a1 + 0x13a0))
            {
                Script_SpawnNewTask_7(a1 + 0x13a0, a1);
                idx = 1;
            }

            (*(int32_t*)(uintptr_t)(a1 + 0x12a4)) = valA17;
        }
        else
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x129c)) = valA15;
            (*(int32_t*)(uintptr_t)(a1 + 0x12a4)) = Frames_GetUpdateCounter();
            SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
        }
    }

    if ((*(int32_t*)(uintptr_t)(a1 + 0x12aa)) && FX_FragmentSimulate_17())
    {
        int32_t i;

        do
        {
            switch (FX_FireBallUpdate_17() + 0xb)
            {
                case 0:
                {
                    Menu_UpdateLanguage_5(flagP);
                    (*(int32_t*)(uintptr_t)(a1 + 0x12aa)) = 0;
                    break;
                }
                case 4:
                {
                    if (Script_FormatString_6(a1 + 0x13a0))
                    {
                        Script_SpawnNewTask_7(a1 + 0x13a0, a1);
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
                        idx += 1;
                    }
                    break;
                }
                case 7:
                {
                    int32_t valA26 = (*(int32_t*)(uintptr_t)(a1 + 0x129c));

                    if (valA26 < (*(int32_t*)(uintptr_t)(a1 + 0x1254)) - 1)
                    {
                        (*(int32_t*)(uintptr_t)(a1 + 0x129c)) = valA26 + 1;

                        if (valA26 + 1 > ctxB + f0)
                            Menu_PlayMusic_10((*(int32_t*)(uintptr_t)(a1 + 0x13f4)), ctxB + 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
                case 8:
                {
                    int32_t valA23 = (*(int32_t*)(uintptr_t)(a1 + 0x129c));

                    if (valA23 > 0)
                    {
                        (*(int32_t*)(uintptr_t)(a1 + 0x129c)) = valA23 - 1;

                        if (valA23 - 1 < ctxB)
                            Menu_PlayMusic_10((*(int32_t*)(uintptr_t)(a1 + 0x13f4)), ctxB - 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
            }

            i = FX_FragmentSimulate_17();
        } while (i);
    }

    if ((*(int32_t*)(uintptr_t)(valA + 5)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x12aa)) = 1;
        Menu_LeaveMenus_5(flagP);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x12a0)) = (*(int32_t*)(uintptr_t)(a1 + *(a1 + 0x129c) * 0x48 + 0x54));
    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}
