#include "00467410-DefineComputerObjective_LoadParameters.h"
/* 0x00467410 DefineComputerObjective_LoadParameters full linked: callers=0 callees=6 */
char sub_467410(int80_t a1 @ st0, void* a2)

{
    char eax = sub_4f16c0(a2 + 0x20);
    char result;
    int16_t top;

    if (eax)
    {
        sub_4f16e0(a2 + 0x20, a2);
        top = 1;
        result = a1;
    }

    if (!eax || result)
    {
        g_5bdc78 = a2;
        int32_t* esi_1 = a2 + 0x134;
        int32_t i_1 = 6;
        int32_t i;

        do
        {
            if (!sub_4f16c0(&esi_1[-0x28]))
                *esi_1 = 0;
            else
            {
                sub_4f16e0(&esi_1[-0x28], a2);
🚫🚫🚫                char var_8_2 = /* char var_8_2 =
                    (unimplemented  {fistp qword [esp+0x18], st0}).b */;
                /* unimplemented  {fistp qword [esp+0x18], st0} */
                top += 1;
                *esi_1 = var_8_2;
            }

            result = sub_4f16c0(&esi_1[-0x14]);

            if (!result)
                esi_1[1] = 0;
            else
            {
                result = sub_4f16e0(&esi_1[-0x14], a2);
🚫🚫🚫                char var_8_3 = /* char var_8_3 =
                    (unimplemented  {fistp qword [esp+0x18], st0}).b */;
                /* unimplemented  {fistp qword [esp+0x18], st0} */
                top += 1;
                esi_1[1] = var_8_3;
            }

            esi_1 = &esi_1[0x33];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
