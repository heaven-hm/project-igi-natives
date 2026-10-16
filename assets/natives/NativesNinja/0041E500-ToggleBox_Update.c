#include "0041E500-ToggleBox_Update.h"
/* 0x0041e500 ToggleBox_Update full linked: callers=0 callees=3 */
int32_t* ToggleBox_Update(void* a1)

{
    int32_t* result = sub_4f16c0(a1 + 0xfc);

    if (result)
    {
        void* var_c_1 = a1;
        result = Menu_HandleInput_4(a1 + 0xfc);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_3;

            if (!edx_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *edx_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_3;
            g_afa7e0 = ecx_1 + 1;
            int32_t eax_4 = Menu_RequestScreen_14();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            result = *(((eax_4 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
