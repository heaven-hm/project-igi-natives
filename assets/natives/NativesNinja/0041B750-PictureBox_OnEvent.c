#include "0041B750-PictureBox_OnEvent.h"
/* 0x0041b750 PictureBox_OnEvent full linked: callers=0 callees=4 */
int32_t PictureBox_OnEvent(void* a1)

{
    *(a1 + 0x954) = 0;
    g_57bba4 = a1;

    if (sub_4f16c0(a1 + 0x95c))
        sub_4f16e0(a1 + 0x95c, a1);

    g_57bba4 = 0;
    int32_t result = *(a1 + 0x958);
    int32_t ebx = 0;
    char* edi_1 = a1 + 0x54;

    if (result > 0)
    {
        do
        {
            *(edi_1 + 0x44) = Menu_DrawWidget_3(*(a1 + 0x44), edi_1);
            result = *(a1 + 0x958);
            edi_1 = &edi_1[0x48];
            ebx += 1;
        } while (ebx < result);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

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

            *((ecx_1 << 2) + &g_afa6e0) = eax_6;
            g_afa7e0 = ecx_1 + 1;
            int32_t eax_7 = Menu_HandleInput_13();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_7 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
