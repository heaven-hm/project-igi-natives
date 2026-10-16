#include "004965A0-Display_CreateSurface_10.h"
/* 0x004965a0 Display_CreateSurface_10 full linked: callers=2 callees=9 */
int32_t* sub_4965a0(int32_t* a1)

{
    void var_20;
    sub_497390(&var_20, a1);
    int32_t* result = sub_496470(0x5ca1b8, sub_497450(&var_20), sub_497410(&var_20));

    if (result)
    {
        int32_t var_30_1 = 0x5ca1b8;
        sub_496640(result);
        int32_t* eax_2 = result[9];

        if (eax_2)
            (*(*eax_2 + 8))(eax_2);

        void* eax_3 = result[0xa];

        if (eax_3)
        {
            sub_4b0d10(eax_3);
            result[0xa] = 0;
        }

        sub_4b0d10(result);
        result = sub_4b64e0(a1);

        if (result)
            return Resource_Unload(a1);
    }

    return result;
}
