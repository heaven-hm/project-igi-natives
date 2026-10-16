#include "00414ED0-WeaponType_RegisterType_2.h"
/* 0x00414ed0 WeaponType_RegisterType_2 full linked: callers=26 callees=4 */
void** WeaponType_RegisterType_2(void** a1, void* a2, int32_t a3)

{
    int32_t eax = sub_4c48c0();
    int16_t var_8 = eax;
    eax = *(a2 + 0x1c);

    if (TaskType_IsDerivedFrom(eax, var_8))
    {
        int32_t* eax_2 = *(a2 + 0x6c);

        if (eax_2 && sub_4d0d20(*eax_2) > a3)
            return sub_4d0970(a1, a2, a3);
    }

    *a1 = nullptr;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
}
