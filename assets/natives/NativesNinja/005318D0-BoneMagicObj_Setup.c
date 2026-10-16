#include "005318D0-BoneMagicObj_Setup.h"
/* 0x005318d0 BoneMagicObj_Setup full linked: callers=0 callees=9 */
int32_t sub_5318d0(int32_t* a1, int32_t* a2)

{
    int32_t* eax_1 = sub_4cec10(*a2);

    if (eax_1)
    {
        int16_t* ecx_1 = a2[0x23];
        a1[0x47] = ecx_1;
        int32_t var_20 = a2[1];
        sub_4d9620(a1, *ecx_1, eax_1);
        sub_4c7140(a2[1], a1, &a2[2], a1[0x28], 2);
        sub_4d6110(&a1[0x1a], 0, *(a1[0x47] + 4), 1);
        memcpy(&a1[0x36], &a2[8], 0x18);
        memcpy(&a1[0x3c], &a2[0x18], 0x28);
        memcpy(&a1[0x1e], &a2[0xe], 0x28);
        sub_4d38c0(&a1[0x1e], &a1[0x1a]);
        a1[0x46] = a2[0x22];
        a1[0x48] = 0;
        a1[0x49] = 0;
        a1[0x4a] = 0;
        return 0;
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
