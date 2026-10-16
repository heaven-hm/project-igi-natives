#include "0042E870-Menu_PlayMusic_22.h"
/* 0x0042e870 Menu_PlayMusic_22 full linked: callers=1 callees=8 */
int32_t* Menu_PlayMusic_22(int80_t a1 @ st0, int32_t a2)

{
    int32_t* result = sub_4f16c0(a2 + 0x978);

    if (result)
    {
        int32_t result_1 = *(a2 + 0x91d);
        result = sub_4f16e0(a2 + 0x978, a2);
        result = a1;
        *(a2 + 0x91d) = result;

        if (result)
        {
            memcpy(a2 + 0xa18, a2 + 0x20, 0x18);
            *(a2 + 0xa28) = *(a2 + 0xa28) + 8192.0;
            memcpy(a2 + 0xa30, a2 + 0x70, 0x28);
            *(a2 + 0xa88) = 0;
            result = sub_489750(a2 + 0xa90, a2 + 0xa18, a2, 1);
        }

        result = *(a2 + 0x91d);

        if (!result)
        {
            result = result_1;

            if (result)
            {
                sub_489b90(a2 + 0xa90);
                return sub_4896c0(a2 + 0xa90, 1, 4, sub_464250(), 4, 8);
            }
        }
    }

    return result;
}
