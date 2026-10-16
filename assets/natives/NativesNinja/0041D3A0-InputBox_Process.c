#include "0041D3A0-InputBox_Process.h"
/* 0x0041d3a0 InputBox_Process full linked: callers=0 callees=8 */
int32_t** InputBox_Process(void* a1, int32_t a2)

{
    sub_4f1400(a1 + 0xa4, a1);
    sub_4f1400(a1 + 0xf4, a1);
    sub_4f1400(a1 + 0x144, a1);
    int32_t* eax_1 = *(a1 + 0x19c);

    if (eax_1)
    {
        sub_4b6f30(eax_1);
        *(a1 + 0x19c) = 0;
    }

    (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
    int32_t** result = Menu_HandleInput_3(*(a1 + 0x44), "font1.fnt");
    *(a1 + 0x198) = result;

    if (result)
    {
        result = sub_4b6ec0(result, 0, 0, &g_567c74);
        *(a1 + 0x19c) = result;
    }

    return result;
}
