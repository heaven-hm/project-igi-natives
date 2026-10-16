#include "004C0E60-DynObj_CreateMagicObject_3.h"
/* 0x004c0e60 DynObj_CreateMagicObject_3 full linked: callers=0 callees=5 */
int32_t sub_4c0e60(int32_t* a1, int32_t* a2, char a3)

{
    void var_2c8;
    int32_t result = sub_4bb240(&var_2c8, a2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;

        if (result == 9 || result == 0xc)
        {
            char var_2cd = a3;
            int32_t var_2cc = 0;
            void var_2bf;

            if (result != 9)
                var_2cc = sub_4c08c0(&var_2bf) + 0xfffffffb - *a2;
            else
            {
                void var_2c0;
                void** eax_1 = sub_4bafd0(a2, &var_2c0);

                if (!eax_1)
                    a2[1] = 1;
                else
                {
                    eax_1[2] = *a2 + 1;
                    eax_1[3] = *a2 + 5;
                }
            }
            *a1 = 5;
            sub_4b1700(a2[4], &var_2cd, 1);
            return sub_4b1700(a2[4], &var_2cc, 4);
        }
    }

    a2[1] = 1;
    return result;
}
