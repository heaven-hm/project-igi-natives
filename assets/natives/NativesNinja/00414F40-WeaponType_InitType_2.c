#include "00414F40-WeaponType_InitType_2.h"
/* 0x00414f40 WeaponType_InitType_2 full linked: callers=1 callees=8 */
int32_t WeaponType_InitType_2(int32_t a1, void* a2, int32_t a3, char* a4)

{
    int32_t eax = sub_4c48c0();
    int16_t var_10 = eax;
    eax = *(a2 + 0x1c);
    char eax_1;
    int32_t ecx;
    eax_1 = TaskType_IsDerivedFrom(eax, var_10);

    if (!eax_1)
    {
        int16_t eax_2 = sub_4d9610();
        ecx = *(a2 + 0x1c);

        if (TaskType_IsDerivedFrom(ecx, eax_2))
        {
            int32_t* eax_4 = sub_4cec10(a4);

            if (eax_4 && sub_4d0d20(*eax_4) > a3)
            {
                char* var_10_4 = a4;
                int32_t var_14_2 = a3;
                void* var_18 = a2;
                return sub_4d0930(a1);
            }
        }
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}
