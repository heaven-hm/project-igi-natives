// Original IGI.EXE function: ScrollListBox_LoadParameters (VA 0x0041BDD0; static CFG gate PASS, CFG score 0.985).
#include "ScrollListBox_LoadParameters.h"
int32_t ScrollListBox_LoadParameters(void* a1)

{
    void* flagP = *(a1 + 0x44);
    void* dstD = *(a1 + 0x13f8);
    void* valA = Menu_RequestScreen_4(flagP);
    int32_t f0 = (*(a1 + 0x2c) - 4) / *(a1 + 0x13f0);
    *(a1 + 0x13f0);
    int32_t ctxB;

    if (!*(a1 + 0x12a9))
        ctxB = 0;
    else
    {
        void* valA6 = *(a1 + 0x13f4);
        int32_t objC1 = 0;
        objC1 = *(valA6 + 0x1c);
        (*((objC1 << 2) + &g_a970e0))(valA6);
        ctxB = Menu_FormatScreen_10(*(a1 + 0x13f4));
    }

    char* v_18;
    void v_4;
    Menu_UpdateLanguage_14(dstD, *(dstD + 0x20), *(dstD + 0x24), *(dstD + 0x28), *(dstD + 0x2c), &v_4,
        &v_18);
    int16_t idx;

    if (*(dstD + 0x4b))
    {
        *(a1 + 0x13f0);
        int32_t valA15 = (v_18 - *(dstD + 0x24)) / *(a1 + 0x13f0) + ctxB;

        if (valA15 == *(a1 + 0x129c) || valA15 >= *(a1 + 0x1254))
        {
            uint32_t valA17 = Frames_GetUpdateCounter();
            int32_t v_14_1 = Frames_Get();
            int32_t* valA19 = *(a1 + 0x12a4);
            v_14_1 = v_14_1 * 0.5;
            idx = 0;

            if (valA19 != 0xffffffff && valA17 - valA19 < v_14_1 && Script_FormatString_6(a1 + 0x13a0))
            {
                Script_SpawnNewTask_7(a1 + 0x13a0, a1);
                idx = 1;
            }

            *(a1 + 0x12a4) = valA17;
        }
        else
        {
            *(a1 + 0x129c) = valA15;
            *(a1 + 0x12a4) = Frames_GetUpdateCounter();
            SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
        }
    }

    if (*(a1 + 0x12aa) && FX_FragmentSimulate_17())
    {
        int32_t i;

        do
        {
            switch (FX_FireBallUpdate_17() + 0xb)
            {
                case 0:
                {
                    Menu_UpdateLanguage_5(flagP);
                    *(a1 + 0x12aa) = 0;
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
                    int32_t valA26 = *(a1 + 0x129c);

                    if (valA26 < *(a1 + 0x1254) - 1)
                    {
                        *(a1 + 0x129c) = valA26 + 1;

                        if (valA26 + 1 > ctxB + f0)
                            Menu_PlayMusic_10(*(a1 + 0x13f4), ctxB + 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
                case 8:
                {
                    int32_t valA23 = *(a1 + 0x129c);

                    if (valA23 > 0)
                    {
                        *(a1 + 0x129c) = valA23 - 1;

                        if (valA23 - 1 < ctxB)
                            Menu_PlayMusic_10(*(a1 + 0x13f4), ctxB - 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
            }

            i = FX_FragmentSimulate_17();
        } while (i);
    }

    if (*(valA + 5))
    {
        *(a1 + 0x12aa) = 1;
        Menu_LeaveMenus_5(flagP);
    }

    *(a1 + 0x12a0) = *(a1 + *(a1 + 0x129c) * 0x48 + 0x54);
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
