// IGI native provenance: ScrollListBox_LoadParameters - 0x0041BDD0 - CFG score 98.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041BDD0-ScrollListBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScrollListBox_LoadParameters.h"
int32_t ScrollListBox_LoadParameters(void* context)

{
    void* flagP = *(context + 0x44);
    void* dest_val = *(context + 0x13f8);
    void* data_val = Menu_RequestScreen_4(flagP);
    int32_t f0 = (*(context + 0x2c) - 4) / *(context + 0x13f0);
    *(context + 0x13f0);
    int32_t context_val;

    if (!*(context + 0x12a9))
        context_val = 0;
    else
    {
        void* data_6 = *(context + 0x13f4);
        int32_t entity_1 = 0;
        entity_1 = *(data_6 + 0x1c);
        (*((entity_1 << 2) + &g_a970e0))(data_6);
        context_val = Menu_FormatScreen_10(*(context + 0x13f4));
    }

    char* item_18;
    void item_4;
    Menu_UpdateLanguage_14(dest_val, *(dest_val + 0x20), *(dest_val + 0x24), *(dest_val + 0x28), *(dest_val + 0x2c), &item_4,
        &item_18);
    int16_t idx;

    if (*(dest_val + 0x4b))
    {
        *(context + 0x13f0);
        int32_t data_15 = (item_18 - *(dest_val + 0x24)) / *(context + 0x13f0) + context_val;

        if (data_15 == *(context + 0x129c) || data_15 >= *(context + 0x1254))
        {
            uint32_t data_17 = Frames_GetUpdateCounter();
            int32_t item_14_1 = Frames_Get();
            int32_t* data_19 = *(context + 0x12a4);
            item_14_1 = item_14_1 * 0.5;
            idx = 0;

            if (data_19 != 0xffffffff && data_17 - data_19 < item_14_1 && Script_FormatString_6(context + 0x13a0))
            {
                Script_SpawnNewTask_7(context + 0x13a0, context);
                idx = 1;
            }

            *(context + 0x12a4) = data_17;
        }
        else
        {
            *(context + 0x129c) = data_15;
            *(context + 0x12a4) = Frames_GetUpdateCounter();
            SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
        }
    }

    if (*(context + 0x12aa) && FX_FragmentSimulate_17())
    {
        int32_t i;

        do
        {
            switch (FX_FireBallUpdate_17() + 0xb)
            {
                case 0:
                {
                    Menu_UpdateLanguage_5(flagP);
                    *(context + 0x12aa) = 0;
                    break;
                }
                case 4:
                {
                    if (Script_FormatString_6(context + 0x13a0))
                    {
                        Script_SpawnNewTask_7(context + 0x13a0, context);
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
                        idx += 1;
                    }
                    break;
                }
                case 7:
                {
                    int32_t data_26 = *(context + 0x129c);

                    if (data_26 < *(context + 0x1254) - 1)
                    {
                        *(context + 0x129c) = data_26 + 1;

                        if (data_26 + 1 > context_val + f0)
                            Menu_PlayMusic_10(*(context + 0x13f4), context_val + 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
                case 8:
                {
                    int32_t data_23 = *(context + 0x129c);

                    if (data_23 > 0)
                    {
                        *(context + 0x129c) = data_23 - 1;

                        if (data_23 - 1 < context_val)
                            Menu_PlayMusic_10(*(context + 0x13f4), context_val - 1);

                        SoundSys_AttachLipsync_8("menu_sel2", 0, 0);
                    }
                    break;
                }
            }

            i = FX_FragmentSimulate_17();
        } while (i);
    }

    if (*(data_val + 5))
    {
        *(context + 0x12aa) = 1;
        Menu_LeaveMenus_5(flagP);
    }

    *(context + 0x12a0) = *(context + *(context + 0x129c) * 0x48 + 0x54);
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
