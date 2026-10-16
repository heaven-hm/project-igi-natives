#include "0048E560-SetCombat_Run.h"
/* 0x0048e560 SetCombat_Run full linked: callers=0 callees=4 */
int32_t* sub_48e560(void* a1, int32_t* a2)

{
    void* edi = *(a1 + 0x14);
    char* var_30 = "Set Combat";
    int32_t var_34 = 0xffffffff;
    void* var_38 = a1;
    void* esi_1 = a2[0xa] + 8;
    int32_t var_1c = 7;
    int32_t var_18 = sub_463130(edi);
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    void* var_c = esi_1;
    int32_t var_4 = 0;
    int32_t var_8 = 0;
    int32_t* eax_1 = *(esi_1 + 0x1c);

    if (eax_1)
    {
        int32_t eax_2 = *eax_1;

        if (eax_2)
            int32_t var_4_1 = eax_2;
    }

    int32_t* esi_2 = *(esi_1 + 0x18);

    if (esi_2)
    {
        int32_t esi_3 = *esi_2;

        if (esi_3)
            int32_t var_8_1 = esi_3;
    }

    sub_450d50(a1, &var_1c);
    return sub_450ff0(a1, a2);
}
