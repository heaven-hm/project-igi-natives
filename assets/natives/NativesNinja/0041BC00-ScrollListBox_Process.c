#include "0041BC00-ScrollListBox_Process.h"
/* 0x0041bc00 ScrollListBox_Process full linked: callers=0 callees=9 */
int32_t ScrollListBox_Process(void* a1)

{
    Menu_FormatScreen_3(*(a1 + 0x13f4));
    Menu_FormatScreen_3(*(a1 + 0x13f8));
    int32_t* eax_1 = *(a1 + 0x12ac);

    if (eax_1)
    {
        sub_4b6f30(eax_1);
        *(a1 + 0x12ac) = 0;
    }

    Menu_HandleInput_7(a1);
    sub_4f1340(a1 + 0x12b0);
    sub_4f1340(a1 + 0x1300);
    sub_4f1340(a1 + 0x1350);
    sub_4f1340(a1 + 0x13a0);
    int32_t eax_3 = sub_4f1220();
    int32_t ecx_2 = 0;
    ecx_2 = *(a1 + 0x1c);
    return (*(((eax_3 * 0x180 + ecx_2) << 2) + &g_a96ae0))(a1);
}
