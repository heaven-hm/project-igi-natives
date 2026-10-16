#include "0048E7D0-FX_DebrisSpawn_20.h"
/* 0x0048e7d0 FX_DebrisSpawn_20 full linked: callers=0 callees=6 */
int32_t* sub_48e7d0(int32_t a1, int32_t* a2)

{
    if (!*(a2[0xa] + 0x14))
        sub_4525e0(a1);
    else
        sub_452660(a1);

    void* eax_1 = a2[0xa];
    int32_t ecx_1 = *(eax_1 + 0xc);
    int32_t* eax_2;

    if (ecx_1 != 0xffffffff)
    {
    label_48e80e:
        eax_2 = sub_4522a0(a1, ecx_1, nullptr, 0);

        if (!eax_2)
            return eax_2;

        void* ecx_2 = a2[0xa];
        void* var_c_1 = ecx_2;
        void* eax_3 = sub_48ef70(a1, 4, *(ecx_2 + 8));
        *(a2[0xa] + 0xc) = 0xffffffff;
        return eax_3;
    }

    if (*(eax_1 + 0x10) == ecx_1)
        return sub_450ff0(a1, a2);

    if (ecx_1 != ecx_1)
        goto label_48e80e;

    eax_2 = *(eax_1 + 0x10);

    if (eax_2 == 0xffffffff)
        return eax_2;

    eax_2 = sub_4522a0(a1, eax_2, nullptr, 0);

    if (!eax_2)
        return eax_2;

    *(a2[0xa] + 0x10) = 0xffffffff;
    return sub_450ff0(a1, a2);
}
