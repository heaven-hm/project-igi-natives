#include "0041D330-InputBox_Setup.h"
/* 0x0041d330 InputBox_Setup full linked: callers=0 callees=5 */
int32_t InputBox_Setup(void* a1)

{
    int32_t* eax = *(a1 + 0x19c);

    if (eax)
    {
        sub_4b6f30(eax);
        *(a1 + 0x19c) = 0;
    }

    sub_4f1340(a1 + 0xa4);
    sub_4f1340(a1 + 0xf4);
    sub_4f1340(a1 + 0x144);
    int32_t eax_2 = sub_4f1220();
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    return (*(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1);
}
