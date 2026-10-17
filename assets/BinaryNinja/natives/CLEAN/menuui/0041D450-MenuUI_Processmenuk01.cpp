// IGI native provenance: MenuUI_Processmenuk01 - 0x0041D450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D450-MenuUI_Processmenuk01.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Processmenuk01.h"

int32_t MenuUI_Processmenuk01(void* arg1)

{
    if (*(Menu_RequestScreen_4(*(arg1 + 0x44)) + 3))
    {
        *(arg1 + 0x195) = 0;
        *(arg1 + 0x50) = 0;
    }
    else if (*(arg1 + 0x195))
    {
        if (FX_FragmentSimulate_17())
        {
            int32_t i;

            do
            {
                int32_t eax_7 = FX_FireBallUpdate_17();
                void* edi_2 = arg1 + 0x54;
                int32_t j = 0xffffffff;

                while (j)
                {
                    bool cond:1_1 = 0 != *edi_2;
                    edi_2 += 1;
                    j -= 1;

                    if (!cond:1_1)
                        break;
                }

                if (eax_7 + 0xa <= 9)
                    switch (eax_7)
                    {
                        case 0xfffffff6:
                        {
                            *(arg1 + 0x1a0) = ~j - 1;
                            break;
                        }
                        case 0xfffffff7:
                        {
                            *(arg1 + 0x1a0) = 0;
                            break;
                        }
                        case 0xfffffff8:
                        {
                            Menu_UpdateLanguage_4(*(arg1 + 0x44));
                            *(arg1 + 0x195) = 0;
                            break;
                        }
                        case 0xfffffff9:
                        {
                            Menu_UpdateLanguage_4(*(arg1 + 0x44));
                            *(arg1 + 0x195) = 0;

                            if (Script_FormatString_6(arg1 + 0x144))
                            {
                                Script_SpawnNewTask_7(arg1 + 0x144, arg1);
🚫🚫🚫                                /* unimplemented  {fstp st0, st0} */
                                /* unimplemented  {fstp st0, st0} */
                                int16_t top = top + 1;
                            }
                            break;
                        }
                        case 0xfffffffa:
                        {
                            int32_t eax_14 = *(arg1 + 0x1a0);

                            if (eax_14 < ~j - 1)
                                menu_k01(arg1, eax_14);
                            break;
                        }
                        case 0xfffffffb:
                        {
                            int32_t eax_15 = *(arg1 + 0x1a0);

                            if (eax_15 > 0)
                                menu_k01(arg1, eax_15 - 1);
                            break;
                        }
                        case 0xfffffffe:
                        {
                            int32_t eax_13 = *(arg1 + 0x1a0) + 1;

                            if (~j - 1 < eax_13)
                                eax_13 = ~j - 1;

                            *(arg1 + 0x1a0) = eax_13;
                            break;
                        }
                        case 0xffffffff:
                        {
                            int32_t edx_3 = 0;
                            int32_t eax_10 = *(arg1 + 0x1a0) - 1;
                            edx_3 = eax_10 < 0;
                            *(arg1 + 0x1a0) = eax_10 & (edx_3 - 1);
                            break;
                        }
                    }
                else if (~j - 1 < *(arg1 + 0x1a4) - 1 && eax_7 && eax_7 != 0x22)
                    Menu_MenuK01D(arg1, *(arg1 + 0x1a0), eax_7);

                i = FX_FragmentSimulate_17();
            } while (i);
        }
    }
    else
    {
        Menu_UpdateLanguage_14(arg1, *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28),
            *(arg1 + 0x2c), nullptr, nullptr);

        if (*(arg1 + 0x4b) || *(arg1 + 0x50) == 0xfffffff9)
        {
            Menu_LeaveMenus_4(*(arg1 + 0x44));
            void* edi_1 = arg1 + 0x54;
            int32_t i_1 = 0xffffffff;
            *(arg1 + 0x195) = 1;

            while (i_1)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 += 1;
                i_1 -= 1;

                if (!cond:0_1)
                    break;
            }

            *(arg1 + 0x1a0) = ~i_1 - 1;
            SoundSys_AttachLipsync_8("menu_k01", 0, 0);
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(arg1);
}
