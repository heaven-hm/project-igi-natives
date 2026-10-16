#include "0045F890-Human_OnEvent.h"
/* 0x0045f890 Human_OnEvent full linked: callers=0 callees=6 */
float* sub_45f890(float a1)

{
    int32_t* eax_1 = sub_4cec10(a1 + 0x100);

    if (eax_1)
    {
        sub_4d9700(a1, eax_1);
        sub_4d38c0(a1 + 0x78, a1 + 0x68);
    }

    sub_4c6940(Level_StartMission_4(), a1, a1 + 0xe0, *(a1 + 0xa0));
    long double x87_r7 = *(a1 + 0xf8);
    *(a1 + 0x50c) = x87_r7;
    *(a1 + 0x508) = x87_r7;
    return sub_4b3be0(a1 + 0x78, x87_r7);
}
