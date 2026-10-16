#include "0041FF30-SlideBar_Action.h"
/* 0x0041ff30 SlideBar_Action full linked: callers=0 callees=7 */
int32_t SlideBar_Action(int80_t a1 @ st0, int32_t a2)

{
    if (sub_4f16c0(a2 + 0x1f8))
    {
        sub_4f16e0(a2 + 0x1f8, a2);
        *(a2 + 0x248) = a1;
    }

    int32_t result = sub_4f16c0(a2 + 0xb8);

    if (result)
    {
        if (*(a2 + 0x248))
        {
            sub_4f16e0(a2 + 0xb8, a2);
🚫🚫🚫            int32_t var_8_2 = /* int32_t var_8_2 =
                (unimplemented  {fistp qword [esp+0x10], st0}).d */;
            /* unimplemented  {fistp qword [esp+0x10], st0} */
            result = Menu_PlayMusic_10(a2, var_8_2);
        }
        else
        {
            result = sub_4f16e0(a2 + 0xb8, a2);
🚫🚫🚫            *(a2 + 0xa0) = /* *(a2 + 0xa0) = unimplemented  {fstp qword [esi+0xa0], st0} */;
            /* unimplemented  {fstp qword [esi+0xa0], st0} */
        }
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t ecx_2 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_6;

            if (!edx_1)
                eax_6 = nullptr;
            else
            {
                int32_t eax_3 = *edx_1;
                int32_t eax_4 = -(eax_3);
                eax_6 = (eax_4 - eax_4) & edx_1;
            }

            *((ecx_2 << 2) + &g_afa6e0) = eax_6;
            g_afa7e0 = ecx_2 + 1;
            int32_t eax_7 = Menu_HandleInput_13();
            int32_t eax_8 = 0;
            eax_8 = i[7];
            result = *(((eax_7 * 0x180 + eax_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_2 = g_afa7e0 - 1;
            g_afa7e0 = ecx_2;
            i = *((ecx_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
