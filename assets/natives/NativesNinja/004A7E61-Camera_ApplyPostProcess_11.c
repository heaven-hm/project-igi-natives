#include "004A7E61-Camera_ApplyPostProcess_11.h"
/* 0x004a7e61 Camera_ApplyPostProcess_11 full linked: callers=4 callees=1 */
int32_t* sub_4a7e61(int32_t a1, int32_t* a2, int32_t* a3)

{
    int32_t temp0 = a2[1];
    a2[1] -= 1;
    uint32_t eax_1;

    if (temp0 - 1 < 0)
    {
        int32_t var_c_1 = a1;
        eax_1 = sub_4a760b(a2);
    }
    else
    {
        char eax = a1;
        **a2 = eax;
        *a2 += 1;
        eax_1 = eax;
    }

    if (eax_1 != 0xffffffff)
    {
        *a3 += 1;
        return a3;
    }

    *a3 = 0xffffffff;
    return a3;
}
