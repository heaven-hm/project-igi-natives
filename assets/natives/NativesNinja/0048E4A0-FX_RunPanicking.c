#include "0048E4A0-FX_RunPanicking.h"
/* 0x0048e4a0 FX_RunPanicking full linked: callers=0 callees=4 */
int32_t sub_48e4a0(void* a1, int32_t* a2)

{
    char* var_10 = "Run panicking";
    int32_t var_14 = 0xffffffff;
    void* var_18 = a1;
    void* esi_1 = a2[0xa] + 8;

    if (*(esi_1 + 0x20) != 0xffffffff)
    {
        sub_48ef70(a1, 5, 1f);
        char result = sub_4522a0(a1, *(esi_1 + 0x20), a1 + 0x3eb0, 0);

        if (!result)
            return result;

        *(a1 + 0x3de8) = 0xffffffff;
    }

    return sub_450ff0(a1, a2);
}
