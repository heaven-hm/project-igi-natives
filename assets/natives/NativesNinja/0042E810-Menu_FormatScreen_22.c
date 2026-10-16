#include "0042E810-Menu_FormatScreen_22.h"
/* 0x0042e810 Menu_FormatScreen_22 full linked: callers=1 callees=5 */
int32_t* Menu_FormatScreen_22(int80_t a1 @ st0, void* a2)

{
    int32_t* result = sub_4f16c0(a2 + 0x928);

    if (result)
    {
        sub_4f16e0(a2 + 0x928, a2);
        int16_t eax = Menu_DrawWidget_17();
        result = QTask_DeleteTask_2(*(a2 + 0xe8), eax);

        if (result)
            return Menu_HandleInput_17(result, a1);
    }

    return result;
}
