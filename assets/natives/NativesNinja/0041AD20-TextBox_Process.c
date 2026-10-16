#include "0041AD20-TextBox_Process.h"
/* 0x0041ad20 TextBox_Process full linked: callers=0 callees=3 */
char* TextBox_Process(void* a1)

{
    int32_t* eax = *(a1 + 0x94);

    if (eax)
    {
        sub_4b6f30(eax);
        *(a1 + 0x94) = 0;
    }

    *(a1 + 0x21a0) = 0;
    sub_4f1340(a1 + 0x21a4);
    return sub_4f1340(a1 + 0x21f4);
}
