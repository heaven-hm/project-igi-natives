#include "00418790-Menu_FormatScreen_2.h"
/* 0x00418790 Menu_FormatScreen_2 full linked: callers=1 callees=3 */
int32_t Menu_FormatScreen_2(void* a1)

{
    int32_t ebx = *(a1 + 0x27e4);
    void* edi = *(a1 + 0x30);
    int32_t eax = Menu_HandleInput_13();
    int32_t ecx = 0;
    ecx = *(edi + 0x1c);
    int32_t eax_4 = *(((eax * 0x180 + ecx) << 2) + &g_a96ae0);

    if (eax_4)
        eax_4(edi);

    int32_t result = Config_SaveGraphicOptions_2();
    *(a1 + 0x27e4) = result;

    if (result == ebx)
        return result;

    return Menu_FormatScreen(a1, 1);
}
