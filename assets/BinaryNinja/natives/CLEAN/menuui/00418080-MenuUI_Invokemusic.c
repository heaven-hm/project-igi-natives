// IGI native provenance: MenuUI_Invokemusic - 0x00418080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418080-MenuUI_Invokemusic.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invokemusic.h"

void* __fastcall MenuUI_Invokemusic(int32_t arg1)

{
    int32_t var_4 = arg1;
    int32_t* arg_4;
    int32_t* frame_ptr = arg_4;

    if (frame_ptr[0xa0b] && *(frame_ptr + 0x26bf))
        menu_music(frame_ptr);

    void* eax_1 = frame_ptr[0x9f8];

    if (eax_1)
    {
        int32_t context_val = 0;
        context_val = *(eax_1 + 0x1c);
        (*((context_val << 2) + &g_a970e0))(eax_1);
    }

    void* eax_2 = frame_ptr[0x9f2];
    int32_t data_val = 0;
    data_val = *(eax_2 + 0x1c);
    int32_t ecx_1;
    int32_t edx_1;
    edx_1 = (*((data_val << 2) + &g_a970e0))(eax_2);

    if (*(frame_ptr + 0x26c3))
    {
        int32_t i = 5;
        int32_t* edi_1 = &data_57bac8;
        char* esi_1 = &frame_ptr[0x9f3];
        bool cond:1_1 = false;

        while (i)
        {
            int32_t temp0_1 = *esi_1;
            int32_t temp1_1 = *edi_1;
            cond:1_1 = temp0_1 != temp1_1;
            esi_1 = &esi_1[4];
            edi_1 = &edi_1[1];
            i -= 1;

            if (temp0_1 != temp1_1)
                break;
        }

        if (cond:1_1 || frame_ptr[0xe] != data_57baec)
            data_57bae8 = 0;
        else
        {
            edx_1 = frame_ptr[0xc];

            if (edx_1 != data_57bae4)
                data_57bae8 = 0;
            else if (FX_FragmentSimulate_17() || frame_ptr[0x9b1] || frame_ptr[0x9fa])
                data_57bae8 = 0;
            else
            {
                if (data_57bae8 > 0xe10)
                {
                    Menu_FormatScreen_3(frame_ptr);
                    int32_t eax_10 = Flow_SetState(8);
                    data_57bae8 = 0;
                    return eax_10;
                }

                data_57bae8 += 1;
            }
        }

        __builtin_memcpy(&data_57bac8, &frame_ptr[0x9f3], 0x14);
        data_57baec = frame_ptr[0xe];
        ecx_1 = frame_ptr[0xc];
        data_57bae4 = ecx_1;
        frame_ptr[0x9b1] = 0;
    }

    if (frame_ptr[0xa] != 9)
        data_57badc = 0;

    void* eax_13 = frame_ptr[0xa];

    if (eax_13 > 0x11)
        goto label_418497;

    void* eax_30;

    switch (eax_13)
    {
        case nullptr:
        case 1:
        {
            int32_t edx_2 = 0;
            edx_2 = !eax_13;
            eax_30 = Menu_UpdateLanguage_2(frame_ptr, frame_ptr[8], edx_2);
        label_41831a:
            frame_ptr[0x33] = 0;
            frame_ptr[0x31] = 0;
            frame_ptr[0x32] = 0;
            frame_ptr[0xa] = 5;
            return eax_30;
            break;
        }
        case 2:
        {
            Menu_RequestScreen_2(frame_ptr);
            Menu_PlayMusic_15(frame_ptr[0x9f2], &frame_ptr[0x9f6], &frame_ptr[0x9f7], &arg_4, &var_4);
            int32_t* eax_33 = arg_4;
            bool ecx_19 = eax_33 != var_4;
            frame_ptr[0x9f3] = eax_33;
            *(frame_ptr + 0x27cd) = ecx_19 & eax_33;
            *(frame_ptr + 0x27ce) = !eax_33 & ecx_19;
            frame_ptr[0x9f6] += 0x140 - (g_c28b44 >> 1);
            frame_ptr[0x9f7] += 0xf0 - (g_c28b48 >> 1);
        label_418497:
            eax_13 = frame_ptr[0xd];

            if (eax_13)
            {
                int32_t ecx_23 = 0;
                ecx_23 = *(eax_13 + 0x1c);
                return (*((ecx_23 << 2) + &g_a970e0))(eax_13);
            }

            void* ebp_1 = frame_ptr[0xc];

            if (!ebp_1)
                return eax_13;

            int32_t edx_12 = 0;
            edx_12 = *(ebp_1 + 0x1c);
            return (*((edx_12 << 2) + &g_a970e0))(ebp_1);
            break;
        }
        case 3:
        {
            *(frame_ptr + 0x27cd) = 0;
            *(frame_ptr + 0x27ce) = 0;
            frame_ptr[0x9f3] = 0;
            goto label_418497;
        }
        case 4:
        {
            eax_30 = Menu_FormatScreen(frame_ptr, 0);
            goto label_41831a;
        }
        case 5:
        case 7:
        {
            eax_13 = frame_ptr[0x33];

            if (eax_13 != 0x10)
            {
                edx_1 = *(frame_ptr + 0x26c1);
                char temp2_1 = edx_1;
                edx_1 = -(edx_1);
                frame_ptr[0x33] = edx_1 - edx_1 + 2 + eax_13;
            }

            if (frame_ptr[0x32] != 0x10)
                return eax_13;

            frame_ptr[0xa] = 2;
            FX_ExplosionSpawn_17();
            return 0;
            break;
        }
        case 6:
        case 8:
        {
            eax_13 = frame_ptr[0x33];

            if (eax_13)
            {
                ecx_1 = *(frame_ptr + 0x26c1);
                char temp3_1 = ecx_1;
                ecx_1 = -(ecx_1);
                eax_13 -= ecx_1 - ecx_1 + 2;
                frame_ptr[0x33] = eax_13;
            }

            if (frame_ptr[0x32])
                return eax_13;

            frame_ptr[0xa] = frame_ptr[0xb];
            return Menu_RequestScreen_3(frame_ptr);
            break;
        }
        case 9:
        {
            int32_t esi_3;

            if (!(0x80 & g_c28c63) || data_c28d63 & 0x80)
                esi_3 = 0;
            else
                esi_3 = 1;

            if (FX_DebrisSpawn_11() && !AI_FireWeapon_19(Level_InitTextures_5(0)))
            {
                if (data_57badc <= 0x96)
                    data_57badc += 1;
                else
                {
                    esi_3 = 1;
                    data_57badc = 0;
                }
            }

            if (AI_FireWeapon_19(Level_InitTextures_5(0)))
            {
                int32_t eax_20;

                if (!(data_c28c9b & 0x80) || data_c28d9b & 0x80)
                    eax_20 = 0;
                else
                    eax_20 = 1;

                int32_t eax_22;

                if (!(0x80 & data_c28c7e) || data_c28d7e & 0x80)
                    eax_22 = 0;
                else
                    eax_22 = 1;

                esi_3 = esi_3 | eax_20 | eax_22;
            }

            if (!esi_3)
            {
                eax_13 = Level_LoadObjects_7();

                if (eax_13)
                    return Level_InitTextures_6(0);
            }
            else
            {
                frame_ptr[0xc] = 0;
                Menu_DrawWidget_4(frame_ptr);
                eax_13 = Level_LoadObjects_7();

                if (!eax_13)
                    return Level_InitTextures_6(1);
            }

            return eax_13;
            break;
        }
        case 0xa:
        {
            Menu_FormatScreen_3(frame_ptr);
            return Flow_SetState(1);
            break;
        }
        case 0xb:
        {
            int32_t eax_27 = Flow_SetState(6);
            frame_ptr[0xa] = 9;
            return eax_27;
            break;
        }
        case 0xc:
        {
            int32_t eax_28 = Flow_SetState(5);
            frame_ptr[0xa] = 9;
            return eax_28;
            break;
        }
        case 0xd:
        {
            Menu_FormatScreen_3(frame_ptr);
            return Flow_SetState(4);
            break;
        }
        case 0xe:
        {
            void* eax_31 = Menu_HandleInput_2(frame_ptr);
            frame_ptr[0x33] = 0;
            frame_ptr[0x32] = 0;
            frame_ptr[0x31] = 0;
            frame_ptr[0xa] = 7;
            return eax_31;
            break;
        }
        case 0xf:
        {
            frame_ptr[0xa] = 2;
            frame_ptr[0x33] = 0x10;
            frame_ptr[0x32] = 0x10;
            frame_ptr[0x31] = 0x10;
            return eax_13;
            break;
        }
        case 0x10:
        {
            return eax_13;
            break;
        }
        case 0x11:
        {
            frame_ptr[0xa] = 9;
            return eax_13;
            break;
        }
    }
}
