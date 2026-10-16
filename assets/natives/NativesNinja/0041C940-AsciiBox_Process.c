#include "0041C940-AsciiBox_Process.h"
/* 0x0041c940 AsciiBox_Process full linked: callers=0 callees=6 */
int32_t AsciiBox_Process(void* a1)

{
    Menu_FormatScreen_3(*(a1 + 0xf4));
    int32_t* eax_1 = *(a1 + 0xd8);

    if (eax_1)
    {
        sub_4b6f30(eax_1);
        *(a1 + 0xd8) = 0;
    }

    if (*(a1 + 0xdc))
    {
        Qhash_Init(1);
        sub_4b0d10(*(a1 + 0xdc));
        *(a1 + 0xdc) = 0;
        Qhash_Reset();
        *(a1 + 0xdc) = 0;
    }

    int32_t eax_3 = sub_4f1220();
    int32_t eax_4 = 0;
    eax_4 = *(a1 + 0x1c);
    return (*(((eax_3 * 0x180 + eax_4) << 2) + &g_a96ae0))(a1);
}
