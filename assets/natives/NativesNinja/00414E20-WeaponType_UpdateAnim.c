#include "00414E20-WeaponType_UpdateAnim.h"
/* 0x00414e20 WeaponType_UpdateAnim full linked: callers=37 callees=9 */
double* WeaponType_UpdateAnim(double* a1, double* a2, int32_t a3)

{
    int32_t eax = sub_4c48c0();
    int16_t var_c = eax;
    eax = *(a2 + 0x1c);

    if (!TaskType_IsDerivedFrom(eax, var_c))
    {
        int32_t eax_5 = sub_4d9610();
        int16_t var_c_3 = eax_5;
        eax_5 = *(a2 + 0x1c);

        if (TaskType_IsDerivedFrom(eax_5, var_c_3))
        {
            int32_t* eax_7 = *(a2 + 0x74);

            if (eax_7 && sub_4d0d20(*eax_7) > a3)
            {
                int32_t var_c_5 = a3;
                double* var_10_3 = a2;
                return sub_4d0930(a1);
            }
        }
    }
    else
    {
        int32_t* eax_2 = *(a2 + 0x6c);

        if (eax_2 && sub_4d0d20(*eax_2) > a3)
            return sub_4d0a50(a1, a2, a3);
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}
