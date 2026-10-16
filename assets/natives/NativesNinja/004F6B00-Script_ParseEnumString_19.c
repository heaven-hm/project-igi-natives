#include "004F6B00-Script_ParseEnumString_19.h"
/* 0x004f6b00 Script_ParseEnumString_19 full linked: callers=1 callees=1 */
void* sub_4f6b00(void* a1)

{
    float eax = *(a1 + 0x2c7c);
    long double x87_r7_1 = *(a1 + 0x2c7c) * 3f;
    double var_20;
    memcpy(&var_20, a1 + 0x2c08, 0x18);
    float var_28_1 = eax * 3f;
    int32_t var_38 = 0;
    void* result = a1 + 0x78;
    long double x87_r7_2 = var_20 - x87_r7_1;
    bool cond:2_1;

    do
    {
        long double x87_r4_1 = var_38;
        int32_t i = 0;
        int32_t i_1 = 0;

        do
        {
            int32_t j = 0;
            int32_t j_1 = 0;

            do
            {
                j += 1;
                result += 0x20;
                *(result - 0x30) = x87_r4_1 * *(a1 + 0x2c7c) + x87_r7_2;
                double var_18;
                *(result - 0x28) = i_1 * *(a1 + 0x2c7c) + var_18 - var_28_1;
                long double x87_r2_7 = j_1;
                j_1 = j;
                long double x87_r2_8 = x87_r2_7 * *(a1 + 0x2c7c);
                *(result - 0x14) = 1;
                *(result - 0x18) = 0;
                double var_10;
                *(result - 0x20) = x87_r2_8 + var_10 - eax * 3f;
            } while (j < 7);

            i += 1;
            i_1 = i;
        } while (i < 7);

        cond:2_1 = var_38 + 1 < 7;
        var_38 += 1;
    } while (cond:2_1);
    return result;
}
