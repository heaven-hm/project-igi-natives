#include "00421550-MenuButton_Process.h"
/* 0x00421550 MenuButton_Process full linked: callers=0 callees=5 */
int32_t MenuButton_Process(void* a1, int32_t a2)

{
    void* eax = *(a1 + 0x44);

    if (eax)
    {
        void* eax_1 = Menu_DrawWidget_3(eax, a1 + 0x54);
        *(a1 + 0x94) = eax_1;

        if (!eax_1)
        {
            *(a1 + 0x28) = 0;
            *(a1 + 0x2c) = 0;
        }
        else
        {
            *(a1 + 0x28) = sub_4b6ce0(eax_1);
            *(a1 + 0x2c) = sub_4b6d00(eax_1);
        }
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
