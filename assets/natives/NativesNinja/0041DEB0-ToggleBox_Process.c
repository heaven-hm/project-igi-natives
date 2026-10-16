#include "0041DEB0-ToggleBox_Process.h"
/* 0x0041deb0 ToggleBox_Process full linked: callers=0 callees=7 */
int32_t ToggleBox_Process(void* a1)

{
    int32_t* eax = *(a1 + 0x9c);

    if (eax)
        sub_4b6f30(eax);

    int32_t* eax_1 = *(a1 + 0xa0);

    if (eax_1)
        sub_4b6f30(eax_1);

    QTask_FindType(*(a1 + 0x94));
    QTask_FindType(*(a1 + 0x98));
    sub_4f1340(a1 + 0xac);
    sub_4f1340(a1 + 0xfc);
    int32_t eax_4 = sub_4f1220();
    int32_t edx_1 = 0;
    edx_1 = *(a1 + 0x1c);
    return (*(((eax_4 * 0x180 + edx_1) << 2) + &g_a96ae0))(a1);
}
