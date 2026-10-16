#include "0041A3C0-TypeWriterBox_Setup.h"
/* 0x0041a3c0 TypeWriterBox_Setup full linked: callers=0 callees=2 */
int32_t TypeWriterBox_Setup(void* a1)

{
    int32_t* esi = a1 + 0x78;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        int32_t* eax_1 = *esi;

        if (eax_1)
            sub_4b6f30(eax_1);

        esi = &esi[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    int32_t eax_2 = sub_4f1220();
    int32_t ecx = 0;
    ecx = *(a1 + 0x1c);
    return (*(((eax_2 * 0x180 + ecx) << 2) + &g_a96ae0))(a1);
}
