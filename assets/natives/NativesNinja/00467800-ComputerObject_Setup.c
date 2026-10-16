#include "00467800-ComputerObject_Setup.h"
/* 0x00467800 ComputerObject_Setup full linked: callers=0 callees=5 */
int32_t* sub_467800(double* a1)

{
    int32_t* result = *(a1 + 0x6c);

    if (result)
    {
        result = sub_4d0d20(*result);

        if (result > 0xa)
        {
            int16_t eax_1 = sub_447d20();
            int32_t var_3c;

            if (*(a1 + 0x1c) != eax_1)
            {
                var_3c = 0x3f000000;
                int32_t var_38_2 = 0x3f000000;
                int32_t var_34_2 = 0x3f000000;
            }
            else
            {
                var_3c = 0x3f800000;
                int32_t var_38_1 = 0x3f800000;
                int32_t var_34_1 = 0x3f800000;
            }

            double var_18;
            sub_4d0a50(&var_18, a1, 0xa);
            double var_30;
            sub_4d0a50(&var_30, a1, 0xb);
            var_18 = var_18 + a1[4];
            double var_10;
            double var_10_1 = var_10 + a1[5];
            double var_8;
            double var_8_1 = var_8 + a1[6];
            var_30 = var_30 + a1[4];
            double var_28;
            double var_28_1 = var_28 + a1[5];
            double var_20;
            double var_20_1 = var_20 + a1[6];
            return sub_4e1130(&var_18, &var_30, &var_3c, 1f, &var_3c, 1f);
        }
    }

    return result;
}
