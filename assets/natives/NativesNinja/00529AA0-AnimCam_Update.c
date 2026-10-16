#include "00529AA0-AnimCam_Update.h"
/* 0x00529aa0 AnimCam_Update full linked: callers=0 callees=3 */
int32_t sub_529aa0(void* a1, int32_t* a2)

{
    for (int32_t i = 0; i < 0x58; )
    {
        i += 4;
        *(i + *a2 - 4) = 0xc479c000;
    }

    int32_t* var_c = a2;
    void* var_14 = a1;
    sub_529ae0(a1);
    int32_t* eax;
    int32_t ecx_2;
    int32_t edx;
    eax = sub_529c20(a1, a2);
    int32_t* var_20 = a2;
    return sub_52a010(eax, edx, ecx_2, a1);
}
