#include "0041BDD0-ScrollListBox_LoadParameters.h"
/* 0x0041bdd0 ScrollListBox_LoadParameters full linked: callers=0 callees=21 */
int32_t ScrollListBox_LoadParameters(void* a1)

{
    void* ebp = *(a1 + 0x44);
    void* edi = *(a1 + 0x13f8);
    void* eax = Menu_RequestScreen_4(ebp);
    int32_t temp0 = (*(a1 + 0x2c) - 4) / *(a1 + 0x13f0);
    *(a1 + 0x13f0);
    int32_t ebx;

    if (!*(a1 + 0x12a9))
        ebx = 0;
    else
    {
        void* eax_6 = *(a1 + 0x13f4);
        int32_t ecx_1 = 0;
        ecx_1 = *(eax_6 + 0x1c);
        (*((ecx_1 << 2) + &g_a970e0))(eax_6);
        ebx = Menu_FormatScreen_10(*(a1 + 0x13f4));
    }

    char* var_18;
    void var_4;
    Menu_UpdateLanguage_14(edi, *(edi + 0x20), *(edi + 0x24), *(edi + 0x28), *(edi + 0x2c), &var_4,
        &var_18);
    int16_t top;

    if (*(edi + 0x4b))
    {
        *(a1 + 0x13f0);
        int32_t eax_15 = (var_18 - *(edi + 0x24)) / *(a1 + 0x13f0) + ebx;

        if (eax_15 == *(a1 + 0x129c) || eax_15 >= *(a1 + 0x1254))
        {
            uint32_t eax_17 = Frames_GetUpdateCounter();
            int32_t var_14_1 = Frames_Get();
            int32_t* eax_19 = *(a1 + 0x12a4);
            var_14_1 = var_14_1 * 0.5;
            top = 0;

            if (eax_19 != 0xffffffff && eax_17 - eax_19 < var_14_1 && sub_4f16c0(a1 + 0x13a0))
            {
                sub_4f16e0(a1 + 0x13a0, a1);
                top = 1;
            }

            *(a1 + 0x12a4) = eax_17;
        }
        else
        {
            *(a1 + 0x129c) = eax_15;
            *(a1 + 0x12a4) = Frames_GetUpdateCounter();
            sub_4e7180("menu_sel2", 0, 0);
        }
    }

    if (*(a1 + 0x12aa) && sub_48a910())
    {
        int32_t i;

        do
        {
            switch (sub_48a8d0() + 0xb)
            {
                case 0:
                {
                    Menu_UpdateLanguage_5(ebp);
                    *(a1 + 0x12aa) = 0;
                    break;
                }
                case 4:
                {
                    if (sub_4f16c0(a1 + 0x13a0))
                    {
                        sub_4f16e0(a1 + 0x13a0, a1);
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                        top += 1;
                    }
                    break;
                }
                case 7:
                {
                    int32_t eax_26 = *(a1 + 0x129c);

                    if (eax_26 < *(a1 + 0x1254) - 1)
                    {
                        *(a1 + 0x129c) = eax_26 + 1;

                        if (eax_26 + 1 > ebx + temp0)
                            Menu_PlayMusic_10(*(a1 + 0x13f4), ebx + 1);

                        sub_4e7180("menu_sel2", 0, 0);
                    }
                    break;
                }
                case 8:
                {
                    int32_t eax_23 = *(a1 + 0x129c);

                    if (eax_23 > 0)
                    {
                        *(a1 + 0x129c) = eax_23 - 1;

                        if (eax_23 - 1 < ebx)
                            Menu_PlayMusic_10(*(a1 + 0x13f4), ebx - 1);

                        sub_4e7180("menu_sel2", 0, 0);
                    }
                    break;
                }
            }

            i = sub_48a910();
        } while (i);
    }

    if (*(eax + 5))
    {
        *(a1 + 0x12aa) = 1;
        Menu_LeaveMenus_5(ebp);
    }

    *(a1 + 0x12a0) = *(a1 + *(a1 + 0x129c) * 0x48 + 0x54);
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
