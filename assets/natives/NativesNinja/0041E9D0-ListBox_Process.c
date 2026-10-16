#include "0041E9D0-ListBox_Process.h"
/* 0x0041e9d0 ListBox_Process full linked: callers=0 callees=9 */
int32_t ListBox_Process(void* a1)

{
    int32_t* eax = *(a1 + 0xbf4);

    if (eax)
    {
        sub_4b6f30(eax);
        *(a1 + 0xbf4) = 0;
    }

    Menu_UpdateLanguage_9(a1);
    Menu_FormatScreen_3(*(a1 + 0xd4));
    Menu_FormatScreen_3(*(a1 + 0xd8));
    sub_4f1340(a1 + 0xbf8);
    sub_4f1340(a1 + 0xc48);
    sub_4f1340(a1 + 0xc98);
    sub_4f1340(a1 + 0xce8);
    int32_t eax_3 = sub_4f1220();
    int32_t ecx_2 = 0;
    ecx_2 = *(a1 + 0x1c);
    return (*(((eax_3 * 0x180 + ecx_2) << 2) + &g_a96ae0))(a1);
}
