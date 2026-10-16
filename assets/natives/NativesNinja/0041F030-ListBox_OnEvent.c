#include "0041F030-ListBox_OnEvent.h"
/* 0x0041f030 ListBox_OnEvent full linked: callers=0 callees=6 */
int32_t* ListBox_OnEvent(void* a1)

{
    Menu_UpdateLanguage_9(a1);
    g_57bbd8 = a1;

    if (sub_4f16c0(a1 + 0xbf8))
        sub_4f16e0(a1 + 0xbf8, a1);

    g_57bbd8 = 0;
    int32_t* result = sub_4f16c0(a1 + 0xc48);

    if (result)
    {
        sub_4f16e0(a1 + 0xc48, a1);
        int32_t ecx_1 = *(a1 + 0xbe0);
🚫🚫🚫        int32_t var_8_1 = /* int32_t var_8_1 = (unimplemented  {fistp qword [esp+0x8], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], st0} */
        result = nullptr;

        if (ecx_1 > 0)
        {
            int32_t* edx_1 = a1 + 0xe0;

            do
            {
                if (var_8_1 == *edx_1)
                {
                    *(a1 + 0xbe4) = result;
                    *(a1 + 0xbe8) = var_8_1;
                    break;
                }

                result += 1;
                edx_1 = &edx_1[0xb];
            } while (result < ecx_1);
        }
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_2 = g_afa7e0;

        do
        {
            int32_t* edx_2 = *i;
            void* eax_4;

            if (!edx_2)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_2;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_2;
            }

            *((ecx_2 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = ecx_2 + 1;
            int32_t eax_5 = Menu_HandleInput_13();
            int32_t ecx_4 = 0;
            ecx_4 = i[7];
            result = *(((eax_5 * 0x180 + ecx_4) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_2 = g_afa7e0 - 1;
            g_afa7e0 = ecx_2;
            i = *((ecx_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
