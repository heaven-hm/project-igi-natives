#include "0041AD70-TextBox_OnEvent.h"
/* 0x0041ad70 TextBox_OnEvent full linked: callers=0 callees=7 */
int32_t TextBox_OnEvent(void* a1, int32_t a2)

{
    sub_4f1400(a1 + 0x21a4, a1);
    sub_4f1400(a1 + 0x21f4, a1);
    int32_t* eax_1 = *(a1 + 0x94);

    if (eax_1)
    {
        sub_4b6f30(eax_1);
        *(a1 + 0x94) = 0;
    }

    void* eax_2 = *(a1 + 0x44);

    if (eax_2)
    {
        void* eax_3 = Menu_HandleInput_3(eax_2, a1 + 0x54);
        *(a1 + 0x98) = eax_3;

        if (eax_3)
        {
            int32_t** eax_4 = sub_4b6ec0(eax_3, 0, 0, &g_567c74);
            *(a1 + 0x94) = eax_4;
            eax_4[8] = 0;
        }
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
