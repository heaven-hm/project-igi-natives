#include "0048DD10-FX_DebrisSpawn_19.h"
/* 0x0048dd10 FX_DebrisSpawn_19 full linked: callers=0 callees=6 */
int32_t sub_48dd10(void* a1)

{
    void* eax_2 = Table_GetAt(*(a1 + 0x14) + 0x4c4, 0);
    char* var_1c = "Kneel - Reload";
    int32_t var_20 = 0xffffffff;
    void* var_24 = a1;
    sub_48ef70(a1, 1, 1f);
    int32_t var_8;
    sub_4f23d0(eax_2, &var_8);
    int32_t eax_3 = var_8;

    if (eax_3)
    {
        eax_3 = sub_48efe0(a1, 1);

        if (eax_3)
        {
            eax_3 = *(a1 + 0x3df1);
            eax_3 ^= 1;
            *(a1 + 0x3df1) = eax_3;
            eax_3 = 1;
            return eax_3;
        }
    }

    eax_3 = *(a1 + 0x3df1);
    *(a1 + 0x3c8c) = 0;

    if (!eax_3)
    {
        int32_t eax_4 = sub_4f2350(eax_2, 1);
        eax_4 = 0;
        return eax_4;
    }

    *(a1 + 0x3c94) = 0x3f800000;
    eax_3 = 0;
    return eax_3;
}
