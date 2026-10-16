#include "0041C310-ScrollListBox_Update.h"
/* 0x0041c310 ScrollListBox_Update full linked: callers=0 callees=8 */
void* ScrollListBox_Update(void* a1)

{
    Menu_HandleInput_7(a1);
    g_57bbb0 = a1;

    if (sub_4f16c0(a1 + 0x12b0))
        sub_4f16e0(a1 + 0x12b0, a1);

    g_57bbb0 = 0;
    int32_t i = 0;

    if (*(a1 + 0x1254) > 0)
    {
        int32_t* edi_1 = a1 + 0x98;

        do
        {
            *edi_1 = Menu_LocalSS(*(a1 + 0x44), &edi_1[-0x10]);
            i += 1;
            edi_1 = &edi_1[0x12];
        } while (i < *(a1 + 0x1254));
    }

    char eax_5 = sub_4f16c0(a1 + 0x1300);
    int32_t i_1;
    int32_t eax_6;
    int32_t ecx_2;

    if (eax_5)
    {
        sub_4f16e0(a1 + 0x1300, a1);
        ecx_2 = *(a1 + 0x1254);
🚫🚫🚫        i_1 = /* i_1 = (unimplemented  {fistp qword [esp+0xc], st0}).d */;
        /* unimplemented  {fistp qword [esp+0xc], st0} */
        eax_6 = 0;
    }

    if (!eax_5 || ecx_2 <= 0)
    {
    label_41c3c1:
        ecx_2 = *(a1 + 0x1254);
        *(a1 + 0x129c) = 0;
        int32_t eax_7;

        if (!ecx_2)
            eax_7 = 0;
        else
            eax_7 = *(a1 + 0x54);

        *(a1 + 0x12a0) = eax_7;
    }
    else
    {
        int32_t* edx_1 = a1 + 0x54;

        while (i_1 != *edx_1)
        {
            eax_6 += 1;
            edx_1 = &edx_1[0x12];

            if (eax_6 >= ecx_2)
                goto label_41c3c1;
        }

        *(a1 + 0x129c) = eax_6;
        *(a1 + 0x12a0) = i_1;
    }

    int32_t ebp = *(a1 + 0x2c);
    int32_t temp0 = (ebp - 4) / *(a1 + 0x13f0);
    bool edx_4 = temp0 < ecx_2;
    *(a1 + 0x12a9) = edx_4;
    int32_t edi_5;

    if (!edx_4)
        edi_5 = 0;
    else
    {
        void* edx_5 = *(a1 + 0x13f4);
        int32_t edi_4 = *(edx_5 + 0x28);
        int32_t var_20_1 = 0;
        Menu_UpdateLanguage_10(edx_5, *(a1 + 0x28) + *(a1 + 0x20) - edi_4, *(a1 + 0x24), ebp,
            ecx_2 - temp0 + 1);
        edi_5 = edi_4 + 2;
    }

    *(*(a1 + 0x13f8) + 0x20) = *(a1 + 0x20);
    *(*(a1 + 0x13f8) + 0x24) = *(a1 + 0x24);
    *(*(a1 + 0x13f8) + 0x2c) = *(a1 + 0x2c);
    void* result = *(a1 + 0x13f8);
    *(result + 0x28) = *(a1 + 0x28) - edi_5;
    *(a1 + 0x12aa) = 0;
    *(a1 + 0x12a4) = 0xffffffff;
    int32_t* i_2 = *(a1 + 8);

    if (*i_2 && i_2)
    {
        int32_t ecx_10 = g_afa7e0;

        do
        {
            int32_t* edx_10 = *i_2;
            void* eax_17;

            if (!edx_10)
                eax_17 = nullptr;
            else
            {
                int32_t eax_14 = *edx_10;
                int32_t eax_15 = -(eax_14);
                eax_17 = (eax_15 - eax_15) & edx_10;
            }

            *((ecx_10 << 2) + &g_afa6e0) = eax_17;
            g_afa7e0 = ecx_10 + 1;
            int32_t eax_18 = Menu_HandleInput_13();
            int32_t edx_11 = 0;
            edx_11 = i_2[7];
            result = *(((eax_18 * 0x180 + edx_11) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2);

            ecx_10 = g_afa7e0 - 1;
            g_afa7e0 = ecx_10;
            i_2 = *((ecx_10 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}
